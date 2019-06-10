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
	/// ������ ��� FormMain
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
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: DataBase ^ listDataBase;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dgvAppliance;
	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->������ToolStripMenuItem, this->�������ToolStripMenuItem
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
				this->��������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(87, 29);
			this->testToolStripMenuItem->Text = L"������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(252, 30);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormMain::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(252, 30);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(252, 30);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������ToolStripMenuItem,
					this->��������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(85, 29);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(171, 30);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(171, 30);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����������ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(93, 29);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(209, 30);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(209, 30);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormMain::����������ToolStripMenuItem_Click);
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
			this->Text = L"����� ������������ �������������";
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

	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		FormDialog ^ form = gcnew FormDialog();
		if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->listDataBase->addAppliance(form->appliance);
			MessageBox::Show("������������ ������������� ���������", "�����������", MessageBoxButtons::OK);
		}
		this->formList(this->listDataBase->getListComputerPart());
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("��������: ����� ������������ ������������� \n�����: ��������� ����� �������, 643 \n��������: ���������� ������ ��������, ���, �����", "� ���������", MessageBoxButtons::OK);
	}
	};
}
