#pragma once
#include "LogIn.h"
#include <iostream>
#include <string>
#include "help.h"
#include "Feedback.h"
#include <fstream>

using namespace std;


namespace RailwayProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::IO;

	/// <summary>
	/// Summary for RailwayReservationSystem
	/// </summary>
	public ref class RailwayReservationSystem : public System::Windows::Forms::Form
	{
	public:
		RailwayReservationSystem(void)
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
		~RailwayReservationSystem()
		{
			if (components)
			{
				delete components;
			}
		}
		int i = 0;
		
		
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reservationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cancellationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logInToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  feedbackToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;














	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label18;








	private: System::ComponentModel::IContainer^  components;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reservationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cancellationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logInToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->feedbackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->menuToolStripMenuItem,
					this->adminToolStripMenuItem, this->helpToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1147, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reservationsToolStripMenuItem,
					this->cancellationsToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// reservationsToolStripMenuItem
			// 
			this->reservationsToolStripMenuItem->Name = L"reservationsToolStripMenuItem";
			this->reservationsToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->reservationsToolStripMenuItem->Text = L"Reservations";
			this->reservationsToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::reservationsToolStripMenuItem_Click);
			// 
			// cancellationsToolStripMenuItem
			// 
			this->cancellationsToolStripMenuItem->Name = L"cancellationsToolStripMenuItem";
			this->cancellationsToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->cancellationsToolStripMenuItem->Text = L"Cancellations";
			this->cancellationsToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::cancellationsToolStripMenuItem_Click);
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->logInToolStripMenuItem });
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->adminToolStripMenuItem->Text = L"Admin";
			// 
			// logInToolStripMenuItem
			// 
			this->logInToolStripMenuItem->Name = L"logInToolStripMenuItem";
			this->logInToolStripMenuItem->Size = System::Drawing::Size(125, 26);
			this->logInToolStripMenuItem->Text = L"Log In";
			this->logInToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::logInToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->feedbackToolStripMenuItem,
					this->toolStripSeparator1, this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// feedbackToolStripMenuItem
			// 
			this->feedbackToolStripMenuItem->Name = L"feedbackToolStripMenuItem";
			this->feedbackToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->feedbackToolStripMenuItem->Text = L"Feedback";
			this->feedbackToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::feedbackToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(178, 6);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::aboutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(45, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::exitToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->groupBox1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(35, 132);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(378, 236);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Reservation Menu";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::IndianRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(13, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(350, 92);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancellations";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(13, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(350, 92);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Reservations";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(175, 33);
			this->label1->Margin = System::Windows::Forms::Padding(5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(831, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome to Railway Reservation System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Goldenrod;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(64, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(252, 83);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Admin LogIn";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(64, 523);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 85);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Help";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(180, 523);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(206, 85);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(35, 374);
			this->groupBox2->Margin = System::Windows::Forms::Padding(10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(378, 119);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoEllipsis = true;
			this->label2->BackColor = System::Drawing::Color::CadetBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(548, 78);
			this->label2->TabIndex = 7;
			this->label2->Text = L"DateTime";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::label2_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &RailwayReservationSystem::timer1_Tick);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(456, 132);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(571, 109);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Today";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Controls->Add(this->groupBox6);
			this->panel2->Location = System::Drawing::Point(437, 264);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(735, 456);
			this->panel2->TabIndex = 25;
			this->panel2->Visible = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox6->BackColor = System::Drawing::Color::Transparent;
			this->groupBox6->Controls->Add(this->button8);
			this->groupBox6->Controls->Add(this->button9);
			this->groupBox6->Controls->Add(this->groupBox7);
			this->groupBox6->Controls->Add(this->dateTimePicker2);
			this->groupBox6->Controls->Add(this->textBox4);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(3, 3);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(704, 367);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Cancellations";
			this->groupBox6->Enter += gcnew System::EventHandler(this, &RailwayReservationSystem::groupBox6_Enter);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(175, 175);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(169, 73);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Cancel Ticket";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button9->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(34, 175);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(135, 73);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Clear";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button9_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox7->Controls->Add(this->label12);
			this->groupBox7->Location = System::Drawing::Point(364, 17);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(333, 338);
			this->groupBox7->TabIndex = 27;
			this->groupBox7->TabStop = false;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(7, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(310, 303);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Enter Details";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(85, 111);
			this->dateTimePicker2->MaxDate = System::DateTime(2020, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker2->MinDate = System::DateTime(2018, 1, 21, 0, 0, 0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(120, 28);
			this->dateTimePicker2->TabIndex = 16;
			this->dateTimePicker2->Value = System::DateTime(2018, 1, 22, 0, 0, 0, 0);
			this->dateTimePicker2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::dateTimePicker2_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(85, 66);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(257, 25);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::textBox4_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(31, 115);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 18);
			this->label16->TabIndex = 11;
			this->label16->Text = L"Date";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(31, 67);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 18);
			this->label18->TabIndex = 9;
			this->label18->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Age";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(168, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(198, 18);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Concession Category";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(31, 185);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 18);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Destination";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 25);
			this->textBox1->TabIndex = 14;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(85, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 28);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::textBox2_KeyPress);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(222, 76);
			this->dateTimePicker1->MaxDate = System::DateTime(2020, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2018, 1, 21, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(120, 28);
			this->dateTimePicker1->TabIndex = 16;
			this->dateTimePicker1->Value = System::DateTime(2018, 1, 22, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::dateTimePicker1_ValueChanged);
			this->dateTimePicker1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::dateTimePicker1_KeyPress);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(75, 149);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(179, 22);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"General Citizen";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::radioButton1_CheckedChanged);
			this->radioButton1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::radioButton1_KeyPress);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(276, 149);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 22);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"VIP";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::radioButton2_CheckedChanged);
			this->radioButton2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::radioButton2_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(1) { L"A1" });
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"A1", L"A2", L"A3", L"A4", L"A5", L"B1", L"B2",
					L"B3", L"B4"
			});
			this->comboBox1->Location = System::Drawing::Point(45, 216);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(76, 29);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::comboBox1_SelectedIndexChanged);
			this->comboBox1->Enter += gcnew System::EventHandler(this, &RailwayReservationSystem::comboBox1_Enter);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::comboBox1_KeyPress);
			this->comboBox1->Leave += gcnew System::EventHandler(this, &RailwayReservationSystem::comboBox1_Leave);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(219, 185);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 18);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Train";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 21;
			this->listBox1->Location = System::Drawing::Point(160, 216);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(187, 151);
			this->listBox1->TabIndex = 21;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::listBox1_SelectedIndexChanged);
			this->listBox1->Enter += gcnew System::EventHandler(this, &RailwayReservationSystem::listBox1_Enter);
			this->listBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::listBox1_KeyPress);
			this->listBox1->Leave += gcnew System::EventHandler(this, &RailwayReservationSystem::listBox1_Leave);
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Location = System::Drawing::Point(364, 17);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(324, 254);
			this->groupBox5->TabIndex = 27;
			this->groupBox5->TabStop = false;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(19, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 20);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Enter Details";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button7->Location = System::Drawing::Point(371, 282);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(135, 73);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button6->Location = System::Drawing::Point(512, 282);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(169, 73);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Reserve";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &RailwayReservationSystem::button6_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(38, 257);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 18);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Class";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1st", L"2nd", L"3rd" });
			this->comboBox2->Location = System::Drawing::Point(45, 291);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(76, 29);
			this->comboBox2->TabIndex = 29;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &RailwayReservationSystem::comboBox2_SelectedIndexChanged);
			this->comboBox2->Enter += gcnew System::EventHandler(this, &RailwayReservationSystem::comboBox2_Enter);
			this->comboBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailwayReservationSystem::comboBox2_KeyPress);
			this->comboBox2->Leave += gcnew System::EventHandler(this, &RailwayReservationSystem::comboBox2_Leave);
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Controls->Add(this->listBox1);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Controls->Add(this->dateTimePicker1);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(3, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(694, 367);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Reservations";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &RailwayReservationSystem::groupBox4_Enter);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Location = System::Drawing::Point(437, 264);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(725, 456);
			this->panel1->TabIndex = 24;
			// 
			// RailwayReservationSystem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1147, 643);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RailwayReservationSystem";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"RailwayReservationSystem";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &RailwayReservationSystem::RailwayReservationSystem_FormClosing);
			this->Load += gcnew System::EventHandler(this, &RailwayReservationSystem::RailwayReservationSystem_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("All unsaved data may be lost. Are you sure want to Exit?", "Caution!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = false;
	panel1->Visible = true;
	textBox1->Focus();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("All unsaved data may be lost. Are you sure want to Exit?", "Caution!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void RailwayReservationSystem_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	LogIn^ b1 = gcnew LogIn();
	b1->ShowDialog();
}
private: System::Void RailwayReservationSystem_Load(System::Object^  sender, System::EventArgs^  e) {
	timer1->Start();
	textBox1->Focus();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime dt = DateTime::Now;
	this->label2->Text = "Date : " + dt.ToLongDateString() + "\nTime : " + dt.ToLongTimeString();
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "A5") {
		listBox1->Items->Clear();
		listBox1->Items->Add("Intercity - AI1");
		listBox1->Items->Add("Slow - AS1");
		listBox1->Items->Add("Slow - AS2");
	}
	else if (comboBox1->Text == "B4") {
		listBox1->Items->Clear();
		listBox1->Items->Add("Intercity - BI1");
		listBox1->Items->Add("Intercity - BI2");
		listBox1->Items->Add("Slow - BS1");
		listBox1->Items->Add("Slow - BS2");
		listBox1->Items->Add("Slow - BS3");
		listBox1->Items->Add("Slow - BS4");
	}
	else if (comboBox1->Text == "A1" || comboBox1->Text == "A2" || comboBox1->Text == "A3" || comboBox1->Text == "A4") {
		listBox1->Items->Clear();
		listBox1->Items->Add("Slow - AS1");
		listBox1->Items->Add("Slow - AS2");
	}
	else if (comboBox1->Text == "B1" || comboBox1->Text == "B2" || comboBox1->Text == "B3") {
		listBox1->Items->Clear();
		listBox1->Items->Add("Slow - BS1");
		listBox1->Items->Add("Slow - BS2");
		listBox1->Items->Add("Slow - BS3");
		listBox1->Items->Add("Slow - BS4");
	}
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		textBox2->Focus();
	}
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		dateTimePicker1->Focus();
	}

	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8) {
		e->Handled = true;
	}
}
private: System::Void dateTimePicker1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		radioButton1->Focus();
	}
}
private: System::Void radioButton1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		comboBox1->Focus();
	}
}
private: System::Void radioButton2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		comboBox1->Focus();
	}
}
private: System::Void comboBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		listBox1->Focus();
		if (comboBox1->SelectedIndex != 4 || comboBox1->SelectedIndex != 8) {
			comboBox2->SelectedIndex = 2;
			comboBox2->Enabled = false;
		}
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "" && textBox2->Text != "") {
		StreamWriter^ sw = File::AppendText("reservations.txt");
		sw->WriteLine(textBox1->Text);
		sw->WriteLine(textBox2->Text);
		sw->WriteLine(dateTimePicker1->Value);
		if (radioButton1->Checked) {
			sw->WriteLine("General Citizen");
		}
		if (radioButton2->Checked) {
			sw->WriteLine("VIP");
		}
		sw->WriteLine(comboBox1->SelectedItem);
		sw->WriteLine(listBox1->SelectedItem);
		sw->WriteLine(comboBox2->SelectedItem);
		sw->WriteLine("");
		sw->Close();
		if (radioButton1->Checked) {
			label9->Text = "Ticket Reserved Successfully!\n=====================================" + "\n\n" + textBox1->Text + "\n" + textBox2->Text + " Years Old\n" + dateTimePicker1->Value + "\n" + "Elder Citizen" + "\n" + comboBox1->Text + "\n" + listBox1->Text + "\n" + comboBox2->Text + " class\n\n";
		}
		else if (radioButton2->Checked) {
			label9->Text = textBox1->Text + "\n" + textBox2->Text + " Years Old\n" + dateTimePicker1->Value + "\n" + "VIP" + "\n" + comboBox1->Text + "\n" + listBox1->Text + "\n" + comboBox2->Text + " class";
		}
		textBox1->Text = "";
		textBox2->Text = "";
	}
}
private: System::Void comboBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->SelectedIndex = i;
}
private: System::Void comboBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Focus();
	int i;
	i = comboBox1->SelectedIndex;
}
private: System::Void listBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	listBox1->SelectedIndex = 0;
}
private: System::Void listBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
	comboBox2->Focus();
}
private: System::Void listBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		comboBox2->Focus();
		if (comboBox1->SelectedIndex != 4 || comboBox1->SelectedIndex != 8) {
			button6->Focus();
		}
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	comboBox2->SelectedIndex = 0;
}
private: System::Void comboBox2_Leave(System::Object^  sender, System::EventArgs^  e) {
	button6->Focus();
}
private: System::Void comboBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		button6->Focus();
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	textBox4->Focus();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamWriter^ b6 = File::AppendText("cancellations.txt");
	if (textBox4->Text != "") {
		b6->WriteLine(textBox4->Text);
		b6->WriteLine(dateTimePicker2->Value);
		b6->WriteLine("");
		label12->Text = "========================================================================\nYour Reservation Cancelled Successfully!\n\n" + textBox4->Text + "\n" + dateTimePicker2->Value;
		textBox4->Text = "";
		listBox1->Text = "";
	}
	b6->Close();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = "";
	label12->Text = "Enter Details";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	textBox2->Text = "";
	label9->Text = "Enter Details";

}
private: System::Void logInToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	LogIn^ b1 = gcnew LogIn();
	b1->ShowDialog();
}
private: System::Void reservationsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = true;
	panel2->Visible = false;
}
private: System::Void cancellationsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = false;
	panel2->Visible = true;
}
private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		dateTimePicker2->Focus();
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	help^ b5 = gcnew help();
	b5->ShowDialog();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	help^ b5 = gcnew help();
	b5->ShowDialog();
}
private: System::Void dateTimePicker2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == 13) {
		button8->Focus();
	}
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void feedbackToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Feedback^ b8 = gcnew Feedback();
	b8->ShowDialog();
}
};
}
