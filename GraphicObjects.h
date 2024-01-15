#pragma once

namespace BoyarchukPatternEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Collections::Generic;
	using namespace System::Drawing;

	public ref class GraphicElement {
	public:
		System::Drawing::Color color;
		virtual void Drawing(Graphics^ g) = 0;
	};

	public ref class TextElement : GraphicElement {
	private:
		Point point = Point(0,0);
		String^ data = "text";
		Font^ font = gcnew System::Drawing::Font("Arial", 20);
	public:
		Font^ GetFont() {
			return font;
		}
		String^ GetData() {
			return data;
		}
		Point GetPoint() {
			return point;
		}
		TextElement(Color color) {
			this->color = color;
		}
		TextElement(Color color, Point p) {
			this->color = color;
			this->point = p;
		}
		Void SetPoint(Point point) {
			this->point = point;
		}
		Void SetData(String^ data) {
			this->data = data;
		}
		bool IsPointOnElement(Point pointCursor) {
			System::Drawing::Size textSize = TextRenderer::MeasureText(data, font);

			// Создаем прямоугольник ограничивающий текстовый элемент
			System::Drawing::Rectangle boundingRect(point, textSize);

			// Проверяем, находится ли точка внутри прямоугольника
			return boundingRect.Contains(pointCursor);
		}
		void Drawing(Graphics^ g) override {
			g->DrawString(data, font, gcnew SolidBrush(color), point);
		}
	};

	public ref class PenElement : GraphicElement {
	private:
		List<Point>^ points;

		double Distance(Point p1, Point p2) {
			// Вычисляем расстояние между двумя точками
			int dx = p2.X - p1.X;
			int dy = p2.Y - p1.Y;
			return Math::Sqrt(dx * dx + dy * dy);
		}

		bool IsPointOnLine(Point p, Point start, Point end) {
			double d1 = Distance(start, p);
			double d2 = Distance(p, end);
			double lineLength = Distance(start, end);

			// Погрешность, которую вы можете установить в зависимости от ваших потребностей
			double epsilon = 0.5;

			// Проверяем, находится ли точка на линии
			return Math::Abs(d1 + d2 - lineLength) < epsilon;
		}
	public:
		PenElement(Color color) {
			this->color = color;
			this->points = gcnew List<Point>();
		}
		List<Point>^ GetPoints() {
			return points;
		}
		void Drawing(Graphics^ g) override {
			Pen^ pen = gcnew Pen(color, 2);
			Point lastPoint = Point(0, 0);

			if (points->Count < 2) {
				return;
			}

			for (int i = 0; i < points->Count; i++) {
				if (i + 1 == points->Count) {
					break;
				}
				g->DrawLine(pen, points[i], points[i + 1]);
			}
		}
		bool IsClickOnConnection(Point clickPoint) {
			// Проверяем, был ли клик на стрелке
			for (int i = 0; i < points->Count - 1; i++) {
				if (IsPointOnLine(clickPoint, points[i], points[i + 1])) {
					return true;
				}
			}

			return false;
		}
	};
}