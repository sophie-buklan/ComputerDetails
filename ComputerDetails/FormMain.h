#pragma once

#include "FormDialog.h"
#include "DataBase.h"

namespace ComputerDetails {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	private:
		DataBase ^ listDataBase;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column;
			 int search = 0;
	public:
		FormMain(void)
		{
			InitializeComponent();
			listDataBase = gcnew DataBase();
			this->formList(listDataBase->getListAppliance());
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menu;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  testToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  èçìåíèòüToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüToolStripMenuItem;
	private: DataBase ^ listDataBase;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğóêîâîäñòâîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîáğàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dgvAppliance;
	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîáğàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóêîâîäñòâîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvAppliance = (gcnew System::Windows::Forms::DataGridView());
			this->menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAppliance))->BeginInit();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->testToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menu->Size = System::Drawing::Size(1155, 35);
			this->menu->TabIndex = 0;
			this->menu->Text = L"menuStrip1";
			// 
			// testToolStripMenuItem
			// 
			this->testToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äîáàâèòüToolStripMenuItem,
					this->èçìåíèòüToolStripMenuItem, this->óäàëèòüToolStripMenuItem
			});
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(87, 29);
			this->testToolStripMenuItem->Text = L"Òîâàğû";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(252, 30);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü";
			this->äîáàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormMain::äîáàâèòüToolStripMenuItem_Click);
			// 
			// èçìåíèòüToolStripMenuItem
			// 
			this->èçìåíèòüToolStripMenuItem->Name = L"èçìåíèòüToolStripMenuItem";
			this->èçìåíèòüToolStripMenuItem->Size = System::Drawing::Size(252, 30);
			this->èçìåíèòüToolStripMenuItem->Text = L"Èçìåíèòü";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(252, 30);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîáğàòüToolStripMenuItem,
					this->î÷èñòèòüToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(85, 29);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// ñîáğàòüToolStripMenuItem
			// 
			this->ñîáğàòüToolStripMenuItem->Name = L"ñîáğàòüToolStripMenuItem";
			this->ñîáğàòüToolStripMenuItem->Size = System::Drawing::Size(171, 30);
			this->ñîáğàòüToolStripMenuItem->Text = L"Ñîáğàòü";
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(171, 30);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ğóêîâîäñòâîToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(93, 29);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// ğóêîâîäñòâîToolStripMenuItem
			// 
			this->ğóêîâîäñòâîToolStripMenuItem->Name = L"ğóêîâîäñòâîToolStripMenuItem";
			this->ğóêîâîäñòâîToolStripMenuItem->Size = System::Drawing::Size(209, 30);
			this->ğóêîâîäñòâîToolStripMenuItem->Text = L"Ğóêîâîäñòâî";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(209, 30);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormMain::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// dgvAppliance
			// 
			this->dgvAppliance->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAppliance->Location = System::Drawing::Point(13, 39);
			this->dgvAppliance->Name = L"dgvAppliance";
			this->dgvAppliance->RowTemplate->Height = 28;
			this->dgvAppliance->Size = System::Drawing::Size(1130, 543);
			this->dgvAppliance->TabIndex = 1;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1155, 594);
			this->Controls->Add(this->dgvAppliance);
			this->Controls->Add(this->menu);
			this->MainMenuStrip = this->menu;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormMain";
			this->Text = L"Ñêëàä êîìïüşòåğíûõ êîìïëåêòóşùèõ";
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAppliance))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void formList(cli::array<ElectricalAppliance^>^ array)
		{
			dgvAppliance->Rows->Clear();
			for (int i = 0; i < array->Length; i++)
			{
				ElectricalAppliance ^ appliance = array[i];
				dgvAppliance->Rows->Add();
				dgvAppliance->Rows[i]->Cells[0]->Value = appliance->toString();
			}
		}

	private: System::Void äîáàâèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		FormDialog ^ form = gcnew FormDialog();
		if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->listDataBase->addAppliance(form->appliance);
			MessageBox::Show("Êîìïüşòåğíîå êîìïëåêòóşùåå äîáàâëåíî", "Óâåäîìëåíèå", MessageBoxButtons::OK);
		}
		this->formList(this->listDataBase->getListComputerPart());
	}
	private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Íàçâàíèå: Ñêëàä êîìïüşòåğíûõ êîìïëåêòóşùèõ \nÀâòîğ: Áóêëàíîâà Ñîôèÿ Şğüåâíà, 643 \nÇàêàç÷èê: Ëàâğåíòüåâ Ñåğãåé Èâàíîâè÷, ÂÏÌ, ĞÃĞÒÓ", "Î ïğîãğàììå", MessageBoxButtons::OK);
	}
	};
}
