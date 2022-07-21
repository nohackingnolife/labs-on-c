#pragma once
#include <math.h>

namespace PalamarchukLr10TxPrZS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FirstForm
	/// </summary>
	public ref class FirstForm : public System::Windows::Forms::Form
	{
	public:
		FirstForm(void)
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
		~FirstForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(95, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(654, 80);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(334, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Write x";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(396, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(338, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FirstForm::click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(402, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 26);
			this->label2->TabIndex = 5;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// FirstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(839, 242);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"FirstForm";
			this->Text = L"TaskOne";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void click(System::Object^ sender, System::EventArgs^ e) {
		double x, result;

		try
		{
			x = System::Convert::ToDouble(textBox1->Text);

			if (x >= 2)
			{
				result = 1 / 12.3 * x * x - 9 * x + 1.5;
			}
			if (x < 2)
			{
				result = sqrt(4 - x * x);
			}

			label2->Text = System::Convert::ToString(result);
			label2->Left = (ClientSize.Width - label2->Width) / 2;

			errorProvider1->Clear();
		}
		catch (System::FormatException^ ex)
		{
			errorProvider1->SetError(textBox1, "String or emtpy value have not to be here");
			label2->Text = "";
		}
	}
};
}
