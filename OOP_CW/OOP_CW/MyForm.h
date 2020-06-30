#pragma once

//#define _CRT_SECURE_NO_WARNINGS
#include <msclr\marshal_cppstd.h>
#include "SWTools.h"
#include "Applications.h"
#include "Basic.h"
#include "Software.h"
#include "Objects.h"
#include "Interface.h"
#include "MainContainer.h"
#include "TemplateCont.h"
namespace OOPCW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;
	using namespace System::Data;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		DataTable^ dataT;
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ bUpload;
	private: System::Windows::Forms::Button^ bSave;
	private: System::Windows::Forms::Button^ bPreview;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::Button^ bAdd;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bUpload = (gcnew System::Windows::Forms::Button());
			this->bSave = (gcnew System::Windows::Forms::Button());
			this->bPreview = (gcnew System::Windows::Forms::Button());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->bAdd = (gcnew System::Windows::Forms::Button());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1200, 330);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->bUpload);
			this->tabPage1->Controls->Add(this->bSave);
			this->tabPage1->Controls->Add(this->bPreview);
			this->tabPage1->Controls->Add(this->radioButton5);
			this->tabPage1->Controls->Add(this->radioButton4);
			this->tabPage1->Controls->Add(this->radioButton3);
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1192, 297);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Preview";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(195, 6);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(990, 279);
			this->dataGridView1->TabIndex = 8;
			// 
			// bUpload
			// 
			this->bUpload->Location = System::Drawing::Point(6, 246);
			this->bUpload->Name = L"bUpload";
			this->bUpload->Size = System::Drawing::Size(182, 39);
			this->bUpload->TabIndex = 7;
			this->bUpload->Text = L"Upload";
			this->bUpload->UseVisualStyleBackColor = true;
			// 
			// bSave
			// 
			this->bSave->Location = System::Drawing::Point(6, 201);
			this->bSave->Name = L"bSave";
			this->bSave->Size = System::Drawing::Size(182, 39);
			this->bSave->TabIndex = 6;
			this->bSave->Text = L"Save";
			this->bSave->UseVisualStyleBackColor = true;
			this->bSave->Click += gcnew System::EventHandler(this, &MyForm::bSave_Click);
			// 
			// bPreview
			// 
			this->bPreview->Location = System::Drawing::Point(6, 156);
			this->bPreview->Name = L"bPreview";
			this->bPreview->Size = System::Drawing::Size(182, 39);
			this->bPreview->TabIndex = 5;
			this->bPreview->Text = L"Preview";
			this->bPreview->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 126);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(136, 24);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Software tools";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 96);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(172, 24);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Special assignment";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 66);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(177, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"General assignment";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 36);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(182, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Back-end application";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 6);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(158, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Operating system";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->bAdd);
			this->tabPage2->Controls->Add(this->radioButton10);
			this->tabPage2->Controls->Add(this->radioButton9);
			this->tabPage2->Controls->Add(this->radioButton8);
			this->tabPage2->Controls->Add(this->radioButton7);
			this->tabPage2->Controls->Add(this->radioButton6);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1192, 297);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Add";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// bAdd
			// 
			this->bAdd->Location = System::Drawing::Point(7, 156);
			this->bAdd->Name = L"bAdd";
			this->bAdd->Size = System::Drawing::Size(182, 39);
			this->bAdd->TabIndex = 8;
			this->bAdd->Text = L"Add";
			this->bAdd->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(7, 126);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(136, 24);
			this->radioButton10->TabIndex = 6;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Software tools";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(7, 96);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(172, 24);
			this->radioButton9->TabIndex = 5;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Special assignment";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(7, 66);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(177, 24);
			this->radioButton8->TabIndex = 4;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"General assignment";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 36);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(182, 24);
			this->radioButton7->TabIndex = 3;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Back-end application";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 6);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(158, 24);
			this->radioButton6->TabIndex = 2;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Operating system";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(196, 8);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(989, 281);
			this->dataGridView2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1224, 351);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void init() {
		Objects::container.push(new SWTools);
		Objects::container.push(new GeneralAssignment);
		Objects::container.push(new SpecialAssignment);
		Objects::container.push(new OS);
		Objects::container.push(new Backend);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		init();
	}

	public: void clear() {

	}

	private: System::Void bPreview_Click(System::Object^ sender, System::EventArgs^ e) {
		dataT = gcnew DataTable();
		dataGridView1->DataSource = nullptr;
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();

		if (radioButton1->Checked) {
			dataT->Columns->Add("Name");
			dataT->Columns->Add("Developer");
			dataT->Columns->Add("Data");
			dataT->Columns->Add("Last Version");
			dataT->Columns->Add("Price");

			PrintInfo(0, dataT, Objects::os);
		}
		if (radioButton2->Checked) {
			dataT->Columns->Add("Name");
			dataT->Columns->Add("Developer");
			dataT->Columns->Add("Data");
			dataT->Columns->Add("Last Version");
			dataT->Columns->Add("Type");
			dataT->Columns->Add("Price");

			PrintInfo(1, dataT, Objects::be);
		}
		if (radioButton3->Checked) {
			dataT->Columns->Add("Name");
			dataT->Columns->Add("Developer");
			dataT->Columns->Add("Data");
			dataT->Columns->Add("Area");
			dataT->Columns->Add("Installation");
			dataT->Columns->Add("Renewal");
			PrintInfo(2, dataT, Objects::ga);
		}
		if (radioButton4->Checked) {
			dataT->Columns->Add("Name");
			dataT->Columns->Add("Developer");
			dataT->Columns->Add("Data");
			dataT->Columns->Add("Area");
			dataT->Columns->Add("Installation");
			dataT->Columns->Add("Last Version");
			dataT->Columns->Add("Renewal");

			PrintInfo(3, dataT, Objects::sa);
		}
		if (radioButton5->Checked) {
			dataT->Columns->Add("Name");
			dataT->Columns->Add("Developer");
			dataT->Columns->Add("Data");
			dataT->Columns->Add("Type system");
			dataT->Columns->Add("Runtime system");

			PrintInfo(5, dataT, Objects::swt);

		}

		dataGridView1->DataSource = dataT;
	}

		   template<typename T>
		   void PrintInfo(int i, DataTable^ dataT, T st) {
			   dataT->Rows->Clear();
			   for (int j = 0; j < (6 - i - 1); j++) {
				   Objects::container.pop();
			   }
			   for (int j = 0; j < st.size(); j++) {
				   Objects::container.top();
				   Objects::container.top() = &st.at(j);
				   Objects::container.top()->print(dataT);
			   }
			   for (int j = 0; j < (i + 1); j++) {
				   Objects::container.pop();
			   }
			   init();
		   }
		   template<typename T>
		   void SaveInfo(int i, DataTable^ dataT, T st) {
			   for (int j = 0; j < (6 - i - 1); j++) {
				   Objects::container.pop();
			   }
			   for (int j = 0; j < st.size(); j++) {
				   Objects::container.top();
				   Objects::container.top() = &st.at(j);
				   Objects::container.top()->Save();
			   }
			   for (int j = 0; j < (i + 1); j++) {
				   Objects::container.pop();
			   }
			   init();
		   }

		   template<typename T>
		   void LoadInfo(int i, DataTable^ dataT, T st) {
		   }


	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton6->Checked) {
			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();
			dataGridView2->Columns->Add("Name", "Name");
			dataGridView2->Columns->Add("Developer", "Developer");
			dataGridView2->Columns->Add("Data", "Data");
			dataGridView2->Columns->Add("Last Version", "Last Version");
			dataGridView2->Columns->Add("Price", "Price");
		}
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton7->Checked) {
			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();
			dataGridView2->Columns->Add("Name", "Name");
			dataGridView2->Columns->Add("Developer", "Developer");
			dataGridView2->Columns->Add("Data", "Data");
			dataGridView2->Columns->Add("Last Version", "Last Version");
			dataGridView2->Columns->Add("Type", "Type");
			dataGridView2->Columns->Add("Price", "Price");
		}
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton8->Checked) {
			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();
			dataGridView2->Columns->Add("Name", "Name");
			dataGridView2->Columns->Add("Developer", "Developer");
			dataGridView2->Columns->Add("Data", "Data");
			dataGridView2->Columns->Add("Area", "Aria");
			dataGridView2->Columns->Add("Installation", "Installation");
			dataGridView2->Columns->Add("Renewal", "Renewal");
		}
	}
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton9->Checked) {
			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();
			dataGridView2->Columns->Add("Name", "Name");
			dataGridView2->Columns->Add("Developer", "Developer");
			dataGridView2->Columns->Add("Data", "Data");
			dataGridView2->Columns->Add("Area", "Aria");
			dataGridView2->Columns->Add("Installation", "Installation");
			dataGridView2->Columns->Add("Last Version", "Last Version");
			dataGridView2->Columns->Add("Renewal", "Renewal");
		}
	}
	private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton10->Checked) {
			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();
			dataGridView2->Columns->Add("Name", "Name");
			dataGridView2->Columns->Add("Developer", "Developer");
			dataGridView2->Columns->Add("Data", "Data");
			dataGridView2->Columns->Add("Type system", "Type Sistem");
			dataGridView2->Columns->Add("Runtime system", "Runtime sysytem");
		}
	}


	private: System::Void bAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string  name, developer, data, lastV, price, BEprice, BEtype, systype, exetype, app_area, app_type, GARenewal, SARenewal, SALastV;
		name = SysStringToChar(dataGridView2[0, 0]->Value->ToString());
		developer = SysStringToChar(dataGridView2[1, 0]->Value->ToString());
		data = SysStringToChar(dataGridView2[2, 0]->Value->ToString());
		if (radioButton6->Checked) {
			lastV = SysStringToChar(dataGridView2[3, 0]->Value->ToString());
			price = SysStringToChar(dataGridView2[4, 0]->Value->ToString());
			OS* x = new OS(name, developer, data, lastV, price);
			Objects::os.push_back(*x);
		}
		if (radioButton7->Checked) {
			lastV = SysStringToChar(dataGridView2[3, 0]->Value->ToString());
			BEprice = SysStringToChar(dataGridView2[4, 0]->Value->ToString());
			BEtype = SysStringToChar(dataGridView2[5, 0]->Value->ToString());
			Backend* x = new Backend(name, developer, data, lastV, BEprice, BEtype);
			Objects::be.push_back(*x);
		}
		if (radioButton8->Checked) {
			app_area = SysStringToChar(dataGridView2[3, 0]->Value->ToString());
			app_type = SysStringToChar(dataGridView2[4, 0]->Value->ToString());
			GARenewal = SysStringToChar(dataGridView2[5, 0]->Value->ToString());

			GeneralAssignment* x = new GeneralAssignment(name, developer, data, app_area, app_type, GARenewal);
			Objects::ga.push_back(*x);
		}
		if (radioButton9->Checked) {
			app_area = SysStringToChar(dataGridView2[3, 0]->Value->ToString());
			app_type = SysStringToChar(dataGridView2[4, 0]->Value->ToString());
			SALastV = SysStringToChar(dataGridView2[5, 0]->Value->ToString());
			SARenewal = SysStringToChar(dataGridView2[6, 0]->Value->ToString());

			SpecialAssignment* x = new SpecialAssignment(name, developer, data, app_area, app_type, SALastV, SARenewal);
			Objects::sa.push_back(*x);
		}
		if (radioButton10->Checked) {
			systype = SysStringToChar(dataGridView2[3, 0]->Value->ToString());
			exetype = SysStringToChar(dataGridView2[4, 0]->Value->ToString());

			SWTools* x = new SWTools(name, developer, data, systype, exetype);
			Objects::swt.push_back(*x);
		}
		dataGridView2->Rows->Clear();
	}
private: System::Void bSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) {
		SaveInfo(0, dataT, Objects::os);
	}
	if (radioButton2->Checked) {

		SaveInfo(1, dataT, Objects::be);
	}
	if (radioButton4->Checked) {

		SaveInfo(2, dataT, Objects::ga);
	}
	if (radioButton3->Checked) {

		SaveInfo(3, dataT, Objects::sa);
	}
	if (radioButton5->Checked) {

		SaveInfo(5, dataT, Objects::swt);

	}
	
}
};
}
