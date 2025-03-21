#pragma once
#include <iostream>
#include <fstream>
#include <string>

namespace Notes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Graphics^ canvas;
		bool isPressed = false;
		int mode = 1;
		Bitmap^ texture;
		Color color;
		Pen^ pen;
		int posX = -1, posY = -1;
		int count = 1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîòîToolStripMenuItem1;
	private: System::Windows::Forms::Panel^ panelTools;


	private: System::Windows::Forms::Button^ buttonFont;



	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ buttonColorBackground;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ buttonColorText;

	private: System::Windows::Forms::Button^ buttonColor;
	private: System::Windows::Forms::TrackBar^ SizePen;





	private: System::Windows::Forms::Button^ buttonPen;
	private: System::Windows::Forms::Button^ buttonEllipse;
	private: System::Windows::Forms::Button^ buttonRectangle;












	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			canvas = inputText->CreateGraphics();
			color = Color::Black;
			Bitmap^ texture;
			pen = gcnew Pen(color, 2);
			canvas->DrawLine(pen, Point(0, 0), Point(100, 100));
			picturePlace->Visible = false;
			òåêñòToolStripMenuItem->Enabled = false;

			buttonFont->Visible = true;
			buttonColorText->Visible = true;
			buttonColorBackground->Visible = true;

			buttonPen->Visible = false;
			buttonEllipse->Visible = false;
			buttonRectangle->Visible = false;
			buttonColor->Visible = false;
			SizePen->Visible = false;
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuMode;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòîâûéÄîêóìåíòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîòîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåæèìToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğèñîâàíèåToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ inputText;
	private: System::Windows::Forms::PictureBox^ picturePlace;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuMode = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîòîToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòîâûéÄîêóìåíòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîòîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåæèìToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğèñîâàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inputText = (gcnew System::Windows::Forms::RichTextBox());
			this->picturePlace = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panelTools = (gcnew System::Windows::Forms::Panel());
			this->buttonRectangle = (gcnew System::Windows::Forms::Button());
			this->buttonPen = (gcnew System::Windows::Forms::Button());
			this->buttonEllipse = (gcnew System::Windows::Forms::Button());
			this->SizePen = (gcnew System::Windows::Forms::TrackBar());
			this->buttonColor = (gcnew System::Windows::Forms::Button());
			this->buttonColorText = (gcnew System::Windows::Forms::Button());
			this->buttonColorBackground = (gcnew System::Windows::Forms::Button());
			this->buttonFont = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuMode->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlace))->BeginInit();
			this->panelTools->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizePen))->BeginInit();
			this->SuspendLayout();
			// 
			// menuMode
			// 
			this->menuMode->BackColor = System::Drawing::SystemColors::MenuBar;
			this->menuMode->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->ğåæèìToolStripMenuItem
			});
			this->menuMode->Location = System::Drawing::Point(0, 0);
			this->menuMode->Name = L"menuMode";
			this->menuMode->Size = System::Drawing::Size(494, 24);
			this->menuMode->TabIndex = 0;
			this->menuMode->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->íîâûéToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->ñîõğàíèòüToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// íîâûéToolStripMenuItem
			// 
			this->íîâûéToolStripMenuItem->Name = L"íîâûéToolStripMenuItem";
			this->íîâûéToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->íîâûéToolStripMenuItem->Text = L"Íîâûé";
			this->íîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íîâûéToolStripMenuItem_Click);
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òåêñòToolStripMenuItem1,
					this->ôîòîToolStripMenuItem1
			});
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü êàê";
			// 
			// òåêñòToolStripMenuItem1
			// 
			this->òåêñòToolStripMenuItem1->Name = L"òåêñòToolStripMenuItem1";
			this->òåêñòToolStripMenuItem1->Size = System::Drawing::Size(104, 22);
			this->òåêñòToolStripMenuItem1->Text = L"Òåêñò";
			this->òåêñòToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::òåêñòToolStripMenuItem1_Click);
			// 
			// ôîòîToolStripMenuItem1
			// 
			this->ôîòîToolStripMenuItem1->Name = L"ôîòîToolStripMenuItem1";
			this->ôîòîToolStripMenuItem1->Size = System::Drawing::Size(104, 22);
			this->ôîòîToolStripMenuItem1->Text = L"Ôîòî";
			this->ôîòîToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ôîòîToolStripMenuItem1_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òåêñòîâûéÄîêóìåíòToolStripMenuItem,
					this->ôîòîToolStripMenuItem
			});
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü êàê";
			// 
			// òåêñòîâûéÄîêóìåíòToolStripMenuItem
			// 
			this->òåêñòîâûéÄîêóìåíòToolStripMenuItem->Name = L"òåêñòîâûéÄîêóìåíòToolStripMenuItem";
			this->òåêñòîâûéÄîêóìåíòToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->òåêñòîâûéÄîêóìåíòToolStripMenuItem->Text = L"Òåêñò";
			this->òåêñòîâûéÄîêóìåíòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òåêñòîâûéÄîêóìåíòToolStripMenuItem_Click);
			// 
			// ôîòîToolStripMenuItem
			// 
			this->ôîòîToolStripMenuItem->Name = L"ôîòîToolStripMenuItem";
			this->ôîòîToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->ôîòîToolStripMenuItem->Text = L"Ôîòî";
			this->ôîòîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôîòîToolStripMenuItem_Click);
			// 
			// ğåæèìToolStripMenuItem
			// 
			this->ğåæèìToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òåêñòToolStripMenuItem,
					this->ğèñîâàíèåToolStripMenuItem
			});
			this->ğåæèìToolStripMenuItem->Name = L"ğåæèìToolStripMenuItem";
			this->ğåæèìToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->ğåæèìToolStripMenuItem->Text = L"Ğåæèì";
			// 
			// òåêñòToolStripMenuItem
			// 
			this->òåêñòToolStripMenuItem->Name = L"òåêñòToolStripMenuItem";
			this->òåêñòToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->òåêñòToolStripMenuItem->Text = L"Òåêñò";
			this->òåêñòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òåêñòToolStripMenuItem_Click);
			// 
			// ğèñîâàíèåToolStripMenuItem
			// 
			this->ğèñîâàíèåToolStripMenuItem->Name = L"ğèñîâàíèåToolStripMenuItem";
			this->ğèñîâàíèåToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->ğèñîâàíèåToolStripMenuItem->Text = L"Ğèñîâàíèå";
			this->ğèñîâàíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğèñîâàíèåToolStripMenuItem_Click);
			// 
			// inputText
			// 
			this->inputText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputText->BackColor = System::Drawing::Color::White;
			this->inputText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputText->Location = System::Drawing::Point(0, 58);
			this->inputText->Name = L"inputText";
			this->inputText->Size = System::Drawing::Size(494, 364);
			this->inputText->TabIndex = 1;
			this->inputText->Text = L"";
			// 
			// picturePlace
			// 
			this->picturePlace->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->picturePlace->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->picturePlace->Location = System::Drawing::Point(405, 399);
			this->picturePlace->Name = L"picturePlace";
			this->picturePlace->Size = System::Drawing::Size(494, 398);
			this->picturePlace->TabIndex = 2;
			this->picturePlace->TabStop = false;
			this->picturePlace->Visible = false;
			this->picturePlace->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->picturePlace->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->picturePlace->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panelTools
			// 
			this->panelTools->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panelTools->Controls->Add(this->buttonRectangle);
			this->panelTools->Controls->Add(this->buttonPen);
			this->panelTools->Controls->Add(this->buttonEllipse);
			this->panelTools->Controls->Add(this->SizePen);
			this->panelTools->Controls->Add(this->buttonColor);
			this->panelTools->Controls->Add(this->buttonColorText);
			this->panelTools->Controls->Add(this->buttonColorBackground);
			this->panelTools->Controls->Add(this->buttonFont);
			this->panelTools->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTools->Location = System::Drawing::Point(0, 24);
			this->panelTools->Name = L"panelTools";
			this->panelTools->Size = System::Drawing::Size(494, 33);
			this->panelTools->TabIndex = 3;
			// 
			// buttonRectangle
			// 
			this->buttonRectangle->Location = System::Drawing::Point(164, 5);
			this->buttonRectangle->Name = L"buttonRectangle";
			this->buttonRectangle->Size = System::Drawing::Size(97, 23);
			this->buttonRectangle->TabIndex = 10;
			this->buttonRectangle->Text = L"Ïğÿìîóãîëüíèê";
			this->buttonRectangle->UseVisualStyleBackColor = true;
			this->buttonRectangle->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// buttonPen
			// 
			this->buttonPen->Location = System::Drawing::Point(12, 5);
			this->buttonPen->Name = L"buttonPen";
			this->buttonPen->Size = System::Drawing::Size(70, 23);
			this->buttonPen->TabIndex = 8;
			this->buttonPen->Text = L"Êàğàíäàø";
			this->buttonPen->UseVisualStyleBackColor = true;
			this->buttonPen->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// buttonEllipse
			// 
			this->buttonEllipse->Location = System::Drawing::Point(88, 5);
			this->buttonEllipse->Name = L"buttonEllipse";
			this->buttonEllipse->Size = System::Drawing::Size(70, 23);
			this->buttonEllipse->TabIndex = 9;
			this->buttonEllipse->Text = L"İëëèïñ";
			this->buttonEllipse->UseVisualStyleBackColor = true;
			this->buttonEllipse->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// SizePen
			// 
			this->SizePen->BackColor = System::Drawing::SystemColors::MenuBar;
			this->SizePen->Location = System::Drawing::Point(315, 5);
			this->SizePen->Name = L"SizePen";
			this->SizePen->Size = System::Drawing::Size(97, 45);
			this->SizePen->TabIndex = 7;
			this->SizePen->Value = 1;
			this->SizePen->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// buttonColor
			// 
			this->buttonColor->Location = System::Drawing::Point(267, 5);
			this->buttonColor->Name = L"buttonColor";
			this->buttonColor->Size = System::Drawing::Size(42, 23);
			this->buttonColor->TabIndex = 4;
			this->buttonColor->Text = L"Öâåò";
			this->buttonColor->UseVisualStyleBackColor = true;
			this->buttonColor->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// buttonColorText
			// 
			this->buttonColorText->Location = System::Drawing::Point(67, 5);
			this->buttonColorText->Name = L"buttonColorText";
			this->buttonColorText->Size = System::Drawing::Size(77, 23);
			this->buttonColorText->TabIndex = 2;
			this->buttonColorText->Text = L"Öâåò òåêñòà";
			this->buttonColorText->UseVisualStyleBackColor = true;
			this->buttonColorText->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// buttonColorBackground
			// 
			this->buttonColorBackground->Location = System::Drawing::Point(150, 5);
			this->buttonColorBackground->Name = L"buttonColorBackground";
			this->buttonColorBackground->Size = System::Drawing::Size(69, 23);
			this->buttonColorBackground->TabIndex = 1;
			this->buttonColorBackground->Text = L"Öâåò ôîíà";
			this->buttonColorBackground->UseVisualStyleBackColor = true;
			this->buttonColorBackground->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonFont
			// 
			this->buttonFont->Location = System::Drawing::Point(3, 5);
			this->buttonFont->Name = L"buttonFont";
			this->buttonFont->Size = System::Drawing::Size(58, 23);
			this->buttonFont->TabIndex = 0;
			this->buttonFont->Text = L"Øğèôò";
			this->buttonFont->UseVisualStyleBackColor = true;
			this->buttonFont->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 422);
			this->Controls->Add(this->panelTools);
			this->Controls->Add(this->picturePlace);
			this->Controls->Add(this->inputText);
			this->Controls->Add(this->menuMode);
			this->MainMenuStrip = this->menuMode;
			this->MinimumSize = System::Drawing::Size(357, 283);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->menuMode->ResumeLayout(false);
			this->menuMode->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePlace))->EndInit();
			this->panelTools->ResumeLayout(false);
			this->panelTools->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizePen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		menuMode->Width = Width - inputText->Width;
		menuMode->Width = Width - picturePlace->Width;
	}
	private: System::Void íîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		inputText->Text = "";
		inputText->ForeColor = color.Black;
		inputText->BackColor = color.White;
		pen->Color = color.Black;
	}
	private: System::Void òåêñòToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->ShowDialog();
		String^ fname = openFileDialog1->FileName;
		if (fname != "openFileDialog1")
		{
			StreamReader^ file = File::OpenText(fname);
			inputText->Text = file->ReadToEnd();
		}
	}
	private: System::Void ôîòîToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->ShowDialog();
		String^ fname = openFileDialog1->FileName;
		if (fname != "openFileDialog1")
		{
			texture = gcnew Bitmap(fname);
			picturePlace->Width = texture->Width;
			picturePlace->Height = texture->Height;
			canvas = Graphics::FromImage(texture);
			picturePlace->Image = texture;
		}
		mode = 2;
		picturePlace->Visible = true;
		picturePlace->Top = inputText->Top;
		picturePlace->Left = inputText->Left;
	}
	private: System::Void òåêñòîâûéÄîêóìåíòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->ShowDialog();
		String^ fname = saveFileDialog1->FileName + ".txt";
		if (fname != "")
		{
			StreamWriter^ file = gcnew StreamWriter(fname);
			file->Write(inputText->Text);
			file->Close();
		}
	}
	private: System::Void ôîòîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->ShowDialog();
		String^ fname = saveFileDialog1->FileName + ".png";
		if (fname != "")
		{
			Bitmap^ img = gcnew Bitmap(picturePlace->Image);
			img->Save(fname);
			MessageBox::Show("Saved in " + fname);
		}
	}
	private: System::Void òåêñòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		inputText->Visible = true;
		picturePlace->Visible = false;
		mode = 1;
		òåêñòToolStripMenuItem->Enabled = false;
		ğèñîâàíèåToolStripMenuItem->Enabled = true;

		buttonFont->Visible = true;
		buttonColorText->Visible = true;
		buttonColorBackground->Visible = true;

		buttonPen->Visible = false;
		buttonEllipse->Visible = false;
		buttonRectangle->Visible = false;
		buttonColor->Visible = false;
		SizePen->Visible = false;
	}
	private: System::Void ğèñîâàíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		inputText->Visible = false;
		picturePlace->Visible = true;
		mode = 2;
		picturePlace->Top = inputText->Top;
		picturePlace->Left = inputText->Left;
		texture = gcnew Bitmap(inputText->Width, inputText->Height);
		inputText->DrawToBitmap(texture, Rectangle(0, 0, inputText->Width, inputText->Height));
		picturePlace->Width = texture->Width;
		picturePlace->Height = texture->Height;
		canvas = Graphics::FromImage(texture);
		picturePlace->Image = texture;
		òåêñòToolStripMenuItem->Enabled = true;
		ğèñîâàíèåToolStripMenuItem->Enabled = false;

		buttonFont->Visible = false;
		buttonColorText->Visible = false;
		buttonColorBackground->Visible = false;

		buttonPen->Visible = true;
		buttonEllipse->Visible = true;
		buttonRectangle->Visible = true;
		buttonColor->Visible = true;
		SizePen->Visible = true;
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isPressed = true;
		posX = e->X;
		posY = e->Y;
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isPressed = false;

		if (count == 2)
		{
			int x = posX < e->X ? posX : e->X;
			int y = posY < e->Y ? posY : e->Y;
			int width = posX - x + e->X - x;
			int height = posY - y + e->Y - y;
			canvas->DrawEllipse(pen, x, y, width, height);
			picturePlace->Image = texture;
		}
		else if (count == 3)
		{
			int x = posX < e->X ? posX : e->X;
			int y = posY < e->Y ? posY : e->Y;
			int width = posX - x + e->X - x;
			int height = posY - y + e->Y - y;
			canvas->DrawRectangle(pen, x, y, width, height);
			picturePlace->Image = texture;
		}
		posX = -1;
		posY = -1;
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isPressed && mode == 2)
		{
			if (count == 1)
			{
				canvas->DrawLine(pen, posX, posY, e->X, e->Y);
				posX = e->X;
				posY = e->Y;
				picturePlace->Image = texture;
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();
		inputText->Font = fontDialog1->Font;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		inputText->BackColor = colorDialog1->Color;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		inputText->ForeColor = colorDialog1->Color;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		pen->Color = colorDialog1->Color;
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		pen->Width = SizePen->Value;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		pen->Color = colorDialog1->Color;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		count = 1;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		count = 2;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		count = 3;
	}
};
}