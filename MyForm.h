// Alix Field				afield@cnm.edu    FieldP5_CPP
// MyForm.h

#pragma once
#include "SimpleCalc.h"

namespace FieldP5_CPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	SimpleCalc calc;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtNum1;
	private: System::Windows::Forms::TextBox^  txtNum2;
	private: System::Windows::Forms::TextBox^  txtResult;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnAddition;
	private: System::Windows::Forms::Button^  btnSubtraction;
	private: System::Windows::Forms::Button^  btnMultiplication;
	private: System::Windows::Forms::Button^  btnDivision;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Label^  lblOps;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnAddition = (gcnew System::Windows::Forms::Button());
			this->btnSubtraction = (gcnew System::Windows::Forms::Button());
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblOps = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(507, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"            Welcome to our Simple Calculator \r\nEnter two numbers and press the oe"
				L"ration button";
			// 
			// txtNum1
			// 
			this->txtNum1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtNum1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNum1->Location = System::Drawing::Point(35, 153);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(107, 20);
			this->txtNum1->TabIndex = 1;
			this->txtNum1->TextChanged += gcnew System::EventHandler(this, &MyForm::txtNum1_TextChanged);
			// 
			// txtNum2
			// 
			this->txtNum2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtNum2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNum2->Location = System::Drawing::Point(192, 153);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(107, 20);
			this->txtNum2->TabIndex = 2;
			// 
			// txtResult
			// 
			this->txtResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtResult->Location = System::Drawing::Point(391, 153);
			this->txtResult->Name = L"txtResult";
			this->txtResult->Size = System::Drawing::Size(107, 20);
			this->txtResult->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(331, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"=";
			// 
			// btnAddition
			// 
			this->btnAddition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddition->Location = System::Drawing::Point(50, 236);
			this->btnAddition->Name = L"btnAddition";
			this->btnAddition->Size = System::Drawing::Size(76, 65);
			this->btnAddition->TabIndex = 6;
			this->btnAddition->Text = L"+";
			this->btnAddition->UseVisualStyleBackColor = true;
			this->btnAddition->Click += gcnew System::EventHandler(this, &MyForm::btnAddition_Click);
			// 
			// btnSubtraction
			// 
			this->btnSubtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtraction->Location = System::Drawing::Point(207, 236);
			this->btnSubtraction->Name = L"btnSubtraction";
			this->btnSubtraction->Size = System::Drawing::Size(76, 65);
			this->btnSubtraction->TabIndex = 7;
			this->btnSubtraction->Text = L"-";
			this->btnSubtraction->UseVisualStyleBackColor = true;
			this->btnSubtraction->Click += gcnew System::EventHandler(this, &MyForm::btnSubtraction_Click);
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiplication->Location = System::Drawing::Point(50, 348);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(76, 65);
			this->btnMultiplication->TabIndex = 8;
			this->btnMultiplication->Text = L"x";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplication_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivision->Location = System::Drawing::Point(207, 348);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(76, 65);
			this->btnDivision->TabIndex = 9;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &MyForm::btnDivision_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(398, 377);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(100, 36);
			this->btnClear->TabIndex = 10;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// lblOps
			// 
			this->lblOps->AutoSize = true;
			this->lblOps->Location = System::Drawing::Point(309, 160);
			this->lblOps->Name = L"lblOps";
			this->lblOps->Size = System::Drawing::Size(0, 13);
			this->lblOps->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(557, 454);
			this->Controls->Add(this->lblOps);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btnSubtraction);
			this->Controls->Add(this->btnAddition);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"Field P5  Simple Calculator on a Form  Windows Form Programming";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion

		private: System::Void btnAddition_Click(System::Object^  sender, System::EventArgs^  e) {
			double n1, n2;
			n1 = Convert::ToDouble(txtNum1->Text);
			n2 = Convert::ToDouble(txtNum2->Text);
			calc.SetOperation('+', n1, n2);
			lblOps->Text = "+";
			txtResult->Text = gcnew String(calc.GetResults().c_str());
		}

		private: System::Void btnSubtraction_Click(System::Object^  sender, System::EventArgs^  e) {
			double n1, n2;
			n1 = Convert::ToDouble(txtNum1->Text);
			n2 = Convert::ToDouble(txtNum2->Text);
			calc.SetOperation('-', n1, n2);
			lblOps->Text = "-";
			txtResult->Text = calc.GetAnswer().ToString("F2");
		}

		private: System::Void btnMultiplication_Click(System::Object^  sender, System::EventArgs^  e) {
			double n1, n2;
			n1 = Convert::ToDouble(txtNum1->Text);
			n2 = Convert::ToDouble(txtNum2->Text);
			calc.SetOperation('*', n1, n2);
			lblOps->Text = "*";
			txtResult->Text = gcnew String(calc.GetResults().c_str());
		}

		private: System::Void btnDivision_Click(System::Object^  sender, System::EventArgs^  e) {
			double n1, n2;
			n1 = Convert::ToDouble(txtNum1->Text);
			n2 = Convert::ToDouble(txtNum2->Text);
			calc.SetOperation('/', n1, n2);
			lblOps->Text = "/";
			txtResult->Text = calc.GetAnswer().ToString("F2");
		}

		private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
			txtNum1->Clear();
			txtNum2->Clear();
			txtResult->Clear();
			lblOps->Text = " ";
		}

		private: System::Void txtNum1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			}
	};
}
