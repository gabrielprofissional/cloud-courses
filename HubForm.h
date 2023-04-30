#pragma once
#include "coursesForm.h"




namespace cloud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Windows;


	/// <summary>
	/// Sumário para HubForm
	/// </summary>
	public ref class HubForm : public System::Windows::Forms::Form
	{
		Form^ activeForm = nullptr;
		private: System::Windows::Forms::Panel^ paneldesk;
		private: System::Windows::Forms::Panel^ panelname;
	private: System::Windows::Forms::Button^ btnVerificar;
		   Panel^ panelDesktop = gcnew Panel();
	public:
		HubForm(void)
		{
			InitializeComponent();
			//this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~HubForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Button^ closebtn;
	private: System::Windows::Forms::Button^ registerbtn;
	private: System::Windows::Forms::Button^ forgotbtn;
	private: System::Windows::Forms::Button^ notificationsbtn;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ coursesbtn;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HubForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->closebtn = (gcnew System::Windows::Forms::Button());
			this->registerbtn = (gcnew System::Windows::Forms::Button());
			this->forgotbtn = (gcnew System::Windows::Forms::Button());
			this->notificationsbtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->coursesbtn = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->paneldesk = (gcnew System::Windows::Forms::Panel());
			this->panelname = (gcnew System::Windows::Forms::Panel());
			this->btnVerificar = (gcnew System::Windows::Forms::Button());
			this->panelMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->panelMenu->Controls->Add(this->btnVerificar);
			this->panelMenu->Controls->Add(this->flowLayoutPanel1);
			this->panelMenu->Controls->Add(this->closebtn);
			this->panelMenu->Controls->Add(this->registerbtn);
			this->panelMenu->Controls->Add(this->forgotbtn);
			this->panelMenu->Controls->Add(this->notificationsbtn);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->coursesbtn);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 729);
			this->panelMenu->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(226, 90);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(982, 465);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// closebtn
			// 
			this->closebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->closebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closebtn->FlatAppearance->BorderSize = 0;
			this->closebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closebtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closebtn->ForeColor = System::Drawing::Color::Gainsboro;
			this->closebtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closebtn.Image")));
			this->closebtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->closebtn->Location = System::Drawing::Point(0, 699);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->closebtn->Size = System::Drawing::Size(220, 30);
			this->closebtn->TabIndex = 5;
			this->closebtn->Text = L"CLOSE PROGRAM";
			this->closebtn->UseVisualStyleBackColor = true;
			this->closebtn->Click += gcnew System::EventHandler(this, &HubForm::closebtn_Click);
			// 
			// registerbtn
			// 
			this->registerbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerbtn->FlatAppearance->BorderSize = 0;
			this->registerbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerbtn->ForeColor = System::Drawing::Color::Gainsboro;
			this->registerbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registerbtn.Image")));
			this->registerbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->registerbtn->Location = System::Drawing::Point(0, 355);
			this->registerbtn->Name = L"registerbtn";
			this->registerbtn->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->registerbtn->Size = System::Drawing::Size(220, 64);
			this->registerbtn->TabIndex = 4;
			this->registerbtn->Text = L"REGISTER ";
			this->registerbtn->UseVisualStyleBackColor = true;
			this->registerbtn->Click += gcnew System::EventHandler(this, &HubForm::registerbtn_Click);
			// 
			// forgotbtn
			// 
			this->forgotbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forgotbtn->FlatAppearance->BorderSize = 0;
			this->forgotbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->forgotbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgotbtn->ForeColor = System::Drawing::Color::Gainsboro;
			this->forgotbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"forgotbtn.Image")));
			this->forgotbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->forgotbtn->Location = System::Drawing::Point(0, 285);
			this->forgotbtn->Name = L"forgotbtn";
			this->forgotbtn->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->forgotbtn->Size = System::Drawing::Size(220, 64);
			this->forgotbtn->TabIndex = 3;
			this->forgotbtn->Text = L"FORGOT PASSWORD";
			this->forgotbtn->UseVisualStyleBackColor = true;
			this->forgotbtn->Click += gcnew System::EventHandler(this, &HubForm::forgotbtn_Click);
			// 
			// notificationsbtn
			// 
			this->notificationsbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->notificationsbtn->FlatAppearance->BorderSize = 0;
			this->notificationsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->notificationsbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->notificationsbtn->ForeColor = System::Drawing::Color::Gainsboro;
			this->notificationsbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notificationsbtn.Image")));
			this->notificationsbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->notificationsbtn->Location = System::Drawing::Point(0, 215);
			this->notificationsbtn->Name = L"notificationsbtn";
			this->notificationsbtn->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->notificationsbtn->Size = System::Drawing::Size(220, 64);
			this->notificationsbtn->TabIndex = 2;
			this->notificationsbtn->Text = L"NOTIFICATIONS";
			this->notificationsbtn->UseVisualStyleBackColor = true;
			this->notificationsbtn->Click += gcnew System::EventHandler(this, &HubForm::notificationsbtn_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 145);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(220, 64);
			this->button2->TabIndex = 1;
			this->button2->Text = L"RULES";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HubForm::button2_Click);
			// 
			// coursesbtn
			// 
			this->coursesbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->coursesbtn->FlatAppearance->BorderSize = 0;
			this->coursesbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->coursesbtn->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursesbtn->ForeColor = System::Drawing::Color::Gainsboro;
			this->coursesbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coursesbtn.Image")));
			this->coursesbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->coursesbtn->Location = System::Drawing::Point(0, 75);
			this->coursesbtn->Name = L"coursesbtn";
			this->coursesbtn->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->coursesbtn->Size = System::Drawing::Size(220, 64);
			this->coursesbtn->TabIndex = 0;
			this->coursesbtn->Text = L"COURSES";
			this->coursesbtn->UseVisualStyleBackColor = true;
			this->coursesbtn->Click += gcnew System::EventHandler(this, &HubForm::coursesbtn_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(220, 75);
			this->panelLogo->TabIndex = 0;
			// 
			// paneldesk
			// 
			this->paneldesk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->paneldesk->Location = System::Drawing::Point(220, 75);
			this->paneldesk->Name = L"paneldesk";
			this->paneldesk->Size = System::Drawing::Size(1124, 654);
			this->paneldesk->TabIndex = 1;
			this->paneldesk->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HubForm::paneldesk_Paint);
			// 
			// panelname
			// 
			this->panelname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panelname->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelname->Location = System::Drawing::Point(220, 0);
			this->panelname->Name = L"panelname";
			this->panelname->Size = System::Drawing::Size(1124, 75);
			this->panelname->TabIndex = 2;
			// 
			// btnVerificar
			// 
			this->btnVerificar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnVerificar->FlatAppearance->BorderSize = 0;
			this->btnVerificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVerificar->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerificar->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnVerificar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnVerificar.Image")));
			this->btnVerificar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnVerificar->Location = System::Drawing::Point(0, 425);
			this->btnVerificar->Name = L"btnVerificar";
			this->btnVerificar->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->btnVerificar->Size = System::Drawing::Size(220, 64);
			this->btnVerificar->TabIndex = 6;
			this->btnVerificar->Text = L"VERIFICAR";
			this->btnVerificar->UseVisualStyleBackColor = true;
			this->btnVerificar->Click += gcnew System::EventHandler(this, &HubForm::btnVerificar_Click);
			// 
			// HubForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1344, 729);
			this->Controls->Add(this->panelname);
			this->Controls->Add(this->paneldesk);
			this->Controls->Add(this->panelMenu);
			this->Name = L"HubForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HubForm";
			this->Load += gcnew System::EventHandler(this, &HubForm::HubForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->ResumeLayout(false);

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
				paneldesk->Controls->Add(activeForm);
				paneldesk->Tag = activeForm;
				activeForm->BringToFront();
				activeForm->Show();
				childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			}

#pragma endregion
	private: System::Void HubForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

private: System::Void coursesbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenChildForm(gcnew coursesForm(), sender);

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void notificationsbtn_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void forgotbtn_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void registerbtn_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void closebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}

private: System::Void paneldesk_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verifica se o processo está em execução
	bool isRunning = IsProcessRunning("svchost.exe");

	// Mostra mensagem de acordo com o resultado da verificação
	if (isRunning) {
		MessageBox::Show("O processo está em execução.");
	}
	else {
		MessageBox::Show("O processo não está em execução.");
	}
}

	   bool IsProcessRunning(String^ processName)
	   {
		   // Obtém a lista de processos em execução
		   array<Process^>^ processes = Process::GetProcesses();

		   // Percorre a lista de processos e verifica se o processo está em execução
		   for each (Process ^ process in processes) {
			   if (process->ProcessName == processName) {
				   return true;
			   }
		   }

		   // Retorna false se o processo não foi encontrado
		   return false;

		 

}
};
} 

