#include "AudioDevices.h"
#include "ComputationalUnit.h"
#include "Memory.h"
#include "StandartInput.h"
#include "VideoDevices.h"

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
		ElectricalAppliance ^ appliance;
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
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBoxFreq;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxDotsWidth;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBoxDotsHeight;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBoxLowFreq;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBoxHighFreq;
	private: System::Windows::Forms::TextBox^  textBoxImpedance;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBoxHeat;







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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxFreq = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxDotsWidth = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxDotsHeight = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxLowFreq = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxHighFreq = (gcnew System::Windows::Forms::TextBox());
			this->textBoxImpedance = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxHeat = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_cancel
			// 
			this->btn_cancel->Location = System::Drawing::Point(273, 373);
			this->btn_cancel->MaximumSize = System::Drawing::Size(112, 31);
			this->btn_cancel->MinimumSize = System::Drawing::Size(112, 31);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(112, 31);
			this->btn_cancel->TabIndex = 35;
			this->btn_cancel->Text = L"Отмена";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &FormDialog::btn_cancel_Click);
			// 
			// btn_ok
			// 
			this->btn_ok->Location = System::Drawing::Point(78, 373);
			this->btn_ok->MaximumSize = System::Drawing::Size(112, 31);
			this->btn_ok->MinimumSize = System::Drawing::Size(112, 31);
			this->btn_ok->Name = L"btn_ok";
			this->btn_ok->Size = System::Drawing::Size(112, 31);
			this->btn_ok->TabIndex = 34;
			this->btn_ok->Text = L"ОК";
			this->btn_ok->UseVisualStyleBackColor = true;
			this->btn_ok->Click += gcnew System::EventHandler(this, &FormDialog::btn_ok_Click);
			// 
			// l_inputPower
			// 
			this->l_inputPower->AutoSize = true;
			this->l_inputPower->Location = System::Drawing::Point(16, 94);
			this->l_inputPower->Name = L"l_inputPower";
			this->l_inputPower->Size = System::Drawing::Size(92, 20);
			this->l_inputPower->TabIndex = 24;
			this->l_inputPower->Text = L"Мощность:";
			// 
			// l_name
			// 
			this->l_name->AutoSize = true;
			this->l_name->Location = System::Drawing::Point(16, 54);
			this->l_name->Name = L"l_name";
			this->l_name->Size = System::Drawing::Size(126, 20);
			this->l_name->TabIndex = 20;
			this->l_name->Text = L"Наименование:";
			// 
			// l_category
			// 
			this->l_category->AutoSize = true;
			this->l_category->Location = System::Drawing::Point(16, 14);
			this->l_category->Name = L"l_category";
			this->l_category->Size = System::Drawing::Size(174, 20);
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
			this->cb_category->Location = System::Drawing::Point(273, 9);
			this->cb_category->MaximumSize = System::Drawing::Size(247, 0);
			this->cb_category->Name = L"cb_category";
			this->cb_category->Size = System::Drawing::Size(211, 28);
			this->cb_category->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 134);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 20);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Объём упаковки:";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(273, 49);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(211, 26);
			this->textBoxName->TabIndex = 37;
			this->textBoxName->Text = L"Устройство";
			// 
			// textBoxPower
			// 
			this->textBoxPower->Location = System::Drawing::Point(273, 89);
			this->textBoxPower->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxPower->Name = L"textBoxPower";
			this->textBoxPower->Size = System::Drawing::Size(211, 26);
			this->textBoxPower->TabIndex = 38;
			this->textBoxPower->Text = L"100";
			// 
			// textBoxVolume
			// 
			this->textBoxVolume->Location = System::Drawing::Point(273, 129);
			this->textBoxVolume->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxVolume->Name = L"textBoxVolume";
			this->textBoxVolume->Size = System::Drawing::Size(211, 26);
			this->textBoxVolume->TabIndex = 39;
			this->textBoxVolume->Text = L"5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 174);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 20);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Масса брутто:";
			// 
			// textBoxWeight
			// 
			this->textBoxWeight->Location = System::Drawing::Point(273, 169);
			this->textBoxWeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxWeight->Name = L"textBoxWeight";
			this->textBoxWeight->Size = System::Drawing::Size(211, 26);
			this->textBoxWeight->TabIndex = 41;
			this->textBoxWeight->Text = L"1000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 214);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 20);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Количество ядер:";
			// 
			// textBoxCores
			// 
			this->textBoxCores->Location = System::Drawing::Point(273, 209);
			this->textBoxCores->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxCores->Name = L"textBoxCores";
			this->textBoxCores->Size = System::Drawing::Size(211, 26);
			this->textBoxCores->TabIndex = 43;
			this->textBoxCores->Text = L"4";
			// 
			// textBoxFreqCore
			// 
			this->textBoxFreqCore->Location = System::Drawing::Point(273, 249);
			this->textBoxFreqCore->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxFreqCore->Name = L"textBoxFreqCore";
			this->textBoxFreqCore->Size = System::Drawing::Size(211, 26);
			this->textBoxFreqCore->TabIndex = 44;
			this->textBoxFreqCore->Text = L"3,8";
			// 
			// textBoxMemorySize
			// 
			this->textBoxMemorySize->Location = System::Drawing::Point(273, 289);
			this->textBoxMemorySize->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxMemorySize->Name = L"textBoxMemorySize";
			this->textBoxMemorySize->Size = System::Drawing::Size(211, 26);
			this->textBoxMemorySize->TabIndex = 45;
			this->textBoxMemorySize->Text = L"8";
			// 
			// textBoxMemorySpeed
			// 
			this->textBoxMemorySpeed->Location = System::Drawing::Point(273, 329);
			this->textBoxMemorySpeed->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxMemorySpeed->Name = L"textBoxMemorySpeed";
			this->textBoxMemorySpeed->Size = System::Drawing::Size(211, 26);
			this->textBoxMemorySpeed->TabIndex = 46;
			this->textBoxMemorySpeed->Text = L"30";
			// 
			// comboBoxPlugs
			// 
			this->comboBoxPlugs->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxPlugs->FormattingEnabled = true;
			this->comboBoxPlugs->Location = System::Drawing::Point(798, 290);
			this->comboBoxPlugs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBoxPlugs->Name = L"comboBoxPlugs";
			this->comboBoxPlugs->Size = System::Drawing::Size(211, 28);
			this->comboBoxPlugs->TabIndex = 47;
			// 
			// textBoxButtons
			// 
			this->textBoxButtons->Location = System::Drawing::Point(798, 332);
			this->textBoxButtons->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxButtons->Name = L"textBoxButtons";
			this->textBoxButtons->Size = System::Drawing::Size(211, 26);
			this->textBoxButtons->TabIndex = 48;
			this->textBoxButtons->Text = L"58";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 254);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 20);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Частота ядер:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 294);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 20);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Объём памяти:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 334);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 20);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Скорость памяти:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(530, 288);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 20);
			this->label7->TabIndex = 52;
			this->label7->Text = L"Тип разъёма:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(530, 335);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 20);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Количество кнопок:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(530, 248);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(169, 20);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Частота кадров (Гц):";
			// 
			// textBoxFreq
			// 
			this->textBoxFreq->Location = System::Drawing::Point(796, 245);
			this->textBoxFreq->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxFreq->Name = L"textBoxFreq";
			this->textBoxFreq->Size = System::Drawing::Size(211, 26);
			this->textBoxFreq->TabIndex = 56;
			this->textBoxFreq->Text = L"60";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(530, 208);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(230, 20);
			this->label10->TabIndex = 59;
			this->label10->Text = L"Разрешение по горизонтали:";
			// 
			// textBoxDotsWidth
			// 
			this->textBoxDotsWidth->Location = System::Drawing::Point(796, 205);
			this->textBoxDotsWidth->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxDotsWidth->Name = L"textBoxDotsWidth";
			this->textBoxDotsWidth->Size = System::Drawing::Size(211, 26);
			this->textBoxDotsWidth->TabIndex = 58;
			this->textBoxDotsWidth->Text = L"1366";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(530, 170);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 20);
			this->label11->TabIndex = 61;
			this->label11->Text = L"Разрешение по вертикали:";
			// 
			// textBoxDotsHeight
			// 
			this->textBoxDotsHeight->Location = System::Drawing::Point(796, 167);
			this->textBoxDotsHeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxDotsHeight->Name = L"textBoxDotsHeight";
			this->textBoxDotsHeight->Size = System::Drawing::Size(211, 26);
			this->textBoxDotsHeight->TabIndex = 60;
			this->textBoxDotsHeight->Text = L"768";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(530, 90);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(170, 20);
			this->label12->TabIndex = 63;
			this->label12->Text = L"Нижняя частота (Гц):";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(530, 129);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(180, 20);
			this->label13->TabIndex = 65;
			this->label13->Text = L"Сопротивление (КОм):";
			// 
			// textBoxLowFreq
			// 
			this->textBoxLowFreq->Location = System::Drawing::Point(796, 87);
			this->textBoxLowFreq->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxLowFreq->Name = L"textBoxLowFreq";
			this->textBoxLowFreq->Size = System::Drawing::Size(211, 26);
			this->textBoxLowFreq->TabIndex = 64;
			this->textBoxLowFreq->Text = L"20";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(530, 50);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(174, 20);
			this->label14->TabIndex = 67;
			this->label14->Text = L"Верхняя частота (Гц):";
			// 
			// textBoxHighFreq
			// 
			this->textBoxHighFreq->Location = System::Drawing::Point(796, 47);
			this->textBoxHighFreq->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxHighFreq->Name = L"textBoxHighFreq";
			this->textBoxHighFreq->Size = System::Drawing::Size(211, 26);
			this->textBoxHighFreq->TabIndex = 66;
			this->textBoxHighFreq->Text = L"20000";
			// 
			// textBoxImpedance
			// 
			this->textBoxImpedance->Location = System::Drawing::Point(796, 126);
			this->textBoxImpedance->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxImpedance->Name = L"textBoxImpedance";
			this->textBoxImpedance->Size = System::Drawing::Size(211, 26);
			this->textBoxImpedance->TabIndex = 62;
			this->textBoxImpedance->Text = L"32";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(532, 11);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 20);
			this->label15->TabIndex = 69;
			this->label15->Text = L"Нагрев (C):";
			// 
			// textBoxHeat
			// 
			this->textBoxHeat->Location = System::Drawing::Point(798, 8);
			this->textBoxHeat->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxHeat->Name = L"textBoxHeat";
			this->textBoxHeat->Size = System::Drawing::Size(211, 26);
			this->textBoxHeat->TabIndex = 68;
			this->textBoxHeat->Text = L"20";
			// 
			// FormDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 412);
			this->ControlBox = false;
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBoxHeat);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBoxHighFreq);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBoxLowFreq);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBoxImpedance);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBoxDotsHeight);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxDotsWidth);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxFreq);
			this->Controls->Add(this->label8);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormDialog";
			this->Text = L"Редактирование товара";
			this->Load += gcnew System::EventHandler(this, &FormDialog::FormDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void FormDialog_Load(System::Object^  sender, System::EventArgs^  e) {
	cb_category->SelectedItem = cb_category->Items[0];
	comboBoxPlugs->Items->Add(Plugs::Jack);
	comboBoxPlugs->Items->Add(Plugs::Minijack);
	comboBoxPlugs->Items->Add(Plugs::PS2);
	comboBoxPlugs->Items->Add(Plugs::USB_A);
	comboBoxPlugs->Items->Add(Plugs::USB_B);
	comboBoxPlugs->Items->Add(Plugs::USB_C);
	comboBoxPlugs->SelectedItem = comboBoxPlugs->Items[0];
}
private: System::Void btn_ok_Click(System::Object^  sender, System::EventArgs^  e) {
		if (cb_category->SelectedIndex == 0)
		{
			appliance = gcnew ComputationalUnit(
				textBoxName->Text, 
				Convert::ToDouble(textBoxPower->Text),
				Convert::ToDouble(textBoxHeat->Text),
				Convert::ToDouble(textBoxVolume->Text),
				Convert::ToDouble(textBoxWeight->Text),
				Convert::ToDouble(textBoxMemorySize->Text),
				Convert::ToInt32(textBoxCores->Text),			 
				Convert::ToDouble(textBoxFreqCore->Text));
		}
		if (cb_category->SelectedIndex == 1)
		{
			appliance = gcnew Memory(
				textBoxName->Text,
				Convert::ToDouble(textBoxPower->Text),
				Convert::ToDouble(textBoxHeat->Text),
				Convert::ToDouble(textBoxVolume->Text),
				Convert::ToDouble(textBoxWeight->Text),
				Convert::ToDouble(textBoxMemorySize->Text), 
				Convert::ToDouble(textBoxMemorySpeed->Text));
		}
		if (cb_category->SelectedIndex == 2)
		{
			appliance = gcnew StandartInput(
				textBoxName->Text,
				Convert::ToDouble(textBoxPower->Text),
				Convert::ToDouble(textBoxHeat->Text),
				Convert::ToDouble(textBoxVolume->Text),
				Convert::ToDouble(textBoxWeight->Text),
				(Plugs)comboBoxPlugs->SelectedItem,
				Convert::ToInt32(textBoxButtons->Text));
		}
		if (cb_category->SelectedIndex == 3)
		{
			appliance = gcnew AudioDevices(
				textBoxName->Text,
				Convert::ToDouble(textBoxPower->Text),
				Convert::ToDouble(textBoxHeat->Text),
				Convert::ToDouble(textBoxVolume->Text),
				Convert::ToDouble(textBoxWeight->Text),
				(Plugs)comboBoxPlugs->SelectedItem,
				Convert::ToDouble(textBoxLowFreq->Text),
				Convert::ToDouble(textBoxHighFreq->Text),
				Convert::ToDouble(textBoxImpedance->Text));
		}
		if (cb_category->SelectedIndex == 4)
		{
			appliance = gcnew VideoDevices(
				textBoxName->Text,
				Convert::ToDouble(textBoxPower->Text),
				Convert::ToDouble(textBoxHeat->Text),
				Convert::ToDouble(textBoxVolume->Text),
				Convert::ToDouble(textBoxWeight->Text),
				(Plugs)comboBoxPlugs->SelectedItem,
				Convert::ToDouble(textBoxFreq->Text),
				Convert::ToInt32(textBoxDotsHeight->Text),
				Convert::ToInt32(textBoxDotsWidth->Text));
		}
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
}
private: System::Void btn_cancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->Close();
}
};
}
