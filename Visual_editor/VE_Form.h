#pragma once
//#include "Container.h"
//#include "CFigure.h"
#include "CCircle.h"
//#include "CTriangle.h"
//#include "CSquare.h"

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
			this->paintBox = (gcnew System::Windows::Forms::PictureBox());
			this->checkBoxCtrl = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxIntersaction = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintBox))->BeginInit();
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
			// VE_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1033, 633);
			this->Controls->Add(this->checkBoxIntersaction);
			this->Controls->Add(this->checkBoxCtrl);
			this->Controls->Add(this->paintBox);
			this->KeyPreview = true;
			this->Name = L"VE_Form";
			this->Text = L"Visual editor";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &VE_Form::VE_Form_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &VE_Form::VE_Form_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		List<CCircle^>^ circles = gcnew List<CCircle^>;
		bool ctrlPressed = false;

	private: System::Void paintBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Bitmap^ b = gcnew Bitmap(paintBox->Width, paintBox->Height);
		Graphics^ g = Graphics::FromImage(b);
		for each (CCircle ^ circle in circles) {
			circle->draw(g);
			paintBox->Image = b;
		}
		if (circles->Count == 0 && paintBox->Image != nullptr) paintBox->Image = b;
		one_selected();
	}
	private: System::Void paintBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int countList = circles->Count;
		bool check_act = false;
		CCircle^ object;
		for each (CCircle ^ circle in circles) {
			if (circle->check_entry(e->X, e->Y)) {
				check_act = true;
				object = circle;
			}
		}
		if (check_act) {
			circles->Remove(object);
			circles->Add(object);
			object->clicked();
			for each (CCircle ^ circle in circles) {
				if (!ctrlPressed && circle->check_selected()) circle->clicked();
				if (circle->check_entry(e->X, e->Y)) {
					if (checkBoxIntersaction->Checked) {
						if (!circle->check_selected() && object != circle) {
							circle->clicked();
							if (!object->check_selected()) object->clicked();
						}
						if (!ctrlPressed) object->clicked();
					}
				}
			}
		}
		else {
			for each (CCircle ^ circle in circles) {
				if (circle->check_selected()) circle->clicked();
			}
			circles->Add(gcnew CCircle(e->X, e->Y));
			paintBox->Invalidate();
		}
	}
	private: System::Void VE_Form_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Delete) {
			List<CCircle^>^ selectedCircles = gcnew List<CCircle^>;
			for each (CCircle ^ circle in circles) {
				if (circle->check_selected()) selectedCircles->Add(circle);
			}
			for each (CCircle ^ circle in selectedCircles) {
				circles->Remove(circle);
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
		CCircle^ object;
		int countOfSelected = 0;
		for each (CCircle ^ circle in circles) {
			if (!circle->check_selected()) object = circle;
			else countOfSelected++;
		}
		if (object != nullptr && countOfSelected == 0) object->clicked();
	}
};
}
