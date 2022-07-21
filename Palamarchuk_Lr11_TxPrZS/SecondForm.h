#pragma once

namespace PalamarchukLr11TxPrZS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SecondForm
	/// </summary>
	public ref class SecondForm : public System::Windows::Forms::Form
	{
	public:
		SecondForm(void)
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
		~SecondForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBoxCols;
	private: System::Windows::Forms::TextBox^ textBoxRows;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonGenerate;
	private: System::Windows::Forms::Button^ buttonCalculate;
	private: System::Windows::Forms::Button^ buttonSort;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxResultA;
	private: System::Windows::Forms::TextBox^ textBoxResultB;




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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxCols = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRows = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxResultA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxResultB = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(24, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(343, 144);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBoxCols
			// 
			this->textBoxCols->Location = System::Drawing::Point(66, 17);
			this->textBoxCols->Name = L"textBoxCols";
			this->textBoxCols->Size = System::Drawing::Size(52, 20);
			this->textBoxCols->TabIndex = 1;
			// 
			// textBoxRows
			// 
			this->textBoxRows->Location = System::Drawing::Point(178, 17);
			this->textBoxRows->Name = L"textBoxRows";
			this->textBoxRows->Size = System::Drawing::Size(52, 20);
			this->textBoxRows->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Cols";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(124, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Rows";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Result A";
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->Location = System::Drawing::Point(24, 349);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(119, 42);
			this->buttonGenerate->TabIndex = 6;
			this->buttonGenerate->Text = L"Generate Table";
			this->buttonGenerate->UseVisualStyleBackColor = true;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &SecondForm::buttonGenerate_Click);
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->Location = System::Drawing::Point(149, 349);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(119, 42);
			this->buttonCalculate->TabIndex = 7;
			this->buttonCalculate->Text = L"Calculate";
			this->buttonCalculate->UseVisualStyleBackColor = true;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &SecondForm::buttonCalculate_Click);
			// 
			// buttonSort
			// 
			this->buttonSort->Location = System::Drawing::Point(274, 349);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(119, 42);
			this->buttonSort->TabIndex = 8;
			this->buttonSort->Text = L"Sort";
			this->buttonSort->UseVisualStyleBackColor = true;
			this->buttonSort->Click += gcnew System::EventHandler(this, &SecondForm::buttonSort_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 21);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Result B";
			// 
			// textBoxResultA
			// 
			this->textBoxResultA->Location = System::Drawing::Point(24, 261);
			this->textBoxResultA->Name = L"textBoxResultA";
			this->textBoxResultA->ReadOnly = true;
			this->textBoxResultA->Size = System::Drawing::Size(369, 20);
			this->textBoxResultA->TabIndex = 10;
			// 
			// textBoxResultB
			// 
			this->textBoxResultB->Location = System::Drawing::Point(24, 314);
			this->textBoxResultB->Name = L"textBoxResultB";
			this->textBoxResultB->ReadOnly = true;
			this->textBoxResultB->Size = System::Drawing::Size(369, 20);
			this->textBoxResultB->TabIndex = 11;
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 408);
			this->Controls->Add(this->textBoxResultB);
			this->Controls->Add(this->textBoxResultA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->buttonSort);
			this->Controls->Add(this->buttonCalculate);
			this->Controls->Add(this->buttonGenerate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxRows);
			this->Controls->Add(this->textBoxCols);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SecondForm";
			this->Text = L"SecondForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int cols, rows;

	private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear();
		srand(time(NULL));

		try
		{
			cols = Convert::ToInt32(textBoxCols->Text);
			rows = Convert::ToInt32(textBoxRows->Text);

			for (int i = 0; i < cols; i++)
			{
				dataGridView1->Columns->Add("", "");
			}
			dataGridView1->Rows->Add(rows);

			for (int row = 0; row < rows; row++)
			{
				for (int col = 0; col < cols; col++)
				{
					dataGridView1->Rows[row]->Cells[col]->Value = rand() % 100;
				}
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ tempString;

			for (int col = 0; col < cols; col++)
			{
				int sum = 0;
				for (int row = 0; row < rows; row++)
				{
					int value = Convert::ToInt32(dataGridView1->Rows[row]->Cells[col]->Value);
					if (value % 4 == 0)
					{
						sum += value;
					}
				}
				tempString += Convert::ToString(sum) + " ";
			}

			textBoxResultA->Text = tempString;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			array<String^>^ array = textBoxResultA->Text->Split((Char)' ');
			int length = array->Length - 1;
			int* arrayInt = new int[length];

			for (int i = 0; i < length; i++)
			{
				arrayInt[i] = Convert::ToInt32(array[i]);
			}

			// shella
			int step = (length / 2) - 1;
			int j = 0, count;
			while (step > 0)
			{
				for (int i = 0; i < length - step; i++)
				{
					j = i;
					while (j >= 0 && arrayInt[j] > arrayInt[j + step])
					{
						count = arrayInt[j];
						arrayInt[j] = arrayInt[j + step];
						arrayInt[j + step] = count;
						j--;
					}
				}
				step /= 2;
			}

			String^ tempString;
			for (int i = 0; i < length; i++)
			{
				tempString += Convert::ToString(arrayInt[i]) + " ";
			}

			textBoxResultB->Text = tempString;

			delete[] array;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
