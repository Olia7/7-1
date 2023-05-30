#pragma once


namespace lab7_1 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 182);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 133);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(364, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Чабан Ольга";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введіть ПІБ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(266, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Довжина прізвища";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Довжина імені";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Довжина по-батькові";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Довжина рядка";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(248, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Прізвище";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(248, 87);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Ініціали";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 62);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(162, 80);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(45, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(162, 100);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(45, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(162, 120);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(45, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(324, 67);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(324, 87);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(251, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Обробити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 327);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ pib = textBox2->Text;
	array<String^>^ pib_arr;
	array<Char>^ delim = { ' ' };

	// розьиття рядка за " "
	pib_arr = pib->Split(delim, StringSplitOptions::RemoveEmptyEntries);

	// вивід довжин прізвища, імені, по-бітькові та всього рядка
	textBox3->AppendText((pib_arr[0]->Length).ToString());
	textBox4->AppendText((pib_arr[1]->Length).ToString());
	textBox5->AppendText((pib_arr[2]->Length).ToString());
	textBox6->AppendText((textBox2->Text->Length).ToString());

	// вивід прізвища то ініціалів
	textBox7->AppendText(pib_arr[0]);
	textBox8->AppendText(pib_arr[1][0] + "." + pib_arr[2][0] + ".");


}

};
}
