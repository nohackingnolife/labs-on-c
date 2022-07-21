#pragma once
#include "functions.h"

namespace PalamarchukLr13TxPrZS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Windows::Forms::DataVisualization::Charting;

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
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ textColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rowsHeightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colsWidthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ headerFontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ headerFontColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graphToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graphToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundColorToolStripMenuItem1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::TextBox^ textBoxStep;




	private: System::Windows::Forms::TextBox^ textBoxFinish;

	private: System::Windows::Forms::TextBox^ textBoxStart;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxMin;
	private: System::Windows::Forms::TextBox^ textBoxMax;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ToolStripMenuItem^ smallToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ middleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bigToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ smallToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ middleToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ bigToolStripMenuItem1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;





	protected:






	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxStep = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFinish = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStart = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxMin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMax = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rowsHeightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->smallToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->middleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bigToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colsWidthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->smallToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->middleToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bigToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->headerFontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->headerFontColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundColorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(14, 36);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(692, 423);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBoxStep);
			this->tabPage1->Controls->Add(this->textBoxFinish);
			this->tabPage1->Controls->Add(this->textBoxStart);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Size = System::Drawing::Size(684, 389);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Input";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(244, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 48);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FirstForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(284, 58);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 31);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Enter data";
			// 
			// textBoxStep
			// 
			this->textBoxStep->Location = System::Drawing::Point(298, 228);
			this->textBoxStep->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxStep->Name = L"textBoxStep";
			this->textBoxStep->Size = System::Drawing::Size(148, 28);
			this->textBoxStep->TabIndex = 5;
			// 
			// textBoxFinish
			// 
			this->textBoxFinish->Location = System::Drawing::Point(298, 173);
			this->textBoxFinish->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxFinish->Name = L"textBoxFinish";
			this->textBoxFinish->Size = System::Drawing::Size(148, 28);
			this->textBoxFinish->TabIndex = 4;
			// 
			// textBoxStart
			// 
			this->textBoxStart->Location = System::Drawing::Point(298, 118);
			this->textBoxStart->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxStart->Name = L"textBoxStart";
			this->textBoxStart->Size = System::Drawing::Size(148, 28);
			this->textBoxStart->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(242, 229);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Step";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(242, 178);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Finish";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(242, 123);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Start";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBoxMin);
			this->tabPage2->Controls->Add(this->textBoxMax);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 30);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Size = System::Drawing::Size(684, 389);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Table";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBoxMin
			// 
			this->textBoxMin->Location = System::Drawing::Point(402, 173);
			this->textBoxMin->Name = L"textBoxMin";
			this->textBoxMin->ReadOnly = true;
			this->textBoxMin->Size = System::Drawing::Size(156, 28);
			this->textBoxMin->TabIndex = 2;
			this->textBoxMin->Text = L"Min: ";
			// 
			// textBoxMax
			// 
			this->textBoxMax->Location = System::Drawing::Point(402, 129);
			this->textBoxMax->Name = L"textBoxMax";
			this->textBoxMax->ReadOnly = true;
			this->textBoxMax->Size = System::Drawing::Size(156, 28);
			this->textBoxMax->TabIndex = 1;
			this->textBoxMax->Text = L"Max: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(74, 29);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->Size = System::Drawing::Size(243, 326);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"X";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Y";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 30);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage3->Size = System::Drawing::Size(684, 389);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Graph";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea2->BorderWidth = 3;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(112, 15);
			this->chart1->Name = L"chart1";
			series4->BorderWidth = 8;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"f1";
			series4->XValueMember = L"Double";
			series4->YValueMembers = L"Double";
			series5->BorderWidth = 8;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"f2";
			series5->XValueMember = L"Double";
			series5->YValueMembers = L"Double";
			series6->BorderWidth = 5;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"f3";
			series6->XValueMember = L"Double";
			series6->YValueMembers = L"Double";
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(458, 360);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->graphToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(717, 30);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::exitToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tableToolStripMenuItem,
					this->graphToolStripMenuItem1
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->textColorToolStripMenuItem,
					this->backgroundColorToolStripMenuItem, this->rowsHeightToolStripMenuItem, this->colsWidthToolStripMenuItem, this->headerFontToolStripMenuItem,
					this->headerFontColorToolStripMenuItem
			});
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->tableToolStripMenuItem->Text = L"Table";
			// 
			// textColorToolStripMenuItem
			// 
			this->textColorToolStripMenuItem->Name = L"textColorToolStripMenuItem";
			this->textColorToolStripMenuItem->Size = System::Drawing::Size(196, 24);
			this->textColorToolStripMenuItem->Text = L"Text color";
			this->textColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::textColorToolStripMenuItem_Click);
			// 
			// backgroundColorToolStripMenuItem
			// 
			this->backgroundColorToolStripMenuItem->Name = L"backgroundColorToolStripMenuItem";
			this->backgroundColorToolStripMenuItem->Size = System::Drawing::Size(196, 24);
			this->backgroundColorToolStripMenuItem->Text = L"Background color";
			this->backgroundColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::backgroundColorToolStripMenuItem_Click);
			// 
			// rowsHeightToolStripMenuItem
			// 
			this->rowsHeightToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->smallToolStripMenuItem,
					this->middleToolStripMenuItem, this->bigToolStripMenuItem
			});
			this->rowsHeightToolStripMenuItem->Name = L"rowsHeightToolStripMenuItem";
			this->rowsHeightToolStripMenuItem->Size = System::Drawing::Size(196, 24);
			this->rowsHeightToolStripMenuItem->Text = L"Rows height";
			// 
			// smallToolStripMenuItem
			// 
			this->smallToolStripMenuItem->Name = L"smallToolStripMenuItem";
			this->smallToolStripMenuItem->Size = System::Drawing::Size(125, 24);
			this->smallToolStripMenuItem->Text = L"Small";
			this->smallToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::smallToolStripMenuItem_Click);
			// 
			// middleToolStripMenuItem
			// 
			this->middleToolStripMenuItem->Name = L"middleToolStripMenuItem";
			this->middleToolStripMenuItem->Size = System::Drawing::Size(125, 24);
			this->middleToolStripMenuItem->Text = L"Middle";
			this->middleToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::middleToolStripMenuItem_Click);
			// 
			// bigToolStripMenuItem
			// 
			this->bigToolStripMenuItem->Name = L"bigToolStripMenuItem";
			this->bigToolStripMenuItem->Size = System::Drawing::Size(125, 24);
			this->bigToolStripMenuItem->Text = L"Big";
			this->bigToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::bigToolStripMenuItem_Click);
			// 
			// colsWidthToolStripMenuItem
			// 
			this->colsWidthToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->smallToolStripMenuItem1,
					this->middleToolStripMenuItem1, this->bigToolStripMenuItem1
			});
			this->colsWidthToolStripMenuItem->Name = L"colsWidthToolStripMenuItem";
			this->colsWidthToolStripMenuItem->Size = System::Drawing::Size(196, 24);
			this->colsWidthToolStripMenuItem->Text = L"Cols width";
			// 
			// smallToolStripMenuItem1
			// 
			this->smallToolStripMenuItem1->Name = L"smallToolStripMenuItem1";
			this->smallToolStripMenuItem1->Size = System::Drawing::Size(125, 24);
			this->smallToolStripMenuItem1->Text = L"Small";
			this->smallToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FirstForm::smallToolStripMenuItem1_Click);
			// 
			// middleToolStripMenuItem1
			// 
			this->middleToolStripMenuItem1->Name = L"middleToolStripMenuItem1";
			this->middleToolStripMenuItem1->Size = System::Drawing::Size(125, 24);
			this->middleToolStripMenuItem1->Text = L"Middle";
			this->middleToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FirstForm::middleToolStripMenuItem1_Click);
			// 
			// bigToolStripMenuItem1
			// 
			this->bigToolStripMenuItem1->Name = L"bigToolStripMenuItem1";
			this->bigToolStripMenuItem1->Size = System::Drawing::Size(125, 24);
			this->bigToolStripMenuItem1->Text = L"Big";
			this->bigToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FirstForm::bigToolStripMenuItem1_Click);
			// 
			// headerFontToolStripMenuItem
			// 
			this->headerFontToolStripMenuItem->Name = L"headerFontToolStripMenuItem";
			this->headerFontToolStripMenuItem->Size = System::Drawing::Size(196, 24);
			this->headerFontToolStripMenuItem->Text = L"Header font";
			this->headerFontToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::headerFontToolStripMenuItem_Click);
			// 
			// headerFontColorToolStripMenuItem
			// 
			this->headerFontColorToolStripMenuItem->Name = L"headerFontColorToolStripMenuItem";
			this->headerFontColorToolStripMenuItem->Size = System::Drawing::Size(196, 24);
			this->headerFontColorToolStripMenuItem->Text = L"Header font color";
			this->headerFontColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::headerFontColorToolStripMenuItem_Click);
			// 
			// graphToolStripMenuItem1
			// 
			this->graphToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->colorToolStripMenuItem,
					this->backgroundColorToolStripMenuItem1
			});
			this->graphToolStripMenuItem1->Name = L"graphToolStripMenuItem1";
			this->graphToolStripMenuItem1->Size = System::Drawing::Size(180, 24);
			this->graphToolStripMenuItem1->Text = L"Graph";
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(195, 24);
			this->colorToolStripMenuItem->Text = L"Text Color";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::colorToolStripMenuItem_Click);
			// 
			// backgroundColorToolStripMenuItem1
			// 
			this->backgroundColorToolStripMenuItem1->Name = L"backgroundColorToolStripMenuItem1";
			this->backgroundColorToolStripMenuItem1->Size = System::Drawing::Size(195, 24);
			this->backgroundColorToolStripMenuItem1->Text = L"Background color";
			this->backgroundColorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &FirstForm::backgroundColorToolStripMenuItem1_Click);
			// 
			// graphToolStripMenuItem
			// 
			this->graphToolStripMenuItem->Name = L"graphToolStripMenuItem";
			this->graphToolStripMenuItem->Size = System::Drawing::Size(45, 24);
			this->graphToolStripMenuItem->Text = L"Exit";
			this->graphToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::graphToolStripMenuItem_Click);
			// 
			// FirstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 472);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FirstForm";
			this->Text = L"FirstForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int counter;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			dataGridView1->Rows->Clear();
			counter = 0;

			Series^ graphFirst = chart1->Series[0];
			Series^ graphSecond = chart1->Series[1];
			Series^ graphThird = chart1->Series[2];

			graphFirst->Points->Clear();
			graphSecond->Points->Clear();
			graphThird->Points->Clear();

			double start = Convert::ToDouble(textBoxStart->Text); // -2,74
			double finish = Convert::ToDouble(textBoxFinish->Text); // 28,29
			double step = Convert::ToDouble(textBoxStep->Text); // 0,1

			if (step <= 0)
			{
				throw gcnew ArgumentOutOfRangeException;
			}

			double min, max;

			for (double temp = start; temp <= finish; temp += step)
			{
				dataGridView1->Rows->Add();

				double y;
				if (temp <= 0)
				{
					y = firstFunction(temp);
					graphFirst->Points->AddXY(temp, y);
				}
				if (temp > 0 && temp <= 5)
				{
					y = secondFunction(temp);
					graphSecond->Points->AddXY(temp, y);
				}
				if (temp > 5)
				{
					y = thirdFunction(temp);
					graphThird->Points->AddXY(temp, y);
				}
				dataGridView1->Rows[counter]->Cells[0]->Value = temp;
				dataGridView1->Rows[counter]->Cells[1]->Value = y;
				
				if (counter == 0)
				{
					min = y;
					max = y;
				}

				if (y < min)
				{
					min = y;
				}

				if (y > max)
				{
					max = y;
				}
				
				counter++;
			}

			textBoxMax->Text = "Max: " + Convert::ToString(max);
			textBoxMin->Text = "Min: " + Convert::ToString(min);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void graphToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void textColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		dataGridView1->ForeColor = colorDialog1->Color;
	}

	private: System::Void backgroundColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		dataGridView1->RowsDefaultCellStyle->BackColor = colorDialog1->Color;
	}

	private: System::Void headerFontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();
		dataGridView1->ColumnHeadersDefaultCellStyle->Font = fontDialog1->Font;
	}
	
	private: System::Void headerFontColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->EnableHeadersVisualStyles = false;
		colorDialog1->ShowDialog();
		dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = colorDialog1->Color;
	}

	private: System::Void smallToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < counter; i++)
		{
			dataGridView1->Rows[i]->Height = 18;
		}
	}

	private: System::Void middleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < counter; i++)
		{
			dataGridView1->Rows[i]->Height = 25;
		}
	}

	private: System::Void bigToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < counter; i++)
		{
			dataGridView1->Rows[i]->Height = 50;
		}
	}

	private: System::Void smallToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns[0]->Width = 40;
		dataGridView1->Columns[1]->Width = 40;
	}

	private: System::Void middleToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns[0]->Width = 75;
		dataGridView1->Columns[1]->Width = 75;
	}

	private: System::Void bigToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns[0]->Width = 100;
		dataGridView1->Columns[1]->Width = 100;
	}

	private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		chart1->ChartAreas[0]->AxisY->LabelStyle->ForeColor = colorDialog1->Color;
		chart1->ChartAreas[0]->AxisX->LabelStyle->ForeColor = colorDialog1->Color;
	}

	private: System::Void backgroundColorToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		chart1->BackColor = colorDialog1->Color;
	}

	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			saveFileDialog1->Filter = "txt files (*.txt)|*.txt";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
			{
				return;
			}
			String^ filePath = saveFileDialog1->FileName;
			System::IO::StreamWriter^ fileSaver = System::IO::File::CreateText(filePath);
			fileSaver->WriteLine(textBoxMin->Text + "\n" + textBoxMax->Text);
			fileSaver->Close();
			filePath = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, ex->GetType()->Name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
