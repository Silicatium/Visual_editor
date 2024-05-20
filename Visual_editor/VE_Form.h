#pragma once
//#include "Container.h"
#include "CFigure.h"
#include "CCircle.h"
#include "CSquare.h"
#include "CTriangle.h"

namespace Visualeditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// —водка дл€ VE_Form
	/// </summary>
	public ref class VE_Form : public System::Windows::Forms::Form {
	public:
		VE_Form(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~VE_Form() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ paintBox;
	private: System::Windows::Forms::CheckBox^ checkBoxCtrl;
	private: System::Windows::Forms::CheckBox^ checkBoxIntersaction;
	private: System::Windows::Forms::Panel^ panelFigure;
	private: System::Windows::Forms::Button^ buttonSquare;

	private: System::Windows::Forms::Button^ buttonCircle;
	private: System::Windows::Forms::Button^ buttonTriangle;
	private: System::Windows::Forms::PictureBox^ pictureBoxFigure;






	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VE_Form::typeid));
			this->paintBox = (gcnew System::Windows::Forms::PictureBox());
			this->checkBoxCtrl = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxIntersaction = (gcnew System::Windows::Forms::CheckBox());
			this->panelFigure = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxFigure = (gcnew System::Windows::Forms::PictureBox());
			this->buttonTriangle = (gcnew System::Windows::Forms::Button());
			this->buttonCircle = (gcnew System::Windows::Forms::Button());
			this->buttonSquare = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintBox))->BeginInit();
			this->panelFigure->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFigure))->BeginInit();
			this->SuspendLayout();
			// 
			// paintBox
			// 
			this->paintBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->paintBox->BackColor = System::Drawing::Color::White;
			this->paintBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->paintBox->Location = System::Drawing::Point(12, 97);
			this->paintBox->Name = L"paintBox";
			this->paintBox->Size = System::Drawing::Size(1009, 524);
			this->paintBox->TabIndex = 0;
			this->paintBox->TabStop = false;
			this->paintBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &VE_Form::paintBox_Paint);
			this->paintBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &VE_Form::paintBox_MouseClick);
			// 
			// checkBoxCtrl
			// 
			this->checkBoxCtrl->AutoSize = true;
			this->checkBoxCtrl->Location = System::Drawing::Point(13, 13);
			this->checkBoxCtrl->Name = L"checkBoxCtrl";
			this->checkBoxCtrl->Size = System::Drawing::Size(78, 17);
			this->checkBoxCtrl->TabIndex = 1;
			this->checkBoxCtrl->Text = L"Unlock Ctrl";
			this->checkBoxCtrl->UseVisualStyleBackColor = true;
			// 
			// checkBoxIntersaction
			// 
			this->checkBoxIntersaction->AutoSize = true;
			this->checkBoxIntersaction->Location = System::Drawing::Point(12, 37);
			this->checkBoxIntersaction->Name = L"checkBoxIntersaction";
			this->checkBoxIntersaction->Size = System::Drawing::Size(117, 17);
			this->checkBoxIntersaction->TabIndex = 2;
			this->checkBoxIntersaction->Text = L"Unlock intersaction";
			this->checkBoxIntersaction->UseVisualStyleBackColor = true;
			// 
			// panelFigure
			// 
			this->panelFigure->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelFigure->Controls->Add(this->pictureBoxFigure);
			this->panelFigure->Controls->Add(this->buttonTriangle);
			this->panelFigure->Controls->Add(this->buttonCircle);
			this->panelFigure->Controls->Add(this->buttonSquare);
			this->panelFigure->Location = System::Drawing::Point(228, 12);
			this->panelFigure->Name = L"panelFigure";
			this->panelFigure->Size = System::Drawing::Size(252, 64);
			this->panelFigure->TabIndex = 3;
			// 
			// pictureBoxFigure
			// 
			this->pictureBoxFigure->BackColor = System::Drawing::Color::White;
			this->pictureBoxFigure->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxFigure->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxFigure.Image")));
			this->pictureBoxFigure->Location = System::Drawing::Point(3, 3);
			this->pictureBoxFigure->Name = L"pictureBoxFigure";
			this->pictureBoxFigure->Size = System::Drawing::Size(54, 54);
			this->pictureBoxFigure->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBoxFigure->TabIndex = 3;
			this->pictureBoxFigure->TabStop = false;
			// 
			// buttonTriangle
			// 
			this->buttonTriangle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonTriangle.Image")));
			this->buttonTriangle->Location = System::Drawing::Point(191, 3);
			this->buttonTriangle->Name = L"buttonTriangle";
			this->buttonTriangle->Size = System::Drawing::Size(54, 54);
			this->buttonTriangle->TabIndex = 2;
			this->buttonTriangle->UseVisualStyleBackColor = true;
			this->buttonTriangle->Click += gcnew System::EventHandler(this, &VE_Form::buttonFigure_Click);
			// 
			// buttonCircle
			// 
			this->buttonCircle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCircle.Image")));
			this->buttonCircle->Location = System::Drawing::Point(71, 3);
			this->buttonCircle->Name = L"buttonCircle";
			this->buttonCircle->Size = System::Drawing::Size(54, 54);
			this->buttonCircle->TabIndex = 0;
			this->buttonCircle->UseVisualStyleBackColor = true;
			this->buttonCircle->Click += gcnew System::EventHandler(this, &VE_Form::buttonFigure_Click);
			// 
			// buttonSquare
			// 
			this->buttonSquare->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSquare.Image")));
			this->buttonSquare->Location = System::Drawing::Point(131, 3);
			this->buttonSquare->Name = L"buttonSquare";
			this->buttonSquare->Size = System::Drawing::Size(54, 54);
			this->buttonSquare->TabIndex = 1;
			this->buttonSquare->UseVisualStyleBackColor = true;
			this->buttonSquare->Click += gcnew System::EventHandler(this, &VE_Form::buttonFigure_Click);
			// 
			// VE_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1033, 633);
			this->Controls->Add(this->panelFigure);
			this->Controls->Add(this->checkBoxIntersaction);
			this->Controls->Add(this->checkBoxCtrl);
			this->Controls->Add(this->paintBox);
			this->KeyPreview = true;
			this->Name = L"VE_Form";
			this->Text = L"Visual editor";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &VE_Form::VE_Form_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &VE_Form::VE_Form_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintBox))->EndInit();
			this->panelFigure->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFigure))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		List<CFigure^>^ figures = gcnew List<CFigure^>;
		bool ctrlPressed = false;
		String^ figureShape = "CCircle";

	private: System::Void paintBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Bitmap^ b = gcnew Bitmap(paintBox->Width, paintBox->Height);
		Graphics^ g = Graphics::FromImage(b);
		for each (CFigure ^ figure in figures) {
			figure->draw(g);
			paintBox->Image = b;
		}
		if (figures->Count == 0 && paintBox->Image != nullptr) paintBox->Image = b;
		one_selected();
	}
	private: System::Void paintBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int countList = figures->Count;
		bool check_act = false;
		CFigure^ object;
		for each (CFigure ^ figure in figures) {
			if (figure->check_entry(e->X, e->Y)) {
				check_act = true;
				object = figure;
			}
		}
		if (check_act) {
			figures->Remove(object);
			figures->Add(object);
			object->clicked();
			for each (CFigure ^ figure in figures) {
				if (!ctrlPressed && figure->check_selected()) figure->clicked();
				if (figure->check_entry(e->X, e->Y)) {
					if (checkBoxIntersaction->Checked) {
						if (!figure->check_selected() && object != figure) {
							figure->clicked();
							if (!object->check_selected()) object->clicked();
						}
						if (!ctrlPressed) object->clicked();
					}
				}
			}
		}
		else {
			for each (CFigure ^ figure in figures) {
				if (figure->check_selected()) figure->clicked();
			}
			if (figureShape == "CCircle") figures->Add(gcnew CCircle(e->X, e->Y));
			else if (figureShape == "CSquare") figures->Add(gcnew CSquare(e->X, e->Y));
			else if (figureShape == "CTriangle") figures->Add(gcnew CTriangle(e->X, e->Y));
			paintBox->Invalidate();
		}
	}
	private: System::Void VE_Form_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Delete) {
			List<CFigure^>^ selectedFigures = gcnew List<CFigure^>;
			for each (CFigure ^ figure in figures) {
				if (figure->check_selected()) selectedFigures->Add(figure);
			}
			for each (CFigure ^ figure in selectedFigures) {
				figures->Remove(figure);
			}
		}
		if (checkBoxCtrl->Checked) {
			if (e->KeyCode == Keys::ControlKey) ctrlPressed = true;
		}
	}
	private: System::Void VE_Form_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (ctrlPressed && e->KeyCode == Keys::ControlKey) ctrlPressed = false;
	}
	private: void one_selected() {
		CFigure^ object;
		int countOfSelected = 0;
		for each (CFigure ^ figure in figures) {
			if (!figure->check_selected()) object = figure;
			else countOfSelected++;
		}
		if (object != nullptr && countOfSelected == 0) object->clicked();
	}
	private: System::Void buttonFigure_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sender == buttonCircle) {
			pictureBoxFigure->Image = Image::FromFile("Circle.png");
			figureShape = "CCircle";
		}
		else if (sender == buttonSquare) {
			pictureBoxFigure->Image = Image::FromFile("Square.png");
			figureShape = "CSquare";
		}
		else if (sender == buttonTriangle) {
			pictureBoxFigure->Image = Image::FromFile("Triangle.png");
			figureShape = "CTriangle";
		}
	}
	};
}
