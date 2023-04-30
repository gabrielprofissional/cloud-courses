#pragma once

namespace cloud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para excelForm
	/// </summary>
	public ref class excelForm : public System::Windows::Forms::Form
	{
	public:
		excelForm(void)
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
		~excelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labeltittle;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
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
			this->labeltittle = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labeltittle
			// 
			this->labeltittle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labeltittle->AutoSize = true;
			this->labeltittle->BackColor = System::Drawing::Color::Transparent;
			this->labeltittle->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeltittle->Location = System::Drawing::Point(85, 10);
			this->labeltittle->Name = L"labeltittle";
			this->labeltittle->Size = System::Drawing::Size(702, 38);
			this->labeltittle->TabIndex = 1;
			this->labeltittle->Text = L"Descubra o que está acontecendo no Microsoft 365";
			this->labeltittle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(892, 576);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"excel";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &excelForm::label1_Click);
			// 
			// excelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(892, 576);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labeltittle);
			this->Name = L"excelForm";
			this->Text = L"excelForm";
			this->Load += gcnew System::EventHandler(this, &excelForm::excelForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void excelForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
