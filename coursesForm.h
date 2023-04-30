#pragma once
#include "wordForm.h"
#include "excelForm.h"
namespace cloud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para coursesForm
	/// </summary>
	public ref class coursesForm : public System::Windows::Forms::Form
	{
		Form^ activeForm = nullptr;
	public:
		coursesForm(void)
		{
			InitializeComponent();
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~coursesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ wordbtn;
	private: System::Windows::Forms::Button^ excelbtn;
	private: System::Windows::Forms::Button^ powerpointbtn;
	private: System::Windows::Forms::Button^ outlookbtn;
	private: System::Windows::Forms::Button^ photoshopbtn;
	private: System::Windows::Forms::Button^ illustrator;
	private: System::Windows::Forms::Button^ aftereffectsbtn;
	private: System::Windows::Forms::Button^ indesignbtn;
	private: System::Windows::Forms::Panel^ panelcourses;
	private: System::Windows::Forms::Panel^ panelshowcourses;


	protected:








	protected:







	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(coursesForm::typeid));
			this->wordbtn = (gcnew System::Windows::Forms::Button());
			this->excelbtn = (gcnew System::Windows::Forms::Button());
			this->powerpointbtn = (gcnew System::Windows::Forms::Button());
			this->outlookbtn = (gcnew System::Windows::Forms::Button());
			this->photoshopbtn = (gcnew System::Windows::Forms::Button());
			this->illustrator = (gcnew System::Windows::Forms::Button());
			this->aftereffectsbtn = (gcnew System::Windows::Forms::Button());
			this->indesignbtn = (gcnew System::Windows::Forms::Button());
			this->panelcourses = (gcnew System::Windows::Forms::Panel());
			this->panelshowcourses = (gcnew System::Windows::Forms::Panel());
			this->panelcourses->SuspendLayout();
			this->SuspendLayout();
			// 
			// wordbtn
			// 
			this->wordbtn->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->wordbtn->AllowDrop = true;
			this->wordbtn->BackColor = System::Drawing::Color::GhostWhite;
			this->wordbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wordbtn->FlatAppearance->BorderSize = 0;
			this->wordbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wordbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wordbtn->ForeColor = System::Drawing::Color::Black;
			this->wordbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wordbtn.Image")));
			this->wordbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->wordbtn->Location = System::Drawing::Point(0, 0);
			this->wordbtn->Name = L"wordbtn";
			this->wordbtn->Size = System::Drawing::Size(200, 64);
			this->wordbtn->TabIndex = 1;
			this->wordbtn->Text = L"WORD";
			this->wordbtn->UseVisualStyleBackColor = false;
			this->wordbtn->Click += gcnew System::EventHandler(this, &coursesForm::wordbtn_Click);
			// 
			// excelbtn
			// 
			this->excelbtn->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->excelbtn->AllowDrop = true;
			this->excelbtn->BackColor = System::Drawing::Color::GhostWhite;
			this->excelbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->excelbtn->FlatAppearance->BorderSize = 0;
			this->excelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->excelbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->excelbtn->ForeColor = System::Drawing::Color::Black;
			this->excelbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"excelbtn.Image")));
			this->excelbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->excelbtn->Location = System::Drawing::Point(0, 70);
			this->excelbtn->Name = L"excelbtn";
			this->excelbtn->Size = System::Drawing::Size(200, 64);
			this->excelbtn->TabIndex = 2;
			this->excelbtn->Text = L"EXCEL";
			this->excelbtn->UseVisualStyleBackColor = false;
			this->excelbtn->Click += gcnew System::EventHandler(this, &coursesForm::excelbtn_Click);
			// 
			// powerpointbtn
			// 
			this->powerpointbtn->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->powerpointbtn->AllowDrop = true;
			this->powerpointbtn->BackColor = System::Drawing::Color::GhostWhite;
			this->powerpointbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->powerpointbtn->FlatAppearance->BorderSize = 0;
			this->powerpointbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->powerpointbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->powerpointbtn->ForeColor = System::Drawing::Color::Black;
			this->powerpointbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"powerpointbtn.Image")));
			this->powerpointbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->powerpointbtn->Location = System::Drawing::Point(0, 140);
			this->powerpointbtn->Name = L"powerpointbtn";
			this->powerpointbtn->Size = System::Drawing::Size(200, 64);
			this->powerpointbtn->TabIndex = 3;
			this->powerpointbtn->Text = L"                   POWER POINT";
			this->powerpointbtn->UseVisualStyleBackColor = false;
			this->powerpointbtn->Click += gcnew System::EventHandler(this, &coursesForm::powerpointbtn_Click);
			// 
			// outlookbtn
			// 
			this->outlookbtn->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->outlookbtn->AllowDrop = true;
			this->outlookbtn->BackColor = System::Drawing::Color::GhostWhite;
			this->outlookbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->outlookbtn->FlatAppearance->BorderSize = 0;
			this->outlookbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->outlookbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outlookbtn->ForeColor = System::Drawing::Color::Black;
			this->outlookbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"outlookbtn.Image")));
			this->outlookbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->outlookbtn->Location = System::Drawing::Point(0, 210);
			this->outlookbtn->Name = L"outlookbtn";
			this->outlookbtn->Size = System::Drawing::Size(200, 64);
			this->outlookbtn->TabIndex = 4;
			this->outlookbtn->Text = L"        OUTLOOK\r\n";
			this->outlookbtn->UseVisualStyleBackColor = false;
			this->outlookbtn->Click += gcnew System::EventHandler(this, &coursesForm::outlookbtn_Click);
			// 
			// photoshopbtn
			// 
			this->photoshopbtn->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->photoshopbtn->AllowDrop = true;
			this->photoshopbtn->BackColor = System::Drawing::Color::GhostWhite;
			this->photoshopbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->photoshopbtn->FlatAppearance->BorderSize = 0;
			this->photoshopbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->photoshopbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->photoshopbtn->ForeColor = System::Drawing::Color::Black;
			this->photoshopbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"photoshopbtn.Image")));
			this->photoshopbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->photoshopbtn->Location = System::Drawing::Point(0, 280);
			this->photoshopbtn->Name = L"photoshopbtn";
			this->photoshopbtn->Size = System::Drawing::Size(200, 64);
			this->photoshopbtn->TabIndex = 7;
			this->photoshopbtn->Text = L"               PHOTOSHOP";
			this->photoshopbtn->UseVisualStyleBackColor = false;
			this->photoshopbtn->Click += gcnew System::EventHandler(this, &coursesForm::photoshopbtn_Click);
			// 
			// illustrator
			// 
			this->illustrator->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->illustrator->AllowDrop = true;
			this->illustrator->BackColor = System::Drawing::Color::GhostWhite;
			this->illustrator->Cursor = System::Windows::Forms::Cursors::Hand;
			this->illustrator->FlatAppearance->BorderSize = 0;
			this->illustrator->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->illustrator->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->illustrator->ForeColor = System::Drawing::Color::Black;
			this->illustrator->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"illustrator.Image")));
			this->illustrator->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->illustrator->Location = System::Drawing::Point(0, 350);
			this->illustrator->Name = L"illustrator";
			this->illustrator->Size = System::Drawing::Size(200, 64);
			this->illustrator->TabIndex = 8;
			this->illustrator->Text = L"                ILLUSTRATOR";
			this->illustrator->UseVisualStyleBackColor = false;
			this->illustrator->Click += gcnew System::EventHandler(this, &coursesForm::illustrator_Click);
			// 
			// aftereffectsbtn
			// 
			this->aftereffectsbtn->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->aftereffectsbtn->AllowDrop = true;
			this->aftereffectsbtn->BackColor = System::Drawing::Color::GhostWhite;
			this->aftereffectsbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->aftereffectsbtn->FlatAppearance->BorderSize = 0;
			this->aftereffectsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->aftereffectsbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aftereffectsbtn->ForeColor = System::Drawing::Color::Black;
			this->aftereffectsbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aftereffectsbtn.Image")));
			this->aftereffectsbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->aftereffectsbtn->Location = System::Drawing::Point(0, 420);
			this->aftereffectsbtn->Name = L"aftereffectsbtn";
			this->aftereffectsbtn->Size = System::Drawing::Size(200, 64);
			this->aftereffectsbtn->TabIndex = 9;
			this->aftereffectsbtn->Text = L"                     AFTER EFFECTS";
			this->aftereffectsbtn->UseVisualStyleBackColor = false;
			this->aftereffectsbtn->Click += gcnew System::EventHandler(this, &coursesForm::aftereffectsbtn_Click);
			// 
			// indesignbtn
			// 
			this->indesignbtn->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->indesignbtn->AllowDrop = true;
			this->indesignbtn->BackColor = System::Drawing::Color::GhostWhite;
			this->indesignbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->indesignbtn->FlatAppearance->BorderSize = 0;
			this->indesignbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->indesignbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->indesignbtn->ForeColor = System::Drawing::Color::Black;
			this->indesignbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"indesignbtn.Image")));
			this->indesignbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->indesignbtn->Location = System::Drawing::Point(0, 490);
			this->indesignbtn->Name = L"indesignbtn";
			this->indesignbtn->Size = System::Drawing::Size(200, 64);
			this->indesignbtn->TabIndex = 11;
			this->indesignbtn->Text = L"        INDESIGN";
			this->indesignbtn->UseVisualStyleBackColor = false;
			this->indesignbtn->Click += gcnew System::EventHandler(this, &coursesForm::indesignbtn_Click);
			// 
			// panelcourses
			// 
			this->panelcourses->Controls->Add(this->wordbtn);
			this->panelcourses->Controls->Add(this->indesignbtn);
			this->panelcourses->Controls->Add(this->excelbtn);
			this->panelcourses->Controls->Add(this->aftereffectsbtn);
			this->panelcourses->Controls->Add(this->powerpointbtn);
			this->panelcourses->Controls->Add(this->illustrator);
			this->panelcourses->Controls->Add(this->outlookbtn);
			this->panelcourses->Controls->Add(this->photoshopbtn);
			this->panelcourses->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelcourses->Location = System::Drawing::Point(0, 0);
			this->panelcourses->Name = L"panelcourses";
			this->panelcourses->Size = System::Drawing::Size(200, 615);
			this->panelcourses->TabIndex = 12;
			this->panelcourses->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &coursesForm::panel1_Paint);
			// 
			// panelshowcourses
			// 
			this->panelshowcourses->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelshowcourses->Location = System::Drawing::Point(200, 0);
			this->panelshowcourses->Name = L"panelshowcourses";
			this->panelshowcourses->Size = System::Drawing::Size(908, 615);
			this->panelshowcourses->TabIndex = 13;
			this->panelshowcourses->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &coursesForm::panelshowcourses_Paint);
			// 
			// coursesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1108, 615);
			this->Controls->Add(this->panelshowcourses);
			this->Controls->Add(this->panelcourses);
			this->Name = L"coursesForm";
			this->Text = L"coursesForm";
			this->Load += gcnew System::EventHandler(this, &coursesForm::coursesForm_Load);
			this->panelcourses->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void coursesForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
		   private:
			   void OpenChildForm(Form^ childForm, Object^ btnSender)
			   {
				   if (activeForm != nullptr)
				   {
					   activeForm->Close();
				   }

				   activeForm = childForm;
				   activeForm->TopLevel = false;
				   activeForm->Dock = DockStyle::Fill;
				   panelshowcourses->Controls->Add(activeForm);
				   panelshowcourses->Tag = activeForm;
				   activeForm->BringToFront();
				   activeForm->Show();
				   childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   }
private: System::Void wordbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenChildForm(gcnew wordForm(), sender);

}
private: System::Void excelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenChildForm(gcnew excelForm(), sender);

}
private: System::Void powerpointbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void outlookbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void photoshopbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void illustrator_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void aftereffectsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void indesignbtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelcourses_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panelshowcourses_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
