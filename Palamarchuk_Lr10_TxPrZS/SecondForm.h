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
	/// Summary for SecondForm
	/// </summary>
	public ref class SecondForm : public System::Windows::Forms::Form
	{
	public:
		SecondForm(void)
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
		~SecondForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecondForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(381, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(110, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Write k";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(110, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Write E";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(108, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 52);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SecondForm::click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(156, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 23);
			this->label3->TabIndex = 6;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(381, 333);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SecondForm";
			this->Text = L"SecondForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void click(System::Object^ sender, System::EventArgs^ e) {
		int n;

		try
		{
			n = System::Convert::ToInt32(textBox1->Text);
			errorProvider1->Clear();
		}
		catch (System::FormatException^ ex1)
		{
			errorProvider1->SetError(textBox1, "Only digits have to be here...");
		}

		try
		{
			double eChecker = System::Convert::ToDouble(textBox2->Text);

			if (eChecker == 0.1 || eChecker == 0.2 || eChecker == 0.3)
			{
				errorProvider2->Clear();
			}
			else
			{
				label3->Text = "";
				throw 1;
			}

			double summ;
			for (int i = 1; i <= n; i++)
			{
				summ += 1 / pow(2, sqrt(n) - 1);
			}

			label3->Text = System::Convert::ToString(summ);
			label3->Left = (ClientSize.Width - label3->Width) / 2;
		}
		catch (System::FormatException^ ex)
		{
			errorProvider2->SetError(textBox2, "Only digits have to be here...");
		}
		catch (int)
		{
			errorProvider2->SetError(textBox2, "E have to be 0.1 or 0.2 or 0.3");
		}
	}
};
}
