#pragma once

namespace PalamarchukLr12TxPrZS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBoxStart;
	private: System::Windows::Forms::TextBox^ textBoxStep;
	private: System::Windows::Forms::TextBox^ textBoxFinish;
	private: System::Windows::Forms::Button^ buttonStart;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBoxStart = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStep = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFinish = (gcnew System::Windows::Forms::TextBox());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->BorderWidth = 3;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(22, 46);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 8;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"f1";
			series1->XValueMember = L"Double";
			series1->YValueMembers = L"Double";
			series2->BorderWidth = 8;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"f2";
			series2->XValueMember = L"Double";
			series2->YValueMembers = L"Double";
			series3->BorderWidth = 5;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"f3";
			series3->XValueMember = L"Double";
			series3->YValueMembers = L"Double";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(457, 360);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// textBoxStart
			// 
			this->textBoxStart->Location = System::Drawing::Point(166, 434);
			this->textBoxStart->Name = L"textBoxStart";
			this->textBoxStart->Size = System::Drawing::Size(161, 20);
			this->textBoxStart->TabIndex = 1;
			this->textBoxStart->Text = L"Start (xn)";
			// 
			// textBoxStep
			// 
			this->textBoxStep->Location = System::Drawing::Point(166, 486);
			this->textBoxStep->Name = L"textBoxStep";
			this->textBoxStep->Size = System::Drawing::Size(161, 20);
			this->textBoxStep->TabIndex = 3;
			this->textBoxStep->Text = L"Step (xh)";
			// 
			// textBoxFinish
			// 
			this->textBoxFinish->Location = System::Drawing::Point(166, 460);
			this->textBoxFinish->Name = L"textBoxFinish";
			this->textBoxFinish->Size = System::Drawing::Size(161, 20);
			this->textBoxFinish->TabIndex = 2;
			this->textBoxFinish->Text = L"Finish (xk)";
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(166, 512);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(161, 23);
			this->buttonStart->TabIndex = 4;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &SecondForm::buttonStart_Click);
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 570);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->textBoxFinish);
			this->Controls->Add(this->textBoxStep);
			this->Controls->Add(this->textBoxStart);
			this->Controls->Add(this->chart1);
			this->Name = L"SecondForm";
			this->Text = L"SecondForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			Series^ graphicFirst = chart1->Series[0];
			Series^ graphicSecond = chart1->Series[1];
			Series^ graphicThird = chart1->Series[2];

			graphicFirst->Points->Clear();
			graphicSecond->Points->Clear();
			graphicThird->Points->Clear();

			double start = Convert::ToDouble(textBoxStart->Text); // -2,74
			double finish = Convert::ToDouble(textBoxFinish->Text); // 28,29
			double step = Convert::ToDouble(textBoxStep->Text); // 0,1
			
			for (double temp = start; temp <= finish; temp += step)
			{
				if (temp <= 0)
				{
					graphicFirst->Points->AddXY(temp, firstFunction(temp));
				}
				if (temp > 0 && temp <= 5)
				{
					graphicSecond->Points->AddXY(temp, secondFunction(temp));

				}
				if (temp > 5)
				{
					graphicThird->Points->AddXY(temp, thirdFunction(temp));
				}
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
