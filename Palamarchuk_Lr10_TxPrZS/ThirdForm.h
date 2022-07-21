#pragma once
#include "MathFunc.h"


namespace PalamarchukLr10TxPrZS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ThirdForm
	/// </summary>
	public ref class ThirdForm : public System::Windows::Forms::Form
	{
	public:
		ThirdForm(void)
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
		~ThirdForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ labelMx;
	private: System::Windows::Forms::Label^ labelD;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelXi;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ThirdForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelMx = (gcnew System::Windows::Forms::Label());
			this->labelD = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelXi = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(33, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(220, 22);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 66);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ThirdForm::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(22, 41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(84, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(112, 39);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(151, 45);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(287, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 15);
			this->label1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Size";
			// 
			// labelMx
			// 
			this->labelMx->AutoSize = true;
			this->labelMx->Cursor = System::Windows::Forms::Cursors::Hand;
			this->labelMx->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMx->Location = System::Drawing::Point(293, 40);
			this->labelMx->Name = L"labelMx";
			this->labelMx->Size = System::Drawing::Size(24, 15);
			this->labelMx->TabIndex = 8;
			this->labelMx->Text = L"Mx";
			// 
			// labelD
			// 
			this->labelD->AutoSize = true;
			this->labelD->Cursor = System::Windows::Forms::Cursors::Hand;
			this->labelD->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelD->Location = System::Drawing::Point(293, 56);
			this->labelD->Name = L"labelD";
			this->labelD->Size = System::Drawing::Size(15, 15);
			this->labelD->TabIndex = 9;
			this->labelD->Text = L"D";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(88, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(343, 112);
			this->dataGridView1->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"10 <= x <= 100";
			// 
			// labelXi
			// 
			this->labelXi->AutoSize = true;
			this->labelXi->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelXi->Location = System::Drawing::Point(294, 25);
			this->labelXi->Name = L"labelXi";
			this->labelXi->Size = System::Drawing::Size(26, 15);
			this->labelXi->TabIndex = 12;
			this->labelXi->Text = L"X[i]";
			// 
			// ThirdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(447, 217);
			this->Controls->Add(this->labelXi);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labelD);
			this->Controls->Add(this->labelMx);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ThirdForm";
			this->Text = L"ThirdForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer simpleSound("C:\\Windows\\Media\\Windows Critical Stop.wav");
		try
		{
			int size = System::Convert::ToInt16(textBox1->Text);

			float* arr = MathFunc(size, dataGridView1);

			labelMx->Text = "Mx = " + arr[0].ToString();
			labelD->Text = "D = " + arr[1].ToString();

			String^ tempString = "";
			for (int i = 0; i < size; i++)
			{
				tempString += arr[2 + i].ToString() + " ";
			}
			labelXi->Text = "X[i] = " + tempString;

			delete[] arr;
		}
		catch (Exception^ ex)
		{
			simpleSound.Play();
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
