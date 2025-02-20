#pragma once
#include "Container.h"
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



	private: System::Windows::Forms::Panel^ panelColor;
	private: System::Windows::Forms::PictureBox^ pictureBoxGray;
	private: System::Windows::Forms::PictureBox^ pictureBoxRed;


	private: System::Windows::Forms::PictureBox^ pictureBoxBlack;
	private: System::Windows::Forms::PictureBox^ pictureBoxBrown;



	private: System::Windows::Forms::PictureBox^ pictureBoxPurple;

	private: System::Windows::Forms::PictureBox^ pictureBoxBlue;

	private: System::Windows::Forms::PictureBox^ pictureBoxGreen;
	private: System::Windows::Forms::PictureBox^ pictureBoxPink;



	private: System::Windows::Forms::PictureBox^ pictureBoxFuchsia;

	private: System::Windows::Forms::PictureBox^ pictureBoxCyan;

	private: System::Windows::Forms::PictureBox^ pictureBoxYellow;

	private: System::Windows::Forms::PictureBox^ pictureBoxOrange;
	private: System::Windows::Forms::PictureBox^ pictureBoxMainColor;
	private: System::Windows::Forms::Button^ buttonFill;











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
			this->panelColor = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxPink = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFuchsia = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCyan = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxYellow = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxOrange = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBrown = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPurple = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBlue = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxGreen = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRed = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBlack = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxGray = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxMainColor = (gcnew System::Windows::Forms::PictureBox());
			this->buttonFill = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintBox))->BeginInit();
			this->panelFigure->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFigure))->BeginInit();
			this->panelColor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPink))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFuchsia))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCyan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxYellow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOrange))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBrown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPurple))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBlack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGray))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMainColor))->BeginInit();
			this->SuspendLayout();
			// 
			// paintBox
			// 
			this->paintBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->paintBox->BackColor = System::Drawing::Color::White;
			this->paintBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->paintBox->Location = System::Drawing::Point(12, 82);
			this->paintBox->Name = L"paintBox";
			this->paintBox->Size = System::Drawing::Size(960, 617);
			this->paintBox->TabIndex = 0;
			this->paintBox->TabStop = false;
			this->paintBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &VE_Form::paintBox_Paint);
			this->paintBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &VE_Form::paintBox_MouseClick);
			this->paintBox->Resize += gcnew System::EventHandler(this, &VE_Form::paintBox_Resize);
			// 
			// checkBoxCtrl
			// 
			this->checkBoxCtrl->AutoSize = true;
			this->checkBoxCtrl->Location = System::Drawing::Point(12, 17);
			this->checkBoxCtrl->Name = L"checkBoxCtrl";
			this->checkBoxCtrl->Size = System::Drawing::Size(78, 17);
			this->checkBoxCtrl->TabIndex = 1;
			this->checkBoxCtrl->Text = L"Unlock Ctrl";
			this->checkBoxCtrl->UseVisualStyleBackColor = true;
			// 
			// checkBoxIntersaction
			// 
			this->checkBoxIntersaction->AutoSize = true;
			this->checkBoxIntersaction->Location = System::Drawing::Point(12, 40);
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
			this->panelFigure->Location = System::Drawing::Point(159, 12);
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
			// panelColor
			// 
			this->panelColor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panelColor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelColor->Controls->Add(this->pictureBoxPink);
			this->panelColor->Controls->Add(this->pictureBoxFuchsia);
			this->panelColor->Controls->Add(this->pictureBoxCyan);
			this->panelColor->Controls->Add(this->pictureBoxYellow);
			this->panelColor->Controls->Add(this->pictureBoxOrange);
			this->panelColor->Controls->Add(this->pictureBoxBrown);
			this->panelColor->Controls->Add(this->pictureBoxPurple);
			this->panelColor->Controls->Add(this->pictureBoxBlue);
			this->panelColor->Controls->Add(this->pictureBoxGreen);
			this->panelColor->Controls->Add(this->pictureBoxRed);
			this->panelColor->Controls->Add(this->pictureBoxBlack);
			this->panelColor->Controls->Add(this->pictureBoxGray);
			this->panelColor->Location = System::Drawing::Point(774, 12);
			this->panelColor->Name = L"panelColor";
			this->panelColor->Size = System::Drawing::Size(198, 64);
			this->panelColor->TabIndex = 4;
			// 
			// pictureBoxPink
			// 
			this->pictureBoxPink->BackColor = System::Drawing::Color::Pink;
			this->pictureBoxPink->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxPink->Location = System::Drawing::Point(166, 34);
			this->pictureBoxPink->Name = L"pictureBoxPink";
			this->pictureBoxPink->Size = System::Drawing::Size(20, 20);
			this->pictureBoxPink->TabIndex = 12;
			this->pictureBoxPink->TabStop = false;
			this->pictureBoxPink->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxFuchsia
			// 
			this->pictureBoxFuchsia->BackColor = System::Drawing::Color::Fuchsia;
			this->pictureBoxFuchsia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxFuchsia->Location = System::Drawing::Point(134, 34);
			this->pictureBoxFuchsia->Name = L"pictureBoxFuchsia";
			this->pictureBoxFuchsia->Size = System::Drawing::Size(20, 20);
			this->pictureBoxFuchsia->TabIndex = 11;
			this->pictureBoxFuchsia->TabStop = false;
			this->pictureBoxFuchsia->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxCyan
			// 
			this->pictureBoxCyan->BackColor = System::Drawing::Color::Cyan;
			this->pictureBoxCyan->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxCyan->Location = System::Drawing::Point(102, 34);
			this->pictureBoxCyan->Name = L"pictureBoxCyan";
			this->pictureBoxCyan->Size = System::Drawing::Size(20, 20);
			this->pictureBoxCyan->TabIndex = 10;
			this->pictureBoxCyan->TabStop = false;
			this->pictureBoxCyan->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxYellow
			// 
			this->pictureBoxYellow->BackColor = System::Drawing::Color::Yellow;
			this->pictureBoxYellow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxYellow->Location = System::Drawing::Point(70, 34);
			this->pictureBoxYellow->Name = L"pictureBoxYellow";
			this->pictureBoxYellow->Size = System::Drawing::Size(20, 20);
			this->pictureBoxYellow->TabIndex = 9;
			this->pictureBoxYellow->TabStop = false;
			this->pictureBoxYellow->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxOrange
			// 
			this->pictureBoxOrange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBoxOrange->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxOrange->Location = System::Drawing::Point(38, 34);
			this->pictureBoxOrange->Name = L"pictureBoxOrange";
			this->pictureBoxOrange->Size = System::Drawing::Size(20, 20);
			this->pictureBoxOrange->TabIndex = 8;
			this->pictureBoxOrange->TabStop = false;
			this->pictureBoxOrange->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxBrown
			// 
			this->pictureBoxBrown->BackColor = System::Drawing::Color::Brown;
			this->pictureBoxBrown->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxBrown->Location = System::Drawing::Point(166, 6);
			this->pictureBoxBrown->Name = L"pictureBoxBrown";
			this->pictureBoxBrown->Size = System::Drawing::Size(20, 20);
			this->pictureBoxBrown->TabIndex = 6;
			this->pictureBoxBrown->TabStop = false;
			this->pictureBoxBrown->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxPurple
			// 
			this->pictureBoxPurple->BackColor = System::Drawing::Color::Purple;
			this->pictureBoxPurple->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxPurple->Location = System::Drawing::Point(134, 6);
			this->pictureBoxPurple->Name = L"pictureBoxPurple";
			this->pictureBoxPurple->Size = System::Drawing::Size(20, 20);
			this->pictureBoxPurple->TabIndex = 5;
			this->pictureBoxPurple->TabStop = false;
			this->pictureBoxPurple->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxBlue
			// 
			this->pictureBoxBlue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBoxBlue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxBlue->Location = System::Drawing::Point(102, 6);
			this->pictureBoxBlue->Name = L"pictureBoxBlue";
			this->pictureBoxBlue->Size = System::Drawing::Size(20, 20);
			this->pictureBoxBlue->TabIndex = 4;
			this->pictureBoxBlue->TabStop = false;
			this->pictureBoxBlue->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxGreen
			// 
			this->pictureBoxGreen->BackColor = System::Drawing::Color::Lime;
			this->pictureBoxGreen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxGreen->Location = System::Drawing::Point(70, 6);
			this->pictureBoxGreen->Name = L"pictureBoxGreen";
			this->pictureBoxGreen->Size = System::Drawing::Size(20, 20);
			this->pictureBoxGreen->TabIndex = 3;
			this->pictureBoxGreen->TabStop = false;
			this->pictureBoxGreen->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxRed
			// 
			this->pictureBoxRed->BackColor = System::Drawing::Color::Red;
			this->pictureBoxRed->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxRed->Location = System::Drawing::Point(38, 6);
			this->pictureBoxRed->Name = L"pictureBoxRed";
			this->pictureBoxRed->Size = System::Drawing::Size(20, 20);
			this->pictureBoxRed->TabIndex = 2;
			this->pictureBoxRed->TabStop = false;
			this->pictureBoxRed->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxBlack
			// 
			this->pictureBoxBlack->BackColor = System::Drawing::Color::Black;
			this->pictureBoxBlack->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxBlack->Location = System::Drawing::Point(6, 34);
			this->pictureBoxBlack->Name = L"pictureBoxBlack";
			this->pictureBoxBlack->Size = System::Drawing::Size(20, 20);
			this->pictureBoxBlack->TabIndex = 1;
			this->pictureBoxBlack->TabStop = false;
			this->pictureBoxBlack->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxGray
			// 
			this->pictureBoxGray->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pictureBoxGray->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxGray->Location = System::Drawing::Point(6, 6);
			this->pictureBoxGray->Name = L"pictureBoxGray";
			this->pictureBoxGray->Size = System::Drawing::Size(20, 20);
			this->pictureBoxGray->TabIndex = 0;
			this->pictureBoxGray->TabStop = false;
			this->pictureBoxGray->Click += gcnew System::EventHandler(this, &VE_Form::pictureBoxColor_Click);
			// 
			// pictureBoxMainColor
			// 
			this->pictureBoxMainColor->BackColor = System::Drawing::Color::Black;
			this->pictureBoxMainColor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxMainColor->Location = System::Drawing::Point(516, 24);
			this->pictureBoxMainColor->Name = L"pictureBoxMainColor";
			this->pictureBoxMainColor->Size = System::Drawing::Size(40, 40);
			this->pictureBoxMainColor->TabIndex = 5;
			this->pictureBoxMainColor->TabStop = false;
			// 
			// buttonFill
			// 
			this->buttonFill->BackColor = System::Drawing::Color::PapayaWhip;
			this->buttonFill->Location = System::Drawing::Point(580, 33);
			this->buttonFill->Name = L"buttonFill";
			this->buttonFill->Size = System::Drawing::Size(67, 23);
			this->buttonFill->TabIndex = 6;
			this->buttonFill->Text = L"Fill";
			this->buttonFill->UseVisualStyleBackColor = false;
			this->buttonFill->Click += gcnew System::EventHandler(this, &VE_Form::buttonFill_Click);
			// 
			// VE_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(984, 711);
			this->Controls->Add(this->panelColor);
			this->Controls->Add(this->panelFigure);
			this->Controls->Add(this->checkBoxIntersaction);
			this->Controls->Add(this->checkBoxCtrl);
			this->Controls->Add(this->paintBox);
			this->Controls->Add(this->buttonFill);
			this->Controls->Add(this->pictureBoxMainColor);
			this->KeyPreview = true;
			this->MinimumSize = System::Drawing::Size(450, 120);
			this->Name = L"VE_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Visual editor";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &VE_Form::VE_Form_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &VE_Form::VE_Form_KeyUp);
			this->Resize += gcnew System::EventHandler(this, &VE_Form::VE_Form_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paintBox))->EndInit();
			this->panelFigure->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFigure))->EndInit();
			this->panelColor->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPink))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFuchsia))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCyan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxYellow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOrange))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBrown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPurple))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBlack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGray))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMainColor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		CContainer<CFigure^>^ figures = gcnew CContainer<CFigure^>;
		bool ctrlPressed = false;
		String^ figureShape = "CCircle";
		Color mainColor = Color::Black;

	private: System::Void paintBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Bitmap^ b = gcnew Bitmap(paintBox->Width, paintBox->Height);
		Graphics^ g = Graphics::FromImage(b);
		for (int i = 0; i < figures->get_size(); i++) {
			figures->get_object(i)->draw(g);
			paintBox->Image = b;
		}
		if (figures->get_size() == 0 && paintBox->Image != nullptr) paintBox->Image = b;
		one_selected();
	}
	private: System::Void paintBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		bool check_act = false;
		CFigure^ object;
		for (int i = 0; i < figures->get_size(); i++) {
			CFigure^ figure = figures->get_object(i);
			if (figure->check_entry(e->X, e->Y)) {
				check_act = true;
				object = figure;
			}
		}
		if (check_act) {
			figures->remove(object);
			figures->push_back(object);
			object->clicked();
			for (int i = 0; i < figures->get_size(); i++) {
				CFigure^ figure = figures->get_object(i);
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
			for (int i = 0; i < figures->get_size(); i++) {
				CFigure^ figure = figures->get_object(i);
				if (figure->check_selected()) figure->clicked();
			}
			CFigure^ figure;
			if (figureShape == "CCircle") figure = gcnew CCircle(e->X, e->Y, mainColor);
			else if (figureShape == "CSquare") figure = gcnew CSquare(e->X, e->Y, mainColor);
			else if (figureShape == "CTriangle") figure = gcnew CTriangle(e->X, e->Y, mainColor);
			if (figure->checkBorder(0, 0, paintBox->Width, paintBox->Height)) figures->push_back(figure);
			paintBox->Invalidate();
		}
	}
	private: System::Void VE_Form_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (checkBoxCtrl->Checked) {
			if (e->KeyCode == Keys::ControlKey) ctrlPressed = true;
		}
		CContainer<CFigure^>^ selectedFigures = gcnew CContainer<CFigure^>;
		for (int i = 0; i < figures->get_size(); i++) {
			CFigure^ figure = figures->get_object(i);
			if (figure->check_selected()) selectedFigures->push_back(figure);
		}
		if (e->KeyCode == Keys::Delete) {
			for (int i = 0; i < selectedFigures->get_size(); i++) {
				figures->remove(selectedFigures->get_object(i));
			}
		}
		if (e->KeyCode == Keys::A) {
			for (int i = 0; i < selectedFigures->get_size(); i++) {
				CFigure^ figure = selectedFigures->get_object(i);
				if (figure->checkBorder(-5, 0, paintBox->Width, paintBox->Height)) figure->move(-5, 0);
			}
		}
		if (e->KeyCode == Keys::D) {
			for (int i = 0; i < selectedFigures->get_size(); i++) {
				CFigure^ figure = selectedFigures->get_object(i);
				if (figure->checkBorder(5, 0, paintBox->Width, paintBox->Height)) figure->move(5, 0);
			}
		}
		if (e->KeyCode == Keys::W) {
			for (int i = 0; i < selectedFigures->get_size(); i++) {
				CFigure^ figure = selectedFigures->get_object(i);
				if (figure->checkBorder(0, -5, paintBox->Width, paintBox->Height)) figure->move(0, -5);
			}
		}
		if (e->KeyCode == Keys::S) {
			for (int i = 0; i < selectedFigures->get_size(); i++) {
				CFigure^ figure = selectedFigures->get_object(i);
				if (figure->checkBorder(0, 5, paintBox->Width, paintBox->Height)) figure->move(0, 5);
			}
		}
		if (e->KeyCode == Keys::Oemplus) {
			for (int i = 0; i < selectedFigures->get_size(); i++) {
				CFigure^ figure = selectedFigures->get_object(i);
				if (figure->checkBorder(2, 2, paintBox->Width, paintBox->Height) &&
					figure->checkBorder(-2, -2, paintBox->Width, paintBox->Height)) figure->changeSize(2);
			}
		}
		if (e->KeyCode == Keys::OemMinus) {
			for (int i = 0; i < selectedFigures->get_size(); i++) {
				selectedFigures->get_object(i)->changeSize(-2);
			}
		}
	}
	private: System::Void VE_Form_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (ctrlPressed && e->KeyCode == Keys::ControlKey) ctrlPressed = false;
	}
	private: void one_selected() {
		CFigure^ object;
		int countOfSelected = 0;
		for (int i = 0; i < figures->get_size(); i++) {
			CFigure^ figure = figures->get_object(i);
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
	private: System::Void pictureBoxColor_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ p = dynamic_cast<PictureBox^>(sender);
		if (p) {
			mainColor = p->BackColor;
			pictureBoxMainColor->BackColor = mainColor;
			pictureBoxMainColor->Update();
		}
	}
	private: System::Void VE_Form_Resize(System::Object^ sender, System::EventArgs^ e) {
		int parametr = Width - panelColor->Location.X;
		if (Width < buttonFill->Location.X + buttonFill->Width + parametr) buttonFill->Visible = false;
		else buttonFill->Visible = true;

		if (Width < pictureBoxMainColor->Location.X + pictureBoxMainColor->Width + parametr) pictureBoxMainColor->Visible = false;
		else pictureBoxMainColor->Visible = true;
	}
	private: System::Void buttonFill_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < figures->get_size(); i++) {
			CFigure^ figure = figures->get_object(i);
			if (figure->check_selected()) figure->changeColor(mainColor);
		}
	}
	private: System::Void paintBox_Resize(System::Object^ sender, System::EventArgs^ e) {
		CContainer<CFigure^>^ removeList = gcnew CContainer<CFigure^>;
		for (int i = 0; i < figures->get_size(); i++) {
			CFigure^ figure = figures->get_object(i);
			if (!figure->checkBorder(0, 0, paintBox->Width, paintBox->Height)) removeList->push_back(figure);
		}
		for (int i = 0; i < removeList->get_size(); i++) {
			figures->remove(removeList->get_object(i));
		}
	}
};
}
