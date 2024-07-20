#pragma once
#include "notation_convert.h"
#include <msclr\marshal_cppstd.h>


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(82, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Binary", L"Octal", L"Decimal", L"Hexadecimal" });
			this->comboBox1->Location = System::Drawing::Point(95, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Binary", L"Octal", L"Decimal", L"Hexadecimal" });
			this->comboBox2->Location = System::Drawing::Point(95, 67);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"From:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"To:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(219, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 227);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(219, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Enter the number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Result";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(292, 332);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Notions Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	string num = msclr::interop::marshal_as<std::string>(textBox1->Text);
	if (comboBox1->SelectedItem == "Binary") {
		if (comboBox2->SelectedItem == "Binary") {}
		else if (comboBox2->SelectedItem == "Octal") {
			num = f10_t8(f2_t10(num));
		}
		else if (comboBox2->SelectedItem == "Decimal") {
			num = f2_t10(num);		
		}
		else if (comboBox2->SelectedItem == "Hexadecimal") {
			num = f10_t16(f2_t10(num));
		}
	}
	else if (comboBox1->SelectedItem == "Octal") {
		if (comboBox2->SelectedItem == "Octal") {}
		else if (comboBox2->SelectedItem == "Binary") {
			num = f10_t2(f8_t10(num));
		}
		else if (comboBox2->SelectedItem == "Decimal") {
			num = f8_t10(num);
		}
		else if (comboBox2->SelectedItem == "Hexadecimal") {
			num = f10_t16(f8_t10(num));
		}
	}
	else if (comboBox1->SelectedItem == "Decimal") {
		if (comboBox2->SelectedItem == "Decimal") {}
		else if (comboBox2->SelectedItem == "Binary") {
			num = f10_t2(num);
		}
		else if (comboBox2->SelectedItem == "Octal") {
			num = f10_t8(num);
		}
		else if (comboBox2->SelectedItem == "Hexadecimal") {
			num = f10_t16(num);
		}
	}
	else if (comboBox1->SelectedItem == "Hexadecimal") {
		if (comboBox2->SelectedItem == "Hexadecimal") {}
		else if (comboBox2->SelectedItem == "Binary") {
			num = f10_t2(f16_t10(num));
		}
		else if (comboBox2->SelectedItem == "Octal") {
			num = f10_t8(f16_t10(num));
		}
		else if (comboBox2->SelectedItem == "Decimal") {
			num = f16_t10(num);
		}
	}
	if (num == "Caught Invalid Argument Exception\n") {
		MessageBox::Show("Caught Invalid Argument Exception\n");
	}
	else {
		textBox2->Text = gcnew System::String(num.data());
	}
}
};
}
