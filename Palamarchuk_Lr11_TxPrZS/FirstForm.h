#pragma once
#include <time.h>
#include <stdlib.h>
#define n 10

namespace PalamarchukLr11TxPrZS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FirstForm
	/// </summary>
	public ref class FirstForm : public System::Windows::Forms::Form
	{
	public:
		FirstForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FirstForm()
		{
			if (components)
			{
				delete components;
				delete[] array;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelArray;
	private: System::Windows::Forms::Button^ buttonOutput;
	private: System::Windows::Forms::TextBox^ textBoxOutput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonGenerate;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonSum;

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
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelArray = (gcnew System::Windows::Forms::Label());
			this->buttonOutput = (gcnew System::Windows::Forms::Button());
			this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(77, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Array, multiple of 10";
			// 
			// labelArray
			// 
			this->labelArray->AutoSize = true;
			this->labelArray->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelArray->Location = System::Drawing::Point(79, 130);
			this->labelArray->Name = L"labelArray";
			this->labelArray->Size = System::Drawing::Size(52, 21);
			this->labelArray->TabIndex = 1;
			this->labelArray->Text = L"label2";
			this->labelArray->Visible = false;
			// 
			// buttonOutput
			// 
			this->buttonOutput->Location = System::Drawing::Point(304, 116);
			this->buttonOutput->Name = L"buttonOutput";
			this->buttonOutput->Size = System::Drawing::Size(100, 28);
			this->buttonOutput->TabIndex = 2;
			this->buttonOutput->Text = L"Output";
			this->buttonOutput->UseVisualStyleBackColor = true;
			this->buttonOutput->Click += gcnew System::EventHandler(this, &FirstForm::buttonOutput_Click);
			// 
			// textBoxOutput
			// 
			this->textBoxOutput->Location = System::Drawing::Point(304, 90);
			this->textBoxOutput->Name = L"textBoxOutput";
			this->textBoxOutput->Size = System::Drawing::Size(100, 20);
			this->textBoxOutput->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(300, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(319, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Write array`s number which will be outputed";
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->Location = System::Drawing::Point(81, 95);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(138, 26);
			this->buttonGenerate->TabIndex = 5;
			this->buttonGenerate->Text = L"Generate";
			this->buttonGenerate->UseVisualStyleBackColor = true;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &FirstForm::buttonGenerate_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(300, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Sum of elements which are multiples of 10";
			// 
			// buttonSum
			// 
			this->buttonSum->Location = System::Drawing::Point(304, 202);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(100, 32);
			this->buttonSum->TabIndex = 7;
			this->buttonSum->Text = L"Output";
			this->buttonSum->UseVisualStyleBackColor = true;
			this->buttonSum->Click += gcnew System::EventHandler(this, &FirstForm::buttonSum_Click);
			// 
			// FirstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 413);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonGenerate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxOutput);
			this->Controls->Add(this->buttonOutput);
			this->Controls->Add(this->labelArray);
			this->Controls->Add(this->label1);
			this->Name = L"FirstForm";
			this->Text = L"FirstForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int* array = new int[n];
	int sum;

	private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
		sum = 0;
		srand(time(NULL));

		String^ tempString;
		for (int i = 0; i < n; i++)
		{
			array[i] = rand() % 100;

			if (array[i] % 3 == 0)
			{
				sum += array[i];
			}

			tempString +=  "array[" + Convert::ToInt32(i) + "] = " + Convert::ToInt32(array[i]) + "\n";
		}
		
		labelArray->Visible = 1;
		labelArray->Text = tempString;
	}

	private: System::Void buttonOutput_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int number = Convert::ToInt32(textBoxOutput->Text);
			if (number < 0 || number > 9)
			{
				throw gcnew IndexOutOfRangeException;
			}
			MessageBox::Show("array[" + Convert::ToString(number) + "] = " + Convert::ToString(array[number]),
				"Array output");
		}
		catch (IndexOutOfRangeException^ ex)
		{
			MessageBox::Show("Index is out of range... The buffer might be overflowed, so please, write a number from 0 to 9 ", "BufferOverflowException", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void buttonSum_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Sum of elements which are multiples of three is " + Convert::ToString(sum), "Sum output");
	}
};
}
