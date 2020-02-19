#pragma once
#include <stdlib.h>
#include "matrix.h"

namespace matrixx4 {
	TMatrix<int>A; TMatrix<int>B; TMatrix<int>Res;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;
	private:
	private: System::Windows::Forms::Button^ button3;
	public:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ random;
	public: System::Windows::Forms::Label^ А;
	private:
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->random = (gcnew System::Windows::Forms::Button());
			this->А = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(300, 300);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(349, 40);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(300, 300);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(679, 40);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(300, 300);
			this->dataGridView3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1043, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1043, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 39);
			this->button1->TabIndex = 5;
			this->button1->Text = L"SIZE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1043, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 39);
			this->button2->TabIndex = 6;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1043, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 39);
			this->button3->TabIndex = 7;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1043, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 39);
			this->button4->TabIndex = 8;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// random
			// 
			this->random->Location = System::Drawing::Point(1042, 236);
			this->random->Name = L"random";
			this->random->Size = System::Drawing::Size(72, 39);
			this->random->TabIndex = 9;
			this->random->Text = L"random";
			this->random->UseVisualStyleBackColor = true;
			this->random->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
			// 
			// А
			// 
			this->А->AutoSize = true;
			this->А->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->А->Location = System::Drawing::Point(141, 12);
			this->А->Name = L"А";
			this->А->Size = System::Drawing::Size(26, 25);
			this->А->TabIndex = 10;
			this->А->Text = L"A";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(481, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(806, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"RES";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(318, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 25);
			this->label3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(655, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 360);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->А);
			this->Controls->Add(this->random);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Matrix";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int size;
		int lastsize;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //setSize
	size = Convert::ToInt32(textBox1->Text);
	A = TMatrix<int>(size);
	B = TMatrix<int>(size);
	Res = TMatrix<int>(size);
	//for (int i = 0; i < lastsize; i++) {
	//	dataGridView1->Columns->RemoveAt(i);
	//}
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();
	dataGridView3->Rows->Clear();
	dataGridView1->RowHeadersVisible = false;
	dataGridView1->ColumnHeadersVisible = false;
	dataGridView2->RowHeadersVisible = false;
	dataGridView2->ColumnHeadersVisible = false;
	dataGridView3->RowHeadersVisible = false;
	dataGridView3->ColumnHeadersVisible = false;
	dataGridView3->ReadOnly = true;
	dataGridView1->ColumnCount = size;
	dataGridView1->RowCount = size;
	dataGridView2->ColumnCount = size;
	dataGridView2->RowCount = size;
	dataGridView3->ColumnCount = size;
	dataGridView3->RowCount = size;
	lastsize = size;

	for (int i = 0; i < size; i++){
		dataGridView1->Columns[i]->Width = 35;
		dataGridView2->Columns[i]->Width = 35;
		dataGridView3->Columns[i]->Width = 35;
		for (int j = 0; j <i; j++) {
			dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
			dataGridView2->Rows[i]->Cells[j]->ReadOnly = true;
		}
	}
	
}
private: System::Void random_Click(System::Object^ sender, System::EventArgs^ e) { //random
	for (int i = 0; i < size; i++){
		for (int j = i; j < size; j++){
			dataGridView1->Rows[i]->Cells[j]->Value = rand() % 100 + 1;
			dataGridView2->Rows[i]->Cells[j]->Value = rand() % 100 - 1;
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //+
	label3->Text = "+";
	for (int i = 0; i < size; i++){
		for (int j = i; j < size; j++){
			A[i][j] = Convert::ToInt32(dataGridView1[j, i]->Value);
			B[i][j] = Convert::ToInt32(dataGridView2[j, i]->Value);
		}
	}
	Res = A + B;
	for (int i = 0; i < size; i++){
		for (int j = i; j < size; j++) {
			dataGridView3[j, i]->Value = Convert::ToString((Res)[i][j]);
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//-
	label3->Text = "-";
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			A[i][j] = Convert::ToInt32(dataGridView1[j, i]->Value);
			B[i][j] = Convert::ToInt32(dataGridView2[j, i]->Value);
		}
	}
	Res = A - B;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			dataGridView3[j, i]->Value = Convert::ToString((Res)[i][j]);
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//*
	label3->Text = "*";
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			A[i][j] = Convert::ToInt32(dataGridView1[j, i]->Value);
			B[i][j] = Convert::ToInt32(dataGridView2[j, i]->Value);
		}
	}
	Res = A * B;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			dataGridView3[j, i]->Value = Convert::ToString((Res)[i][j]);
		}
	}
}
};
}
