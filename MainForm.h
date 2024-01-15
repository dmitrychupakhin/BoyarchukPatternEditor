#pragma once

#include "GraphicField.h"

namespace BoyarchukPatternEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GraphicField^ graphicField;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


































	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
/// 
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"XML-файлы (*.xml)|*.xml";
			this->saveFileDialog->Title = L"Сохранить как...";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"PNG Image|*.png";
			this->saveFileDialog1->Title = L"Сохранить как PNG...";
			// 
			// openFileDialog
			// 
			this->openFileDialog->Filter = L"XML-файлы (*.xml)|*.xml";
			this->openFileDialog->Title = L"Открыть как...";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 94)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(982, 603);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(103, 566);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(876, 37);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Редактор выкройки - Боярчук Даниил ПИ-22-1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->button8, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->button6, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->button5, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->button4, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->button3, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->button2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 7);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 8;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(94, 560);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Location = System::Drawing::Point(3, 423);
			this->button8->MaximumSize = System::Drawing::Size(90, 0);
			this->button8->MinimumSize = System::Drawing::Size(90, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 64);
			this->button8->TabIndex = 8;
			this->button8->Text = L"PNG";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(3, 353);
			this->button6->MaximumSize = System::Drawing::Size(90, 0);
			this->button6->MinimumSize = System::Drawing::Size(90, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 64);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Из файла";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(3, 143);
			this->button5->MaximumSize = System::Drawing::Size(90, 0);
			this->button5->MinimumSize = System::Drawing::Size(90, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 64);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Цвет";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(3, 283);
			this->button4->MaximumSize = System::Drawing::Size(90, 0);
			this->button4->MinimumSize = System::Drawing::Size(90, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 64);
			this->button4->TabIndex = 4;
			this->button4->Text = L"В файл";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(3, 213);
			this->button3->MaximumSize = System::Drawing::Size(90, 0);
			this->button3->MinimumSize = System::Drawing::Size(90, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 64);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(3, 73);
			this->button2->MaximumSize = System::Drawing::Size(90, 0);
			this->button2->MinimumSize = System::Drawing::Size(90, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 64);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Текст";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->MaximumSize = System::Drawing::Size(90, 0);
			this->button1->MinimumSize = System::Drawing::Size(90, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Карандаш";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox1, 0, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 490);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 75)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(94, 70);
			this->tableLayoutPanel3->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Text";
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(88, 36);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(100, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(882, 566);
			this->panel1->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2000, 2000);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseClick);
			this->pictureBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseDoubleClick);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseUp);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 603);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool isPen = false;
	private: bool isRemove = false;
	private: bool isText = false;
	private: Button^ activeButton = nullptr;
	private: bool isStarted = false;
	private: bool isMouseDown = false;
	private: bool isSizeLine = false;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->graphicField = gcnew GraphicField();

		graphicField->SetPictureBox(pictureBox1);
		graphicField->InitializeField();
	}
	
	private: Void ActivatedButton(System::Object^ sender) {
		if (activeButton != nullptr) {
			activeButton->BackColor = Color::White;
		}
		isPen = false;
		isRemove = false;
		isText = false;
		activeButton = dynamic_cast<Button^>(sender);
		activeButton->BackColor = Color::LightCoral;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivatedButton(sender);
		isPen = true;
	}
	private: System::Void pictureBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isPen) {
			if (isStarted) {
				isPen = false;
				isStarted = false;
				if (activeButton != nullptr) {
					activeButton->BackColor = Color::White;
				}
				return;
			}
			graphicField->AddPenElement();
			graphicField->AddPointToCurrentPenElement(e->Location);
			isStarted = true;
		}
		else if (isRemove) {
			graphicField->Remove(e->Location);
			return;
		}
		else if (isText) {
			graphicField->AddTextElement(e->Location);
			return;
		}
	}

	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isPen && isStarted) {
			graphicField->AddPointToCurrentPenElement(e->Location);
		}
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		graphicField->SetCurrentColor(colorDialog->Color);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	ActivatedButton(sender);
	isRemove = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ActivatedButton(sender);
	isText = true;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	graphicField->SetTextOnCurrentTextElement(textBox1->Text);
}
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//label1->Text = isMouseDown.ToString();
	if (isMouseDown && isText) {
		//System::Windows::Forms::MessageBox::Show(isStarted.ToString(), "Заголовок", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);

		graphicField->SetPositionOnCurrentTextElement(e->Location);
	}
}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//System::Windows::Forms::MessageBox::Show(isStarted.ToString(), "Заголовок", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);

		if (isMouseDown && isText) {
			isMouseDown = false;
		}
	}
private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isText) {
		graphicField->SetCurrentTextElement(e->Location);
		isMouseDown = true;
		//System::Windows::Forms::MessageBox::Show(isMouseDown.ToString(), "Заголовок", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);

	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	isSizeLine = true;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Получаем выбранный пользователем путь к файлу
		String^ filePath = saveFileDialog1->FileName;

		// Создаем Bitmap из изображения в PictureBox
		Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);

		// Сохраняем Bitmap в выбранный файл в формате PNG
		bmp->Save(filePath, ImageFormat::Png);

		// Освобождаем ресурсы
		delete bmp;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Получаем выбранный пользователем путь к файлу
		String^ filePath = saveFileDialog->FileName;

		graphicField->SaveXMLFile(filePath);

	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Получаем выбранный пользователем путь к файлу
		String^ filePath = openFileDialog->FileName;

		graphicField->OpenXMLFile(filePath);
	}
}
};
}
