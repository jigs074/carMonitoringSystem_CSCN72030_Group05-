#pragma once

#include <fstream>
#include <string>
#include "Marshal.h"
#include "CSCN72030_Group05_CMS/Cruise-and-BackupCam.h"
#include "CSCN72030_Group05_CMS/volumeAndEngineTime.h"
#include "CSCN72030_Group05_CMS/EngineTemp.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace IO;
	
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		int starttime, stoptime;
	private: System::Windows::Forms::Label^ AvgTimeLabel;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ AvgTimeDisplay;
		 

	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ ManualButton;
	private: System::Windows::Forms::Button^ FrontButton;
	private: System::Windows::Forms::Button^ LowButton;
	private: System::Windows::Forms::Button^ MedButton;
	private: System::Windows::Forms::Button^ HighButton;
	private: System::Windows::Forms::Button^ AutoButton;
	private: System::Windows::Forms::Button^ RearButton;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Button^ VolUP;
	private: System::Windows::Forms::Label^ VolLBL;
	private: System::Windows::Forms::Button^ VolDWN;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ CruiseOff;
	private: System::Windows::Forms::Button^ CruiseON;

	public: System::Windows::Forms::GroupBox^ groupBox6;
	private:
	private:
	private: System::Windows::Forms::TextBox^ temptextbox;
	private: System::Windows::Forms::Label^ manualtemplabel;
	private: System::Windows::Forms::Label^ CarTempDisplay;
	private: System::Windows::Forms::Label^ CarTempLabel;
	private: System::Windows::Forms::Label^ EngineTimeLabel;
	private: System::Windows::Forms::Label^ EngineTimeDisplay;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Button^ BackCamOff;
	private: System::Windows::Forms::Button^ BackCamON;
	private: System::Windows::Forms::Label^ BackUpCameraLabel;
	private: System::Windows::Forms::Label^ BackUpCameraDisplay;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ CruiseControlLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ SeatWarmerPositionLabel;
	private: System::Windows::Forms::Label^ SeatWarmerPositonDisplay;
	private: System::Windows::Forms::Label^ SeatWarmSettingLabel;
	private: System::Windows::Forms::Label^ SeatWarmerSettingDisplay;
	private: System::Windows::Forms::Label^ SeatWarmerTempLabel;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ SeatWarmerTempDisplay;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ EngineONButton;
	private: System::Windows::Forms::Button^ EngineOFFButton;
	private: System::Windows::Forms::Label^ AlertLabel;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ DurTimeLabel;
	private: System::Windows::Forms::Label^ DurTimeDisplay;













	private: System::ComponentModel::IContainer^ components;

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ManualButton = (gcnew System::Windows::Forms::Button());
			this->FrontButton = (gcnew System::Windows::Forms::Button());
			this->LowButton = (gcnew System::Windows::Forms::Button());
			this->MedButton = (gcnew System::Windows::Forms::Button());
			this->HighButton = (gcnew System::Windows::Forms::Button());
			this->AutoButton = (gcnew System::Windows::Forms::Button());
			this->RearButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->CruiseOff = (gcnew System::Windows::Forms::Button());
			this->CruiseON = (gcnew System::Windows::Forms::Button());
			this->VolUP = (gcnew System::Windows::Forms::Button());
			this->VolLBL = (gcnew System::Windows::Forms::Label());
			this->VolDWN = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->manualtemplabel = (gcnew System::Windows::Forms::Label());
			this->temptextbox = (gcnew System::Windows::Forms::TextBox());
			this->CarTempDisplay = (gcnew System::Windows::Forms::Label());
			this->CarTempLabel = (gcnew System::Windows::Forms::Label());
			this->EngineTimeLabel = (gcnew System::Windows::Forms::Label());
			this->EngineTimeDisplay = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->BackCamOff = (gcnew System::Windows::Forms::Button());
			this->BackCamON = (gcnew System::Windows::Forms::Button());
			this->BackUpCameraLabel = (gcnew System::Windows::Forms::Label());
			this->BackUpCameraDisplay = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CruiseControlLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SeatWarmerPositionLabel = (gcnew System::Windows::Forms::Label());
			this->SeatWarmerPositonDisplay = (gcnew System::Windows::Forms::Label());
			this->SeatWarmSettingLabel = (gcnew System::Windows::Forms::Label());
			this->SeatWarmerSettingDisplay = (gcnew System::Windows::Forms::Label());
			this->SeatWarmerTempLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SeatWarmerTempDisplay = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->EngineONButton = (gcnew System::Windows::Forms::Button());
			this->EngineOFFButton = (gcnew System::Windows::Forms::Button());
			this->AlertLabel = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->DurTimeLabel = (gcnew System::Windows::Forms::Label());
			this->DurTimeDisplay = (gcnew System::Windows::Forms::Label());
			this->AvgTimeLabel = (gcnew System::Windows::Forms::Label());
			this->AvgTimeDisplay = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(597, 540);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Timer";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// ManualButton
			// 
			this->ManualButton->Location = System::Drawing::Point(109, 33);
			this->ManualButton->Name = L"ManualButton";
			this->ManualButton->Size = System::Drawing::Size(75, 23);
			this->ManualButton->TabIndex = 14;
			this->ManualButton->Text = L"Manual";
			this->ManualButton->UseVisualStyleBackColor = true;
			this->ManualButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// FrontButton
			// 
			this->FrontButton->Location = System::Drawing::Point(48, 48);
			this->FrontButton->Name = L"FrontButton";
			this->FrontButton->Size = System::Drawing::Size(75, 23);
			this->FrontButton->TabIndex = 15;
			this->FrontButton->Text = L"Front";
			this->FrontButton->UseVisualStyleBackColor = true;
			this->FrontButton->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// LowButton
			// 
			this->LowButton->Location = System::Drawing::Point(10, 144);
			this->LowButton->Name = L"LowButton";
			this->LowButton->Size = System::Drawing::Size(75, 23);
			this->LowButton->TabIndex = 16;
			this->LowButton->Text = L"Low";
			this->LowButton->UseVisualStyleBackColor = true;
			// 
			// MedButton
			// 
			this->MedButton->Location = System::Drawing::Point(106, 144);
			this->MedButton->Name = L"MedButton";
			this->MedButton->Size = System::Drawing::Size(75, 23);
			this->MedButton->TabIndex = 17;
			this->MedButton->Text = L"Medium";
			this->MedButton->UseVisualStyleBackColor = true;
			// 
			// HighButton
			// 
			this->HighButton->Location = System::Drawing::Point(207, 144);
			this->HighButton->Name = L"HighButton";
			this->HighButton->Size = System::Drawing::Size(75, 23);
			this->HighButton->TabIndex = 18;
			this->HighButton->Text = L"High";
			this->HighButton->UseVisualStyleBackColor = true;
			// 
			// AutoButton
			// 
			this->AutoButton->Location = System::Drawing::Point(28, 33);
			this->AutoButton->Name = L"AutoButton";
			this->AutoButton->Size = System::Drawing::Size(75, 23);
			this->AutoButton->TabIndex = 19;
			this->AutoButton->Text = L"Auto";
			this->AutoButton->UseVisualStyleBackColor = true;
			this->AutoButton->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// RearButton
			// 
			this->RearButton->Location = System::Drawing::Point(162, 48);
			this->RearButton->Name = L"RearButton";
			this->RearButton->Size = System::Drawing::Size(75, 23);
			this->RearButton->TabIndex = 20;
			this->RearButton->Text = L"Rear";
			this->RearButton->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->RearButton);
			this->groupBox2->Controls->Add(this->FrontButton);
			this->groupBox2->Controls->Add(this->HighButton);
			this->groupBox2->Controls->Add(this->LowButton);
			this->groupBox2->Controls->Add(this->MedButton);
			this->groupBox2->Location = System::Drawing::Point(542, 275);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(288, 186);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Seat Warmer";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->CruiseOff);
			this->groupBox3->Controls->Add(this->CruiseON);
			this->groupBox3->Location = System::Drawing::Point(222, 34);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(240, 176);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cruise Control";
			// 
			// CruiseOff
			// 
			this->CruiseOff->Location = System::Drawing::Point(147, 71);
			this->CruiseOff->Name = L"CruiseOff";
			this->CruiseOff->Size = System::Drawing::Size(75, 23);
			this->CruiseOff->TabIndex = 1;
			this->CruiseOff->Text = L"OFF";
			this->CruiseOff->UseVisualStyleBackColor = true;
			// 
			// CruiseON
			// 
			this->CruiseON->Location = System::Drawing::Point(23, 71);
			this->CruiseON->Name = L"CruiseON";
			this->CruiseON->Size = System::Drawing::Size(75, 23);
			this->CruiseON->TabIndex = 0;
			this->CruiseON->Text = L"ON";
			this->CruiseON->UseVisualStyleBackColor = true;
			// 
			// VolUP
			// 
			this->VolUP->Location = System::Drawing::Point(48, 38);
			this->VolUP->Name = L"VolUP";
			this->VolUP->Size = System::Drawing::Size(75, 23);
			this->VolUP->TabIndex = 9;
			this->VolUP->Text = L"VOL +";
			this->VolUP->UseVisualStyleBackColor = true;
			this->VolUP->Click += gcnew System::EventHandler(this, &Form1::VolUP_Click);
			// 
			// VolLBL
			// 
			this->VolLBL->AutoSize = true;
			this->VolLBL->Location = System::Drawing::Point(22, 308);
			this->VolLBL->Name = L"VolLBL";
			this->VolLBL->Size = System::Drawing::Size(13, 13);
			this->VolLBL->TabIndex = 12;
			this->VolLBL->Text = L"0";
			// 
			// VolDWN
			// 
			this->VolDWN->Location = System::Drawing::Point(48, 107);
			this->VolDWN->Name = L"VolDWN";
			this->VolDWN->Size = System::Drawing::Size(75, 23);
			this->VolDWN->TabIndex = 10;
			this->VolDWN->Text = L"VOL -";
			this->VolDWN->UseVisualStyleBackColor = true;
			this->VolDWN->Click += gcnew System::EventHandler(this, &Form1::VolDWN_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->VolDWN);
			this->groupBox1->Controls->Add(this->VolUP);
			this->groupBox1->Location = System::Drawing::Point(600, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(168, 174);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Test Volume Control";
			// 
			// groupBox6
			// 
			this->groupBox6->AutoSize = true;
			this->groupBox6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->groupBox6->Controls->Add(this->manualtemplabel);
			this->groupBox6->Controls->Add(this->temptextbox);
			this->groupBox6->Controls->Add(this->AutoButton);
			this->groupBox6->Controls->Add(this->ManualButton);
			this->groupBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->groupBox6->Location = System::Drawing::Point(893, 275);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(190, 157);
			this->groupBox6->TabIndex = 26;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Car Temperature";
			this->groupBox6->Enter += gcnew System::EventHandler(this, &Form1::groupBox6_Enter);
			// 
			// manualtemplabel
			// 
			this->manualtemplabel->AutoSize = true;
			this->manualtemplabel->Location = System::Drawing::Point(28, 128);
			this->manualtemplabel->Name = L"manualtemplabel";
			this->manualtemplabel->Size = System::Drawing::Size(35, 13);
			this->manualtemplabel->TabIndex = 21;
			this->manualtemplabel->Text = L"NULL";
			// 
			// temptextbox
			// 
			this->temptextbox->Location = System::Drawing::Point(28, 85);
			this->temptextbox->MaxLength = 5;
			this->temptextbox->Name = L"temptextbox";
			this->temptextbox->Size = System::Drawing::Size(100, 20);
			this->temptextbox->TabIndex = 20;
			this->temptextbox->TextChanged += gcnew System::EventHandler(this, &Form1::temptextbox_TextChanged);
			this->temptextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::temptextbox_KeyDown);
			// 
			// CarTempDisplay
			// 
			this->CarTempDisplay->AutoSize = true;
			this->CarTempDisplay->Location = System::Drawing::Point(22, 219);
			this->CarTempDisplay->Name = L"CarTempDisplay";
			this->CarTempDisplay->Size = System::Drawing::Size(13, 13);
			this->CarTempDisplay->TabIndex = 27;
			this->CarTempDisplay->Text = L"0";
			this->CarTempDisplay->TextChanged += gcnew System::EventHandler(this, &Form1::temptextbox_TextChanged);
			// 
			// CarTempLabel
			// 
			this->CarTempLabel->AutoSize = true;
			this->CarTempLabel->Location = System::Drawing::Point(22, 197);
			this->CarTempLabel->Name = L"CarTempLabel";
			this->CarTempLabel->Size = System::Drawing::Size(114, 13);
			this->CarTempLabel->TabIndex = 29;
			this->CarTempLabel->Text = L"CAR TEMPERATURE";
			// 
			// EngineTimeLabel
			// 
			this->EngineTimeLabel->AutoSize = true;
			this->EngineTimeLabel->Location = System::Drawing::Point(22, 616);
			this->EngineTimeLabel->Name = L"EngineTimeLabel";
			this->EngineTimeLabel->Size = System::Drawing::Size(77, 13);
			this->EngineTimeLabel->TabIndex = 30;
			this->EngineTimeLabel->Text = L"ENGINE TIME";
			// 
			// EngineTimeDisplay
			// 
			this->EngineTimeDisplay->AutoSize = true;
			this->EngineTimeDisplay->Location = System::Drawing::Point(22, 640);
			this->EngineTimeDisplay->Name = L"EngineTimeDisplay";
			this->EngineTimeDisplay->Size = System::Drawing::Size(13, 13);
			this->EngineTimeDisplay->TabIndex = 31;
			this->EngineTimeDisplay->Text = L"0";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->BackCamOff);
			this->groupBox7->Controls->Add(this->BackCamON);
			this->groupBox7->Location = System::Drawing::Point(222, 275);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(240, 186);
			this->groupBox7->TabIndex = 32;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Back Up Camera";
			// 
			// BackCamOff
			// 
			this->BackCamOff->Location = System::Drawing::Point(147, 85);
			this->BackCamOff->Name = L"BackCamOff";
			this->BackCamOff->Size = System::Drawing::Size(75, 23);
			this->BackCamOff->TabIndex = 1;
			this->BackCamOff->Text = L"OFF";
			this->BackCamOff->UseVisualStyleBackColor = true;
			// 
			// BackCamON
			// 
			this->BackCamON->Location = System::Drawing::Point(23, 83);
			this->BackCamON->Name = L"BackCamON";
			this->BackCamON->Size = System::Drawing::Size(75, 23);
			this->BackCamON->TabIndex = 0;
			this->BackCamON->Text = L"ON";
			this->BackCamON->UseVisualStyleBackColor = true;
			// 
			// BackUpCameraLabel
			// 
			this->BackUpCameraLabel->AutoSize = true;
			this->BackUpCameraLabel->Location = System::Drawing::Point(22, 119);
			this->BackUpCameraLabel->Name = L"BackUpCameraLabel";
			this->BackUpCameraLabel->Size = System::Drawing::Size(98, 13);
			this->BackUpCameraLabel->TabIndex = 33;
			this->BackUpCameraLabel->Text = L"BACKUP CAMERA";
			// 
			// BackUpCameraDisplay
			// 
			this->BackUpCameraDisplay->AutoSize = true;
			this->BackUpCameraDisplay->Location = System::Drawing::Point(24, 143);
			this->BackUpCameraDisplay->Name = L"BackUpCameraDisplay";
			this->BackUpCameraDisplay->Size = System::Drawing::Size(35, 13);
			this->BackUpCameraDisplay->TabIndex = 34;
			this->BackUpCameraDisplay->Text = L"NULL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 563);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"0";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 540);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ENGINE TEMPERATURE CELSIUS";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// CruiseControlLabel
			// 
			this->CruiseControlLabel->AutoSize = true;
			this->CruiseControlLabel->Location = System::Drawing::Point(22, 36);
			this->CruiseControlLabel->Name = L"CruiseControlLabel";
			this->CruiseControlLabel->Size = System::Drawing::Size(105, 13);
			this->CruiseControlLabel->TabIndex = 36;
			this->CruiseControlLabel->Text = L"CRUISE CONTROL ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 37;
			this->label4->Text = L"NULL";
			// 
			// SeatWarmerPositionLabel
			// 
			this->SeatWarmerPositionLabel->AutoSize = true;
			this->SeatWarmerPositionLabel->Location = System::Drawing::Point(47, 378);
			this->SeatWarmerPositionLabel->Name = L"SeatWarmerPositionLabel";
			this->SeatWarmerPositionLabel->Size = System::Drawing::Size(44, 13);
			this->SeatWarmerPositionLabel->TabIndex = 38;
			this->SeatWarmerPositionLabel->Text = L"Position";
			// 
			// SeatWarmerPositonDisplay
			// 
			this->SeatWarmerPositonDisplay->AutoSize = true;
			this->SeatWarmerPositonDisplay->Location = System::Drawing::Point(74, 406);
			this->SeatWarmerPositonDisplay->Name = L"SeatWarmerPositonDisplay";
			this->SeatWarmerPositonDisplay->Size = System::Drawing::Size(35, 13);
			this->SeatWarmerPositonDisplay->TabIndex = 39;
			this->SeatWarmerPositonDisplay->Text = L"NULL";
			// 
			// SeatWarmSettingLabel
			// 
			this->SeatWarmSettingLabel->AutoSize = true;
			this->SeatWarmSettingLabel->Location = System::Drawing::Point(47, 423);
			this->SeatWarmSettingLabel->Name = L"SeatWarmSettingLabel";
			this->SeatWarmSettingLabel->Size = System::Drawing::Size(34, 13);
			this->SeatWarmSettingLabel->TabIndex = 40;
			this->SeatWarmSettingLabel->Text = L"Mode";
			// 
			// SeatWarmerSettingDisplay
			// 
			this->SeatWarmerSettingDisplay->AutoSize = true;
			this->SeatWarmerSettingDisplay->Location = System::Drawing::Point(74, 444);
			this->SeatWarmerSettingDisplay->Name = L"SeatWarmerSettingDisplay";
			this->SeatWarmerSettingDisplay->Size = System::Drawing::Size(35, 13);
			this->SeatWarmerSettingDisplay->TabIndex = 41;
			this->SeatWarmerSettingDisplay->Text = L"NULL";
			// 
			// SeatWarmerTempLabel
			// 
			this->SeatWarmerTempLabel->AutoSize = true;
			this->SeatWarmerTempLabel->Location = System::Drawing::Point(46, 468);
			this->SeatWarmerTempLabel->Name = L"SeatWarmerTempLabel";
			this->SeatWarmerTempLabel->Size = System::Drawing::Size(67, 13);
			this->SeatWarmerTempLabel->TabIndex = 42;
			this->SeatWarmerTempLabel->Text = L"Temperature";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 356);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 44;
			this->label5->Text = L"SEAT WARMER";
			// 
			// SeatWarmerTempDisplay
			// 
			this->SeatWarmerTempDisplay->AutoSize = true;
			this->SeatWarmerTempDisplay->Location = System::Drawing::Point(74, 491);
			this->SeatWarmerTempDisplay->Name = L"SeatWarmerTempDisplay";
			this->SeatWarmerTempDisplay->Size = System::Drawing::Size(35, 13);
			this->SeatWarmerTempDisplay->TabIndex = 43;
			this->SeatWarmerTempDisplay->Text = L"NULL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 45;
			this->label6->Text = L"VOLUME";
			// 
			// EngineONButton
			// 
			this->EngineONButton->Location = System::Drawing::Point(4, 38);
			this->EngineONButton->Name = L"EngineONButton";
			this->EngineONButton->Size = System::Drawing::Size(75, 23);
			this->EngineONButton->TabIndex = 46;
			this->EngineONButton->Text = L"Engine ON";
			this->EngineONButton->UseVisualStyleBackColor = true;
			this->EngineONButton->Click += gcnew System::EventHandler(this, &Form1::EngineONButton_Click);
			// 
			// EngineOFFButton
			// 
			this->EngineOFFButton->Location = System::Drawing::Point(119, 38);
			this->EngineOFFButton->Name = L"EngineOFFButton";
			this->EngineOFFButton->Size = System::Drawing::Size(75, 23);
			this->EngineOFFButton->TabIndex = 47;
			this->EngineOFFButton->Text = L"Engine OFF";
			this->EngineOFFButton->UseVisualStyleBackColor = true;
			this->EngineOFFButton->Click += gcnew System::EventHandler(this, &Form1::EngineOFFButton_Click);
			// 
			// AlertLabel
			// 
			this->AlertLabel->AutoSize = true;
			this->AlertLabel->Location = System::Drawing::Point(43, 96);
			this->AlertLabel->Name = L"AlertLabel";
			this->AlertLabel->Size = System::Drawing::Size(28, 13);
			this->AlertLabel->TabIndex = 48;
			this->AlertLabel->Text = L"Alert";
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick_1);
			// 
			// DurTimeLabel
			// 
			this->DurTimeLabel->AutoSize = true;
			this->DurTimeLabel->Location = System::Drawing::Point(24, 675);
			this->DurTimeLabel->Name = L"DurTimeLabel";
			this->DurTimeLabel->Size = System::Drawing::Size(47, 13);
			this->DurTimeLabel->TabIndex = 49;
			this->DurTimeLabel->Text = L"Duration";
			// 
			// DurTimeDisplay
			// 
			this->DurTimeDisplay->AutoSize = true;
			this->DurTimeDisplay->Location = System::Drawing::Point(24, 698);
			this->DurTimeDisplay->Name = L"DurTimeDisplay";
			this->DurTimeDisplay->Size = System::Drawing::Size(13, 13);
			this->DurTimeDisplay->TabIndex = 50;
			this->DurTimeDisplay->Text = L"0";
			// 
			// AvgTimeLabel
			// 
			this->AvgTimeLabel->AutoSize = true;
			this->AvgTimeLabel->Location = System::Drawing::Point(130, 675);
			this->AvgTimeLabel->Name = L"AvgTimeLabel";
			this->AvgTimeLabel->Size = System::Drawing::Size(73, 13);
			this->AvgTimeLabel->TabIndex = 51;
			this->AvgTimeLabel->Text = L"Average Time";
			// 
			// AvgTimeDisplay
			// 
			this->AvgTimeDisplay->AutoSize = true;
			this->AvgTimeDisplay->Location = System::Drawing::Point(130, 698);
			this->AvgTimeDisplay->Name = L"AvgTimeDisplay";
			this->AvgTimeDisplay->Size = System::Drawing::Size(13, 13);
			this->AvgTimeDisplay->TabIndex = 52;
			this->AvgTimeDisplay->Text = L"0";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->EngineOFFButton);
			this->groupBox4->Controls->Add(this->EngineONButton);
			this->groupBox4->Controls->Add(this->AlertLabel);
			this->groupBox4->Location = System::Drawing::Point(893, 36);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 174);
			this->groupBox4->TabIndex = 53;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1190, 734);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->AvgTimeDisplay);
			this->Controls->Add(this->AvgTimeLabel);
			this->Controls->Add(this->DurTimeDisplay);
			this->Controls->Add(this->DurTimeLabel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->VolLBL);
			this->Controls->Add(this->SeatWarmerTempDisplay);
			this->Controls->Add(this->SeatWarmerTempLabel);
			this->Controls->Add(this->SeatWarmerSettingDisplay);
			this->Controls->Add(this->SeatWarmSettingLabel);
			this->Controls->Add(this->SeatWarmerPositonDisplay);
			this->Controls->Add(this->SeatWarmerPositionLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->CruiseControlLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BackUpCameraDisplay);
			this->Controls->Add(this->BackUpCameraLabel);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->EngineTimeDisplay);
			this->Controls->Add(this->EngineTimeLabel);
			this->Controls->Add(this->CarTempLabel);
			this->Controls->Add(this->CarTempDisplay);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load_1);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void displayCurrentVolume_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void volumeDownButton_Click(System::Object^ sender, System::EventArgs^ e) {

		
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		string l;
		string engtmp;
		int num = 0;
		int temp = 0;
		MarshalString(label2->Text, engtmp);
		MarshalString(label3->Text, l);
		num = stoi(l);

		num++;
		l = to_string(num);
		label3->Text = gcnew String(l.c_str());
		if (num % 10 == 0) {
			temp = stoi(engtmp);
			temp++;
			engtmp = to_string(temp);
			label2->Text = gcnew String(engtmp.c_str());
		}
		//open file write to file
		//int num = label2->Text
		//label2->Text = gcnew String(num.ToString());
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void VolUP_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = 0;
		string l;
		MarshalString(VolLBL->Text, l);
		num = stoi(l);
		num++;
		l = to_string(num);
		VolLBL->Text = gcnew String(l.c_str());
	}
	private: System::Void VolDWN_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = 0;
		string l;
		MarshalString(VolLBL->Text, l);
		num = stoi(l);
		if (num > 0) {
			num--;
			l = to_string(num);
			VolLBL->Text = gcnew String(l.c_str());
		}
		
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		temptextbox->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void groupBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		temptextbox->Show();

	}
	private: System::Void temptextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void temptextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		string l;
		if (e->KeyCode == Keys::Enter) {

			//manualtemplabel->Text = gcnew String("100");
			//temptextbox->Hide();
			manualtemplabel->Show();
			MarshalString(temptextbox->Text, l);
			size_t found = l.find_first_not_of("1234567890");
			if (found == string::npos) {
				//	manualtemplabel->Text = temptextbox->Text;
				CarTempDisplay->Text = temptextbox->Text;
				temptextbox->Text = "";
				//temptextbox->Hide();
				manualtemplabel->Hide();

			}
			else {
				manualtemplabel->Text = gcnew String("ONLY NUMBERS!!");
			}
		}
	}
	private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}



	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EngineONButton_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
		timer2->Enabled = true;
		string engtime;
		MarshalString(EngineTimeDisplay->Text, engtime);
		starttime = stoi(engtime);
	}
	private: System::Void EngineOFFButton_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		timer2->Enabled = false;
		string engtime;
		string durtime;
		int durtimenum = 0;
		MarshalString(EngineTimeDisplay->Text, engtime);
		MarshalString(DurTimeDisplay->Text, durtime);
		stoptime = stoi(engtime);
		durtimenum = stoptime - starttime;
		durtime = to_string(durtimenum);
		DurTimeDisplay->Text = gcnew String(durtime.c_str());
		//avgtimenum = stoi(avgtime); 

	}
	private: System::Void timer2_Tick_1(System::Object^ sender, System::EventArgs^ e) {
		string engtime;
		int num = 0;
		MarshalString(EngineTimeDisplay->Text, engtime);
		num = stoi(engtime);
		num++;
		engtime = to_string(num);
		EngineTimeDisplay->Text = gcnew String(engtime.c_str());
	}

	private: System::Void Form1_Load_1(System::Object^ sender, System::EventArgs^ e) {
		fstream file;
		fstream engtimefile;
		string line;
		string engtimestring;
		file.open("../Engine_Temp.txt");
		engtimefile.open("../Engine_Time.txt"); 
		string filepath;
		string rootpath;
		//MarshalString(Directory::GetCurrentDirectory(),filepath);
		//MarshalString(Directory::GetCurrentDirectory(),filepath);
		if (file.is_open()) {
			while (!file.eof()) {
				if (getline(file, line)) {
					break;
				}
			}
		}
		if (engtimefile.is_open()) {
			while (!engtimefile.eof()) {
				if (getline(engtimefile, engtimestring)) {
					break;
				}
			}
		}
		
		EngineTimeDisplay->Text = gcnew String(engtimestring.c_str());
		label2->Text = gcnew String(line.c_str());
		label3->Text = gcnew String("0");
		VolLBL->Text = gcnew String("0");
		CarTempDisplay->Text = gcnew String("0");
		//label3->Hide();
		temptextbox->Hide();
		manualtemplabel->Hide();
		//EngineTimeDisplay->Show();
		label3->Hide();
		
	}
	};

}
