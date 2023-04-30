#pragma once

namespace cloud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para wordForm
	/// </summary>
	public ref class wordForm : public System::Windows::Forms::Form
	{
	public:
		wordForm(void)
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
		~wordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ labeltittle;

	protected:

	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labeltittle = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->labeltittle);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(892, 576);
			this->panel1->TabIndex = 0;
			// 
			// labeltittle
			// 
			this->labeltittle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labeltittle->AutoSize = true;
			this->labeltittle->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeltittle->Location = System::Drawing::Point(83, 10);
			this->labeltittle->Name = L"labeltittle";
			this->labeltittle->Size = System::Drawing::Size(87, 38);
			this->labeltittle->TabIndex = 0;
			this->labeltittle->Text = L"word";
			this->labeltittle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labeltittle->Click += gcnew System::EventHandler(this, &wordForm::labeltittle_Click);
			// 
			// wordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 576);
			this->Controls->Add(this->panel1);
			this->Name = L"wordForm";
			this->Text = L"wordForm";
			this->Load += gcnew System::EventHandler(this, &wordForm::wordForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void wordForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labeltittle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
