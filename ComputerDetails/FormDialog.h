#pragma once

namespace ComputerDetails {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormDialog
	/// </summary>
	public ref class FormDialog : public System::Windows::Forms::Form
	{
	public:
		FormDialog(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_cancel;
	protected:
	private: System::Windows::Forms::Button^  btn_ok;









	private: System::Windows::Forms::Label^  l_inputPower;



	private: System::Windows::Forms::Label^  l_name;
	private: System::Windows::Forms::Label^  l_category;
	private: System::Windows::Forms::ComboBox^  cb_category;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::TextBox^  textBoxPower;
	private: System::Windows::Forms::TextBox^  textBoxVolume;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxWeight;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxCores;
	private: System::Windows::Forms::TextBox^  textBoxFreqCore;
	private: System::Windows::Forms::TextBox^  textBoxMemorySize;
	private: System::Windows::Forms::TextBox^  textBoxMemorySpeed;
	private: System::Windows::Forms::ComboBox^  comboBoxPlugs;
	private: System::Windows::Forms::TextBox^  textBoxButtons;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_ok = (gcnew System::Windows::Forms::Button());
			this->l_inputPower = (gcnew System::Windows::Forms::Label());
			this->l_name = (gcnew System::Windows::Forms::Label());
			this->l_category = (gcnew System::Windows::Forms::Label());
			this->cb_category = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPower = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVolume = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxWeight = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxCores = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFreqCore = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMemorySize = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMemorySpeed = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxPlugs = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxButtons = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_cancel
			// 
			this->btn_cancel->Location = System::Drawing::Point(182, 355);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(2);
			this->btn_cancel->MaximumSize = System::Drawing::Size(75, 20);
			this->btn_cancel->MinimumSize = System::Drawing::Size(75, 20);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(75, 20);
			this->btn_cancel->TabIndex = 35;
			this->btn_cancel->Text = L"Отмена";
			this->btn_cancel->UseVisualStyleBackColor = true;
			// 
			// btn_ok
			// 
			this->btn_ok->Location = System::Drawing::Point(56, 355);
			this->btn_ok->Margin = System::Windows::Forms::Padding(2);
			this->btn_ok->MaximumSize = System::Drawing::Size(75, 20);
			this->btn_ok->MinimumSize = System::Drawing::Size(75, 20);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(75, 20);
			this->btn_ok->TabIndex = 34;
			this->btn_ok->Text = L"ОК";
			this->btn_ok->UseVisualStyleBackColor = true;
			// 
			// l_inputPower
			// 
			this->l_inputPower->AutoSize = true;
			this->l_inputPower->Location = System::Drawing::Point(11, 61);
			this->l_inputPower->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l_inputPower->Name = L"l_inputPower";
			this->l_inputPower->Size = System::Drawing::Size(63, 13);
			this->l_inputPower->TabIndex = 24;
			this->l_inputPower->Text = L"Мощность:";
			// 
			// l_name
			// 
			this->l_name->AutoSize = true;
			this->l_name->Location = System::Drawing::Point(11, 35);
			this->l_name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l_name->Name = L"l_name";
			this->l_name->Size = System::Drawing::Size(86, 13);
			this->l_name->TabIndex = 20;
			this->l_name->Text = L"Наименование:";
			// 
			// l_category
			// 
			this->l_category->AutoSize = true;
			this->l_category->Location = System::Drawing::Point(11, 9);
			this->l_category->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l_category->Name = L"l_category";
			this->l_category->Size = System::Drawing::Size(120, 13);
			this->l_category->TabIndex = 19;
			this->l_category->Text = L"Тип комплектующего:";
			// 
			// cb_category
			// 
			this->cb_category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_category->FormattingEnabled = true;
			this->cb_category->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Вычислительное устройство", L"Запоминающее устройство",
					L"Аудиоустройство", L"Видеоустройство", L"Стандартное устройство ввода"
			});
			this->cb_category->Location = System::Drawing::Point(182, 6);
			this->cb_category->Margin = System::Windows::Forms::Padding(2);
			this->cb_category->MaximumSize = System::Drawing::Size(166, 0);
			this->cb_category->Name = L"cb_category";
			this->cb_category->Size = System::Drawing::Size(142, 21);
			this->cb_category->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Объём упаковки:";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(182, 32);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(142, 20);
			this->textBoxName->TabIndex = 37;
			// 
			// textBoxPower
			// 
			this->textBoxPower->Location = System::Drawing::Point(182, 58);
			this->textBoxPower->Name = L"textBoxPower";
			this->textBoxPower->Size = System::Drawing::Size(142, 20);
			this->textBoxPower->TabIndex = 38;
			// 
			// textBoxVolume
			// 
			this->textBoxVolume->Location = System::Drawing::Point(182, 84);
			this->textBoxVolume->Name = L"textBoxVolume";
			this->textBoxVolume->Size = System::Drawing::Size(142, 20);
			this->textBoxVolume->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Масса брутто:";
			// 
			// textBoxWeight
			// 
			this->textBoxWeight->Location = System::Drawing::Point(182, 110);
			this->textBoxWeight->Name = L"textBoxWeight";
			this->textBoxWeight->Size = System::Drawing::Size(142, 20);
			this->textBoxWeight->TabIndex = 41;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Количество ядер:";
			// 
			// textBoxCores
			// 
			this->textBoxCores->Location = System::Drawing::Point(182, 136);
			this->textBoxCores->Name = L"textBoxCores";
			this->textBoxCores->Size = System::Drawing::Size(142, 20);
			this->textBoxCores->TabIndex = 43;
			// 
			// textBoxFreqCore
			// 
			this->textBoxFreqCore->Location = System::Drawing::Point(182, 162);
			this->textBoxFreqCore->Name = L"textBoxFreqCore";
			this->textBoxFreqCore->Size = System::Drawing::Size(142, 20);
			this->textBoxFreqCore->TabIndex = 44;
			// 
			// textBoxMemorySize
			// 
			this->textBoxMemorySize->Location = System::Drawing::Point(182, 188);
			this->textBoxMemorySize->Name = L"textBoxMemorySize";
			this->textBoxMemorySize->Size = System::Drawing::Size(142, 20);
			this->textBoxMemorySize->TabIndex = 45;
			// 
			// textBoxMemorySpeed
			// 
			this->textBoxMemorySpeed->Location = System::Drawing::Point(182, 214);
			this->textBoxMemorySpeed->Name = L"textBoxMemorySpeed";
			this->textBoxMemorySpeed->Size = System::Drawing::Size(142, 20);
			this->textBoxMemorySpeed->TabIndex = 46;
			// 
			// comboBoxPlugs
			// 
			this->comboBoxPlugs->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxPlugs->FormattingEnabled = true;
			this->comboBoxPlugs->Location = System::Drawing::Point(182, 240);
			this->comboBoxPlugs->Name = L"comboBoxPlugs";
			this->comboBoxPlugs->Size = System::Drawing::Size(142, 21);
			this->comboBoxPlugs->TabIndex = 47;
			// 
			// textBoxButtons
			// 
			this->textBoxButtons->Location = System::Drawing::Point(182, 267);
			this->textBoxButtons->Name = L"textBoxButtons";
			this->textBoxButtons->Size = System::Drawing::Size(142, 20);
			this->textBoxButtons->TabIndex = 48;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Частота ядер:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Объём памяти:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 13);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Скорость памяти:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 13);
			this->label7->TabIndex = 52;
			this->label7->Text = L"Тип разъёма:";
			// 
			// FormDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 386);
			this->ControlBox = false;
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxButtons);
			this->Controls->Add(this->comboBoxPlugs);
			this->Controls->Add(this->textBoxMemorySpeed);
			this->Controls->Add(this->textBoxMemorySize);
			this->Controls->Add(this->textBoxFreqCore);
			this->Controls->Add(this->textBoxCores);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxWeight);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxVolume);
			this->Controls->Add(this->textBoxPower);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_ok);
			this->Controls->Add(this->l_inputPower);
			this->Controls->Add(this->l_name);
			this->Controls->Add(this->l_category);
			this->Controls->Add(this->cb_category);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormDialog";
			this->Text = L"Редактирование товара";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
