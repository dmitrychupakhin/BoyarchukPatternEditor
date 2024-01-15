#pragma once
#include "GraphicObjects.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace System::Xml;

namespace BoyarchukPatternEditor {
	public ref class GraphicField {
		PenElement^ currentPenElement = nullptr;
		TextElement^ currentTextElement = nullptr;
		System::Drawing::Color currentColor = Color::Black;

		PictureBox^ pictureBox = nullptr;
		List<GraphicElement^>^graphicElements = gcnew List<GraphicElement^>();
	public:

		void SaveXMLFile(String^ path) {
			XmlDocument^ xmlDoc = gcnew XmlDocument();
			XmlElement^ root = xmlDoc->CreateElement("Elements");
			xmlDoc->AppendChild(root);

			for each (GraphicElement ^ ge in graphicElements) {
				PenElement^ pe = dynamic_cast<PenElement^>(ge);
				if (pe != nullptr) {
					XmlElement^ childElement = xmlDoc->CreateElement("PenElement");
					root->AppendChild(childElement);

					XmlElement^ Color = xmlDoc->CreateElement("Color");
					Color->InnerText = pe->color.Name;

					childElement->AppendChild(Color);

					for (int i = 0; i < pe->GetPoints()->Count; i++) {
						XmlElement^ Point = xmlDoc->CreateElement("Point");
						XmlElement^ X = xmlDoc->CreateElement("X");
						X->InnerText = pe->GetPoints()[i].X.ToString();
						Point->AppendChild(X);
						XmlElement^ Y = xmlDoc->CreateElement("Y");
						Y->InnerText = pe->GetPoints()[i].Y.ToString();
						Point->AppendChild(Y);
						childElement->AppendChild(Point);
					}
				}
				else {
					TextElement^ te = dynamic_cast<TextElement^>(ge);

					XmlElement^ childElement = xmlDoc->CreateElement("TextElement");
					root->AppendChild(childElement);

					XmlElement^ Color = xmlDoc->CreateElement("Color");
					Color->InnerText = te->color.Name;
					childElement->AppendChild(Color);

					XmlElement^ Data = xmlDoc->CreateElement("Data");
					Data->InnerText = te->GetData();
					childElement->AppendChild(Data);

					XmlElement^ Point = xmlDoc->CreateElement("Point");
					XmlElement^ X = xmlDoc->CreateElement("X");
					X->InnerText = te->GetPoint().X.ToString();
					Point->AppendChild(X);
					XmlElement^ Y = xmlDoc->CreateElement("Y");
					Y->InnerText = te->GetPoint().Y.ToString();
					Point->AppendChild(Y);
					childElement->AppendChild(Point);

				}
			}
			try
			{
				xmlDoc->Save(path);
				MessageBox::Show("XML файл успешно сохранен по пути: " + path, "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Ошибка при сохранении XML файла: " + e->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		Void OpenXMLFile(String^ path) {
			XmlDocument^ xmlDoc = gcnew XmlDocument();

			graphicElements->Clear();

			try
			{
				// Загружаем XML-файл
				xmlDoc->Load(path);

				// Получаем корневой элемент
				XmlElement^ root = xmlDoc->DocumentElement;

				XmlNodeList^ PenElements = root->SelectNodes("/Elements/PenElement");

				for each (XmlNode ^ elementNode in PenElements)
				{
					// Получаем значения из дочерних элементов
					String^ Color = elementNode->SelectSingleNode("Color")->InnerText;

					XmlNodeList^ pointsNodes = elementNode->SelectNodes("/Elements/PenElement/Point");

					PenElement^ newPenElement = gcnew PenElement(Color::FromName((Color)));

					for each (XmlNode ^ pointNode in pointsNodes)
					{
						String^ X = pointNode->SelectSingleNode("X")->InnerText;
						String^ Y = pointNode->SelectSingleNode("Y")->InnerText;

						newPenElement->GetPoints()->Add(Point(System::Convert::ToInt32(X), System::Convert::ToInt32(Y)));
					}

					graphicElements->Add(newPenElement);
				}

				XmlNodeList^ TextElements = root->SelectNodes("/Elements/TextElement");

				for each (XmlNode ^ elementNode in TextElements)
				{
					String^ Color = elementNode->SelectSingleNode("Color")->InnerText;
					String^ Data = elementNode->SelectSingleNode("Data")->InnerText;

					XmlNode^ pointNode = elementNode->SelectNodes("/Elements/TextElement/Point")[0];

					String^ X = pointNode->SelectSingleNode("X")->InnerText;
					String^ Y = pointNode->SelectSingleNode("Y")->InnerText;

					unsigned int argbValue = Convert::ToUInt32(Color, 16);
					TextElement^ newTextElement = gcnew TextElement(Color::FromArgb(argbValue));
					newTextElement->SetData(Data);
					newTextElement->SetPoint(Point(System::Convert::ToInt32(X), System::Convert::ToInt32(Y)));
					graphicElements->Add(newTextElement);
				}
				UpdateField();

			}
			catch (Exception^ e)
			{
				MessageBox::Show("Ошибка при чтении XML файла: " + e->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		void Remove(Point point) {
			for (int i = 0; i < graphicElements->Count; i++) {
				PenElement^ pe = dynamic_cast<PenElement^>(graphicElements[i]);
				if (pe != nullptr) {
					if (pe->IsClickOnConnection(point)) {
						graphicElements->RemoveAt(i);
						UpdateField();
						return;
					}
				}
				TextElement^ te = dynamic_cast<TextElement^>(graphicElements[i]);
				if (te != nullptr) {
					if (te->IsPointOnElement(point)) {
						graphicElements->RemoveAt(i);
						UpdateField();
						return;
					}
				}
			}
		}
		void SetCurrentTextElement(Point p) {
			currentTextElement = nullptr;

			for each (GraphicElement ^ ge in graphicElements) {
				TextElement^ te = dynamic_cast<TextElement^>(ge);
				if (te != nullptr) {
					if (te->IsPointOnElement(p)) {
						currentTextElement = te;
						return;
					}
				}
			}
			currentTextElement = nullptr;
		}
		void SetPositionOnCurrentTextElement(Point p) {
			if (currentTextElement != nullptr) {
				currentTextElement->SetPoint(p);
				UpdateField();
			}
			
		}
		void SetCurrentColor(Color c) {
			currentColor = c;
		}
		void SetTextOnCurrentTextElement(String^ s) {
			currentTextElement->SetData(s);
			UpdateField();
		}
		void AddTextElement(Point p) {
			TextElement^ newTextElement = gcnew TextElement(currentColor, p);

			graphicElements->Add(newTextElement);
			currentTextElement = newTextElement;
			UpdateField();
		}
		void AddPenElement() {
			PenElement^ newPenElement = gcnew PenElement(currentColor);

			graphicElements->Add(newPenElement);
			currentPenElement = newPenElement;

		}
		void AddPointToCurrentPenElement(Point point) {
			currentPenElement->GetPoints()->Add(point);
			UpdateField();
		}
		void SetPictureBox(PictureBox^ pb) {
			this->pictureBox = pb;
		}
		void InitializeField() {
			Bitmap^ bmp = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
			Graphics^ g = Graphics::FromImage(bmp);

			g->Clear(pictureBox->BackColor);

			Pen^ pen = gcnew Pen(Color::LightGray);

			// Задаем шаг сетки (расстояние между линиями)
			int step = 20;

			// Рисуем вертикальные линии
			for (int x = 0; x < g->VisibleClipBounds.Width; x += step) {
				g->DrawLine(pen, (float)x, (float)0, (float)x, (float)g->VisibleClipBounds.Height);
			}

			// Рисуем горизонтальные линии
			for (int y = 0; y < g->VisibleClipBounds.Height; y += step) {
				g->DrawLine(pen, (float)0, (float)y, (float)g->VisibleClipBounds.Width, (float)y);
			}

			pictureBox->Image = bmp;
		}
		void UpdateField() {
			Bitmap^ bmp = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
			Graphics^ g = Graphics::FromImage(bmp);

			g->Clear(pictureBox->BackColor);

			Pen^ pen = gcnew Pen(Color::LightGray);

			// Задаем шаг сетки (расстояние между линиями)
			int step = 20;

			// Рисуем вертикальные линии
			for (int x = 0; x < g->VisibleClipBounds.Width; x += step) {
				g->DrawLine(pen, (float)x, (float)0, (float)x, (float)g->VisibleClipBounds.Height);
			}

			// Рисуем горизонтальные линии
			for (int y = 0; y < g->VisibleClipBounds.Height; y += step) {
				g->DrawLine(pen, (float)0, (float)y, (float)g->VisibleClipBounds.Width, (float)y);
			}

			for each (GraphicElement ^ ge in graphicElements) {
				ge->Drawing(g);
			}

			pictureBox->Image = bmp;
		}
	};
}