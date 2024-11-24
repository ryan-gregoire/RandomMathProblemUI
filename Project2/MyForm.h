#pragma once

#include <stdlib.h>
#include <string>
#include <time.h>
#include <array>
#include <vector>


using namespace std;

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Diagnostics::PerformanceCounter^ performanceCounter1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->performanceCounter1 = (gcnew System::Diagnostics::PerformanceCounter());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(50, 502);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(353, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(50, 571);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(353, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Check Answer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 455);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Operator: null";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(66, 192);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(314, 36);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(66, 279);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(314, 36);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Number: 0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Number: 0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 649);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {



	}

	public: System::Int32 RandomNum(int a, int b) {
		return rand() % a + b + 1;
	}


	public: System::Int32 Nums(int a, int b) {
		return a + b;
	};

	public: void n(){


		int Number_1 = Convert::ToInt64(RandomNum(1, 10));
		int Number_2 = Convert::ToInt64(RandomNum(2, 10));


		string op[4] = { "+", "-", "*", "/" };

		//int randomOp = System::Convert::ToInt32(;


		srand(time(0));

		int randomOp = rand() % + 3 + 1;
	
		std::string ops = op[randomOp];

		label1->Text = gcnew System::String(ops.c_str());
		label2->Text = gcnew System::String(Number_1.ToString());
		label3->Text = gcnew System::String(Number_2.ToString());

	};
 
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		static bool isReady = false;

		if (!isReady) {

			int a = 5;

			if (sizeof(a) > 0) {

				button1->BackColor = System::Drawing::Color::Black;
				button1->ForeColor = System::Drawing::Color::White;
				button1->Text = "Already Generated";




			}



		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{



		static bool isReady = false;

		if (!isReady) {

			int a = 5;

			if (sizeof(a) > 0) {

				button2->BackColor = System::Drawing::Color::Black;
				button2->ForeColor = System::Drawing::Color::White;
				button2->Text = "Answer is Correct";

				n();



			}



		}

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
};
};
