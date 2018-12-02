#pragma once
#include <math.h>
#include <string>
#include "MyForm1.h"

namespace wp_calculator_4105056005 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  切換模式ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  讀檔計算機ToolStripMenuItem;


	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;



	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->切換模式ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->讀檔計算機ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(286, 910);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(149, 819);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 85);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(286, 819);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 85);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(422, 818);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 85);
			this->button4->TabIndex = 3;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(150, 728);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 85);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(286, 729);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 85);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button7->Location = System::Drawing::Point(421, 729);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 85);
			this->button7->TabIndex = 6;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button8->Location = System::Drawing::Point(150, 638);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 85);
			this->button8->TabIndex = 7;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button9->Location = System::Drawing::Point(286, 638);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(130, 85);
			this->button9->TabIndex = 8;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button10->Location = System::Drawing::Point(421, 638);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 85);
			this->button10->TabIndex = 9;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gainsboro;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button11->Location = System::Drawing::Point(558, 820);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(130, 85);
			this->button11->TabIndex = 10;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gainsboro;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button12->Location = System::Drawing::Point(558, 729);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(130, 85);
			this->button12->TabIndex = 11;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gainsboro;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button13->Location = System::Drawing::Point(558, 638);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(130, 85);
			this->button13->TabIndex = 12;
			this->button13->Text = L"×";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gainsboro;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button14->Location = System::Drawing::Point(558, 546);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(130, 85);
			this->button14->TabIndex = 13;
			this->button14->Text = L"÷";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gainsboro;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button15->Location = System::Drawing::Point(558, 909);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(130, 85);
			this->button15->TabIndex = 14;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gainsboro;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button16->Location = System::Drawing::Point(421, 909);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(130, 85);
			this->button16->TabIndex = 15;
			this->button16->Text = L".";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gainsboro;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button17->Location = System::Drawing::Point(12, 910);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(130, 85);
			this->button17->TabIndex = 16;
			this->button17->Text = L"(";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Gainsboro;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button18->Location = System::Drawing::Point(150, 910);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(130, 85);
			this->button18->TabIndex = 17;
			this->button18->Text = L")";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Gainsboro;
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button19->Location = System::Drawing::Point(12, 731);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(130, 85);
			this->button19->TabIndex = 18;
			this->button19->Text = L"n!";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gainsboro;
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button20->Location = System::Drawing::Point(13, 639);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(130, 85);
			this->button20->TabIndex = 19;
			this->button20->Text = L"π";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Gainsboro;
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button21->Location = System::Drawing::Point(12, 365);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(130, 85);
			this->button21->TabIndex = 20;
			this->button21->Text = L" x^2";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Gainsboro;
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button22->Location = System::Drawing::Point(150, 366);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(130, 85);
			this->button22->TabIndex = 21;
			this->button22->Text = L"x^y";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Gainsboro;
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button23->Location = System::Drawing::Point(286, 366);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(130, 85);
			this->button23->TabIndex = 22;
			this->button23->Text = L"sin";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Gainsboro;
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button24->Location = System::Drawing::Point(421, 366);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(130, 85);
			this->button24->TabIndex = 23;
			this->button24->Text = L"cos";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Gainsboro;
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button25->Location = System::Drawing::Point(557, 365);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(130, 85);
			this->button25->TabIndex = 24;
			this->button25->Text = L"tan";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Gainsboro;
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button26->Location = System::Drawing::Point(13, 457);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(130, 85);
			this->button26->TabIndex = 25;
			this->button26->Text = L"√";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Gainsboro;
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button27->Location = System::Drawing::Point(151, 456);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(130, 85);
			this->button27->TabIndex = 26;
			this->button27->Text = L"10^x";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Gainsboro;
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button28->Location = System::Drawing::Point(286, 456);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(130, 85);
			this->button28->TabIndex = 27;
			this->button28->Text = L"log";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Gainsboro;
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button29->Location = System::Drawing::Point(421, 456);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(130, 85);
			this->button29->TabIndex = 28;
			this->button29->Text = L"Exp";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Gainsboro;
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button30->Location = System::Drawing::Point(558, 456);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(130, 85);
			this->button30->TabIndex = 29;
			this->button30->Text = L"Mod";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Gainsboro;
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button31->Location = System::Drawing::Point(12, 820);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(130, 85);
			this->button31->TabIndex = 30;
			this->button31->Text = L"±";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Gainsboro;
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button32->Location = System::Drawing::Point(286, 547);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(130, 85);
			this->button32->TabIndex = 31;
			this->button32->Text = L"C";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Gainsboro;
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button33->Location = System::Drawing::Point(150, 547);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(130, 85);
			this->button33->TabIndex = 32;
			this->button33->Text = L"CE";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Gainsboro;
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button34->Location = System::Drawing::Point(422, 547);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(130, 85);
			this->button34->TabIndex = 33;
			this->button34->Text = L"←";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Gainsboro;
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button35->Location = System::Drawing::Point(13, 548);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(130, 85);
			this->button35->TabIndex = 34;
			this->button35->Text = L"↑";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(12, 217);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(675, 89);
			this->textBox1->TabIndex = 35;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(32, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 55);
			this->label1->TabIndex = 36;
			this->label1->Text = L"工程";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(674, 54);
			this->label2->TabIndex = 37;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->切換模式ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(701, 38);
			this->menuStrip1->TabIndex = 38;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 切換模式ToolStripMenuItem
			// 
			this->切換模式ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->讀檔計算機ToolStripMenuItem });
			this->切換模式ToolStripMenuItem->Name = L"切換模式ToolStripMenuItem";
			this->切換模式ToolStripMenuItem->Size = System::Drawing::Size(121, 34);
			this->切換模式ToolStripMenuItem->Text = L"切換模式";
			// 
			// 讀檔計算機ToolStripMenuItem
			// 
			this->讀檔計算機ToolStripMenuItem->Name = L"讀檔計算機ToolStripMenuItem";
			this->讀檔計算機ToolStripMenuItem->Size = System::Drawing::Size(230, 38);
			this->讀檔計算機ToolStripMenuItem->Text = L"讀檔計算機";
			this->讀檔計算機ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::讀檔計算機ToolStripMenuItem_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Gainsboro;
			this->button38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button38->Location = System::Drawing::Point(287, 366);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(130, 85);
			this->button38->TabIndex = 41;
			this->button38->Text = L" csc";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Visible = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Gainsboro;
			this->button39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button39->Location = System::Drawing::Point(423, 366);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(130, 85);
			this->button39->TabIndex = 42;
			this->button39->Text = L" sec";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Visible = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Gainsboro;
			this->button40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button40->Location = System::Drawing::Point(557, 366);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(130, 85);
			this->button40->TabIndex = 43;
			this->button40->Text = L" cot";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Visible = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Gainsboro;
			this->button41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button41->Location = System::Drawing::Point(14, 457);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(130, 85);
			this->button41->TabIndex = 44;
			this->button41->Text = L" 1/x";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Visible = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Gainsboro;
			this->button42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button42->Location = System::Drawing::Point(151, 457);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(130, 85);
			this->button42->TabIndex = 45;
			this->button42->Text = L" e^x";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Visible = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Gainsboro;
			this->button43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button43->Location = System::Drawing::Point(287, 457);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(130, 85);
			this->button43->TabIndex = 46;
			this->button43->Text = L" ln";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Visible = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(701, 1008);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"計算機";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//變數使用
		Boolean operation_press = false;
		Boolean check_error = false;
		Boolean equal = false;

#pragma endregion
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "1";
		operation_press = 0;
	}
	else
		textBox1->Text += "1";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "2";
		operation_press = 0;
	}
	else
		textBox1->Text += "2";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "3";
		operation_press = 0;
	}
	else
		textBox1->Text += "3";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "4";
		operation_press = 0;
	}
	else
		textBox1->Text += "4";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "5";
		operation_press = 0;
	}
	else
		textBox1->Text += "5";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "6";
		operation_press = 0;
	}
	else
		textBox1->Text += "6";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "7";
		operation_press = 0;
	}
	else
		textBox1->Text += "7";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "8";
		operation_press = 0;
	}
	else
		textBox1->Text += "8";
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "9";
		operation_press = 0;
	}
	else
		textBox1->Text += "9";
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1)
		textBox1->Text = "0";
	else
		textBox1->Text += "0";
}
//pi
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0" || operation_press == 1) {
		textBox1->Text = "3.141592";
		operation_press = 0;
	}
	else
		textBox1->Text += "3.141592";
}
//CE 消除目前數字
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	if(textBox1->Text != "")
		textBox1->Text = "0";
}
//C 消除所有算式
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "0";
	label2->Text = "";
}
//加法符號
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if(operation_press == 0 || equal == 1)
		label2->Text += textBox1->Text + "+";
	else if(operation_press == 1 && label2->Text != ""){
		if (label2->Text[label2->Text->Length - 1] == 'd')
			label2->Text = label2->Text->Remove(label2->Text->Length - 3);
		else if (label2->Text[label2->Text->Length - 1] != ')')
			label2->Text = label2->Text->Remove(label2->Text->Length - 1);
		label2->Text += "+";
	}
	operation_press = 1;
	equal = 0;
}
//減法符號
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation_press == 0 || equal == 1)
		label2->Text += textBox1->Text + "-";
	else if (operation_press == 1 && label2->Text != "") {
		if (label2->Text[label2->Text->Length - 1] == 'd')
			label2->Text = label2->Text->Remove(label2->Text->Length - 3);
		else if(label2->Text[label2->Text->Length - 1] != ')')
			label2->Text = label2->Text->Remove(label2->Text->Length - 1);
		label2->Text += "-";
	}
	operation_press = 1;
	equal = 0;
}
//乘法符號
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation_press == 0 || equal == 1)
		label2->Text += textBox1->Text + "*";
	else if (operation_press == 1 && label2->Text != "") {
		if (label2->Text[label2->Text->Length - 1] == 'd')
			label2->Text = label2->Text->Remove(label2->Text->Length - 3);
		else if (label2->Text[label2->Text->Length - 1] != ')')
			label2->Text = label2->Text->Remove(label2->Text->Length - 1);
		label2->Text += "*";
	}
	operation_press = 1;
	equal = 0;
}
//除法符號
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation_press == 0 || equal == 1)
		label2->Text += textBox1->Text + "/";
	else if (operation_press == 1 && label2->Text != "") { //切換加減乘除符號
		if (label2->Text[label2->Text->Length - 1] == 'd') //判斷前面是不是mod
			label2->Text = label2->Text->Remove(label2->Text->Length - 3);
		else if (label2->Text[label2->Text->Length - 1] != ')')
			label2->Text = label2->Text->Remove(label2->Text->Length - 1);
		label2->Text += "/";
	}
	operation_press = 1;
	equal = 0;
}
//小數點
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text +=".";
}
//左括號
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Text += "(";
}
//右括號
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Text += textBox1->Text + ")";
	textBox1->Text = "";
}
//階乘
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "fact(" + textBox1->Text + ")";
	else {			//把fact插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "fact(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "fact(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//二次方
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Text += textBox1->Text + "^";
	textBox1->Text = "2";
	operation_press = 1;
	equal = 0;
}
//次方
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation_press == 0 || equal == 1)
		label2->Text += textBox1->Text + "^";
	else if (operation_press == 1 && label2->Text != "") {
		if (label2->Text[label2->Text->Length - 1] == 'd')
			label2->Text = label2->Text->Remove(label2->Text->Length - 3);
		else if (label2->Text[label2->Text->Length - 1] != ')')
			label2->Text = label2->Text->Remove(label2->Text->Length - 1);
		label2->Text += "^";
	}
	operation_press = 1;
	equal = 0;
}
//sin，會找到靠右的左括號並包住它，若沒有左括號則放在最後;遇到其他特殊運算會包住它
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len-1] != ')')	//沒有括號
		label2->Text += "sin(" + textBox1->Text + ")";
	else {			//把sin插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i+1, "sin(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "sin(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//cos
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "cos(" + textBox1->Text + ")";
	else {			//把cos插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "cos(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "cos(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//tan
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "tan(" + textBox1->Text + ")";
	else {			//把tan插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "tan(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "tan(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//開根號
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "sqrt(" + textBox1->Text + ")";
	else {			//把sqrt插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "sqrt(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "sqrt(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//10^y
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "10^(" + textBox1->Text + ")";
	else {			//把10^插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "10^(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "10^(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//log
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "log(" + textBox1->Text + ")";
	else {			//把log插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "log(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "log(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//Exp，數字.e+數字
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Text += textBox1->Text + "*(10^";
	textBox1->Text += ".e+";
	operation_press = 1;
	equal = 0;
}
//Mod
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation_press == 0 || equal == 1)
		label2->Text += textBox1->Text + "mod";
	else {
		if(label2->Text[label2->Text->Length - 1] == 'd')
			label2->Text = label2->Text->Remove(label2->Text->Length - 3);
		else
			label2->Text = label2->Text->Remove(label2->Text->Length - 1);
		label2->Text += "mod";
	}
	operation_press = 1;
	equal = 0;
}
//等於
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Text += textBox1->Text + "=";
	textBox1->Text = "" + expr(label2->Text);
	if (check_error == true)
		textBox1->Text = "Error";
	label2->Text = "";
	operation_press = 1;
	equal = 1;
	check_error = false;
}
//運算:expr
private: System::Double expr(String^ str) {
	double value = 0.0;
	int index = 0;
	value = term(str, index);
	
	for (;;){
		switch (str[index++])
		{
		case '=': 
			return value;
		case '+': 
			value += term(str, index);
			break;
		case '-':
			if (str[index] == '-')
				value += term(str, ++index);
			else
				value -= term(str, index);
			break;
		default:
			textBox1->Text = "Error";
			break;
		}
	}
}
//運算:term
private: System::Double term(String^ str, int& index) {
	Double value = 0.0;
	value = number(str, index);

	while (true){
		if (str[index] == '*') {
			if (str[index + 1] == '-') {
				index++;
				value *= number(str, ++index);
				value = -value;
			}
			else
				value *= number(str, ++index);
		}
		else if (str[index] == '/') {
			if (str[index + 1] == '-') {
				index++;
				value /= number(str, ++index);
				value = -value;
			}
			else
				value /= number(str, ++index);
		}
		else if (str[index] == '^') {
			if (str[index + 1] == '-') {
				index++;
				value = pow(value, -number(str, ++index));
			}
			else
				value = pow(value, number(str, ++index));
		}
		else if (str[index] == 'm' && str[index + 1] == 'o' && str[index + 2] == 'd') {
			index += 3;
			if (str[index] == '-')
				index++;
			value = fmod(value, number(str, index));
		}
		else
			break;
	}
	return value;
}
//運算:number
private: System::Double number(String^ str, int& index) {
	Double value = 0.0;

	if (str[index] == '('){
		String^ psubstr = nullptr;
		psubstr = extract(str, ++index);
		if (psubstr == nullptr) {
			index--;
			check_error = true;
			return 0;
		}
		value = expr(psubstr);
		return value;
	}
	//sin & sec & sqrt
	if (str[index] == 's') {
		if (str[index+1] == 'i' && str[index+2] == 'n' && str[index+3] == '(') {
			String^ psubstr = nullptr;
			(index) += 4;
			psubstr = extract(str, index);
			value = expr(psubstr);
			value = sin(value);
			return value;
		}
		else if (str[index + 1] == 'e' && str[index + 2] == 'c' && str[index + 3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			psubstr = extract(str, index);
			value = expr(psubstr);
			value = 1 / cos(value);
			return value;
		}
		else if (str[index + 1] == 'q' && str[index + 2] == 'r' && str[index + 3] == 't' && str[index + 4] == '(') {
			String^ psubstr = nullptr;
			index += 5;
			psubstr = extract(str, index);
			value = expr(psubstr);
			value = sqrt(value);
			return value;
		}
	}
	//cos & cot & csc
	else if (str[index] == 'c') {
		if (str[index+1] == 'o' && str[index+2] == 's' && str[index+3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			psubstr = extract(str, index);
			value = expr(psubstr);
			value = cos(value);
			return value;
		}
		else if (str[index + 1] == 'o' && str[index + 2] == 't' && str[index + 3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			psubstr = extract(str, index);
			value = expr(psubstr);
			value = 1 / tan(value);
			return value;
		}
		else if (str[index + 1] == 's' && str[index + 2] == 'c' && str[index + 3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			psubstr = extract(str, index);
			value = expr(psubstr);
			value = 1 / sin(value);
			return value;
		}
	}
	//tan
	else if (str[index] == 't' && str[index + 1] == 'a' && str[index + 2] == 'n' && str[index + 3] == '(') {
		String^ psubstr = nullptr;
		index += 4;
		psubstr = extract(str, index);
		value = expr(psubstr);
		value = tan(value);
		return value;
	}
	//exp指數
	else if (str[index] == 'e' && str[index + 1] == 'x' && str[index + 2] == 'p' && str[index + 3] == '(') {
		String^ psubstr = nullptr;
		index += 4;
		psubstr = extract(str, index);
		value = expr(psubstr);
		value = exp(value);
		return value;
	}
	//log
	else if (str[index] == 'l' && str[index + 1] == 'o' && str[index + 2] == 'g' && str[index + 3] == '(') {
		String^ psubstr = nullptr;
		index += 4;
		psubstr = extract(str, index);
		value = expr(psubstr);
		value = log10(value);
		return value;
	}
	//ln
	else if (str[index] == 'l' && str[index + 1] == 'n' && str[index + 2] == '(') {
		String^ psubstr = nullptr;
		index += 3;
		psubstr = extract(str, index);
		value = expr(psubstr);
		value = log(value);
		return value;
	}
	//fact
	else if (str[index] == 'f' && str[index + 1] == 'a' && str[index + 2] == 'c' && str[index + 3] == 't'&& str[index + 4] == '(') {
		String^ psubstr = nullptr;
		int tem;
		index += 5;
		psubstr = extract(str, index);
		value = expr(psubstr);
		tem = (int)(double)value;
		if (value >= 0 && tem == value) {
			value = factorial(tem);
			return value;
		}
		else{
			check_error = 1;
			return 0;
		}
	}
	//neg負號
	else if (str[index] == 'n' && str[index + 1] == 'e' && str[index + 2] == 'g' && str[index + 3] == '(') {
		String^ psubstr = nullptr;
		index += 4;
		psubstr = extract(str, index);
		value = expr(psubstr);
		value = -(value);
		return value;
	}
	while (Char::IsDigit(str[index]))
		value = 10 * value + (str[index++] - '0');
	if (str[index] != '.') 
		return value;

	double factor = 1.0;
	while (Char::IsDigit(str[++index]))
	{
		factor *= 0.1;
		value = value + (str[index] - '0')*factor;
	}
	return value;
}
//運算:extract
private: System::String^ extract(String^ str, int& index) {
	char buffer[80] = { '0' };
	String^ pstr;
	int numL = 0;
	int bufindex = 0;

	do
	{
		buffer[bufindex] = str[index];
		switch (buffer[bufindex])
		{
		case ')':
			if (0 == numL)
			{
				buffer[bufindex] = '=';  // Replace ')' with '=' 
				++index;
				pstr = gcnew String(buffer);
				return pstr;                 // Return substring in new memory
			}
			else
				numL--;
			break;

		case '(':
			numL++;
			break;
		}
		bufindex++;
	} while (str[index++] != '='); // Loop - don't overrun end of string
	check_error = true;
}
//delete按鈕
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "0" && operation_press == 0) {
		if (textBox1->Text->Length == 1)
			textBox1->Text = "0";
		else {
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
		}
	}
}
//正負號轉換
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "") {
		if (textBox1->Text[0] == '-')
			textBox1->Text = textBox1->Text->Remove(0, 1);
		else
			textBox1->Text = "-" + textBox1->Text;
	}
	else if(operation_press == 0){
		int len = label2->Text->Length;
		int temp = 0;
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "neg(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "neg(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
}
private: System::Double factorial(double value) {
	double f = 1.0;
	for (; value > 0; value--) {
		f *= value;
	}
	return f;
}
private: System::Void 讀檔計算機ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1^ f2 = gcnew MyForm1();
	f2->ShowDialog();
}
//切換上排面板
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	button23->Visible = !button23->Visible;
	button24->Visible = !button24->Visible;
	button25->Visible = !button25->Visible;
	button26->Visible = !button26->Visible;
	button27->Visible = !button27->Visible;
	button28->Visible = !button28->Visible;

	button38->Visible = !button38->Visible;
	button39->Visible = !button39->Visible;
	button40->Visible = !button40->Visible;
	button41->Visible = !button41->Visible;
	button42->Visible = !button42->Visible;
	button43->Visible = !button43->Visible;
}
//csc
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "csc(" + textBox1->Text + ")";
	else {			//把csc插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "csc(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "csc(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//sec
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "sec(" + textBox1->Text + ")";
	else {			//把sec插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "sec(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "sec(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//cot
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "cot(" + textBox1->Text + ")";
	else {			//把cot插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "cot(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "cot(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//ln
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "ln(" + textBox1->Text + ")";
	else {			//把ln插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "ln(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "ln(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//exp
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "exp(" + textBox1->Text + ")";
	else {			//把exp插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "exp(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "exp(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
//倒數
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	int lastPos = label2->Text->LastIndexOf(")");
	int len = label2->Text->Length;
	int temp = 0;
	if (lastPos == -1 || label2->Text[len - 1] != ')')	//沒有括號
		label2->Text += "1/(" + textBox1->Text + ")";
	else {			//把1/(插入左括號左邊
		for (int i = (len - 1); i >= 0; i--) {
			if (label2->Text[i] == ')')
				temp++;
			else if (label2->Text[i] == '(')
				temp--;
			if (temp == 0 && (label2->Text[i] == '+' || label2->Text[i] == '-' || label2->Text[i] == '*' || label2->Text[i] == '/')) {
				label2->Text = label2->Text->Insert(i + 1, "1/(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
			else if (i == 0) {
				label2->Text = label2->Text->Insert(0, "1/(");
				len = label2->Text->Length;
				label2->Text = label2->Text->Insert(len - 1, ")");
				break;
			}
		}
	}
	textBox1->Text = "";
	operation_press = 0;
	equal = 0;
}
};
}
