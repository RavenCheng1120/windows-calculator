#pragma once
#include <cmath>

namespace wp_calculator_4105056005 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm2 的摘要
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"#輸入計算式: ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(18, 97);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(744, 271);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(12, 446);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 47);
			this->label2->TabIndex = 2;
			this->label2->Text = L"#輸出結果: ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(18, 505);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 3, 3, 20);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(744, 317);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(619, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 65);
			this->button1->TabIndex = 4;
			this->button1->Text = L"submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(780, 842);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->ShowIcon = false;
			this->Text = L"輸入式計算機";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Boolean check_error = false;

	//按下submit button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox2->Text = "";	//清空
		array<String^>^ strChar = gcnew array<String^>(50);
		strChar = textBox1->Text->Split('\n'); //把字串根據\n分開
		for (int i = 0; i < strChar->Length; i++) {
			check_error = false;
			strChar[i] = strChar[i]->Replace(" ", strChar[i]->Empty);	//刪除空白
			strChar[i] = strChar[i]->Replace("\r", strChar[i]->Empty);	//把\r替換成空白
			strChar[i] = strChar[i] + "=";
			double temp = 0;
			temp = expr(strChar[i]);
			if (check_error == 0)
				textBox2->Text += strChar[i] + temp + "\r\n";
			else
				textBox2->Text += strChar[i] + " 錯誤輸入\r\n";
		}

	}
	//運算:expr
	private: System::Double expr(String^ str) {
		double value = 0.0;
		int index = 0;
		value = term(str, index);

		for (;;) {
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
				check_error = 1;
				return 0;
			}
		}
	}
	//運算:term
	private: System::Double term(String^ str, int& index) {
		Double value = 0.0;
		value = number(str, index);

		while (true) {
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
			else if (str[index] == '%') {
				index++;
				if (str[index] == '-')
					index++;
				value = fmod(value, number(str, index));
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
		int startnum = 0;

		if (str[index] == '(') {
			String^ psubstr = nullptr;
			startnum += 1;
			psubstr = extract(str, ++index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			if (str[index] == '!') {
				index++;
				value = factorial(value);
				if (str[index] == '+' && str[index + 1] == '+') {
					value++;
					index += 2;
				}
				else if (str[index] == '-' && str[index + 1] == '-') {
					value--;
					index += 2;
				}
			}
			return value;
		}
		else if (str[index] == '[') {
			String^ psubstr = nullptr;
			startnum += 100;
			psubstr = extract(str, ++index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			if (str[index] == '!') {
				index++;
				value = factorial(value);
				if (str[index] == '+' && str[index + 1] == '+') {
					value++;
					index += 2;
				}
				else if (str[index] == '-' && str[index + 1] == '-') {
					value--;
					index += 2;
				}
			}
			return value;
		}
		else if (str[index] == '{') {
			String^ psubstr = nullptr;
			startnum += 10000;
			psubstr = extract(str, ++index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			if (str[index] == '!') {
				index++;
				value = factorial(value);
				if (str[index] == '+' && str[index + 1] == '+') {
					value++;
					index += 2;
				}
				else if (str[index] == '-' && str[index + 1] == '-') {
					value--;
					index += 2;
				}
			}
			return value;
		}
		//sin & sec & sqrt
		if (str[index] == 's') {
			if (str[index + 1] == 'i' && str[index + 2] == 'n' && str[index + 3] == '(') {
				String^ psubstr = nullptr;
				(index) += 4;
				startnum += 1;
				psubstr = extract(str, index, startnum);
				if (psubstr == nullptr) {
					index--;
					check_error = true;
					return 0;
				}
				value = expr(psubstr);
				value = sin(value);
				return value;
			}
			else if (str[index + 1] == 'e' && str[index + 2] == 'c' && str[index + 3] == '(') {
				String^ psubstr = nullptr;
				index += 4;
				startnum += 1;
				psubstr = extract(str, index, startnum);
				if (psubstr == nullptr) {
					index--;
					check_error = true;
					return 0;
				}
				value = expr(psubstr);
				value = 1 / cos(value);
				return value;
			}
			else if (str[index + 1] == 'q' && str[index + 2] == 'r' && str[index + 3] == 't' && str[index + 4] == '(') {
				String^ psubstr = nullptr;
				index += 5;
				startnum += 1;
				psubstr = extract(str, index, startnum);
				if (psubstr == nullptr) {
					index--;
					check_error = true;
					return 0;
				}
				value = expr(psubstr);
				value = sqrt(value);
				return value;
			}
		}
		//cos & cot & csc
		else if (str[index] == 'c') {
			if (str[index + 1] == 'o' && str[index + 2] == 's' && str[index + 3] == '(') {
				String^ psubstr = nullptr;
				index += 4;
				startnum += 1;
				psubstr = extract(str, index, startnum);
				if (psubstr == nullptr) {
					index--;
					check_error = true;
					return 0;
				}
				value = expr(psubstr);
				value = cos(value);
				return value;
			}
			else if (str[index + 1] == 'o' && str[index + 2] == 't' && str[index + 3] == '(') {
				String^ psubstr = nullptr;
				index += 4;
				startnum += 1;
				psubstr = extract(str, index, startnum);
				if (psubstr == nullptr) {
					index--;
					check_error = true;
					return 0;
				}
				value = expr(psubstr);
				value = 1 / tan(value);
				return value;
			}
			else if (str[index + 1] == 's' && str[index + 2] == 'c' && str[index + 3] == '(') {
				String^ psubstr = nullptr;
				index += 4;
				startnum += 1;
				psubstr = extract(str, index, startnum);
				if (psubstr == nullptr) {
					index--;
					check_error = true;
					return 0;
				}
				value = expr(psubstr);
				value = 1 / sin(value);
				return value;
			}
		}
		//tan
		else if (str[index] == 't' && str[index + 1] == 'a' && str[index + 2] == 'n' && str[index + 3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			startnum += 1;
			psubstr = extract(str, index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			value = tan(value);
			return value;
		}
		//exp指數
		else if (str[index] == 'e' && str[index + 1] == 'x' && str[index + 2] == 'p' && str[index + 3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			startnum += 1;
			psubstr = extract(str, index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			value = exp(value);
			return value;
		}
		//log10
		else if (str[index] == 'l' && str[index + 1] == 'o' && str[index + 2] == 'g' && str[index + 3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			startnum += 1;
			psubstr = extract(str, index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			value = log10(value);
			return value;
		}
		//ln
		else if (str[index] == 'l' && str[index + 1] == 'n' && str[index + 2] == '(') {
			String^ psubstr = nullptr;
			index += 3;
			startnum += 1;
			psubstr = extract(str, index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			value = log(value);
			return value;
		}
		//neg負號
		else if (str[index] == 'n' && str[index + 1] == 'e' && str[index + 2] == 'g' && str[index + 3] == '(') {
			String^ psubstr = nullptr;
			index += 4;
			startnum += 1;
			psubstr = extract(str, index, startnum);
			if (psubstr == nullptr) {
				index--;
				check_error = true;
				return 0;
			}
			value = expr(psubstr);
			value = -(value);
			return value;
		}
		else if (str[index] == '=') {
			check_error = 1;
			return 0;
		}
		while (Char::IsDigit(str[index]))
			value = 10 * value + (str[index++] - '0');
		if (str[index] != '.') {
			if (str[index] == '!') {
				if (value < 0) {
					check_error = 1;
					return 0;
				}
				index++;
				value = factorial(value);
				if (str[index] == '+' && str[index + 1] == '+') {
					value++;
					index += 2;
				}
				else if (str[index] == '-' && str[index + 1] == '-') {
					value--;
					index += 2;
				}
			}
			if (str[index] == '+' && str[index+1] == '+') {
				value++;
				index += 2;
			}
			else if (str[index] == '-' && str[index+1] == '-') {
				value--;
				index += 2;
			}
			return value;
		}

		double factor = 1.0;
		while (Char::IsDigit(str[++index]))
		{
			factor *= 0.1;
			value = value + (str[index] - '0')*factor;
		}
		if (str[index] == '+' && str[index + 1] == '+') {
			value++;
			index += 2;
		}
		else if (str[index] == '-' && str[index + 1] == '-') {
			value--;
			index += 2;
		}
		return value;
	}
	//運算:extract
	private: System::String^ extract(String^ str, int& index, int numL) {
		char buffer[80] = { '0' };
		String^ pstr;
		int bufindex = 0;

		do
		{
			buffer[bufindex] = str[index];
			switch (buffer[bufindex])
			{
			case ')':
				if (1 == numL)
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

			case ']':
				if (100 == numL)
				{
					buffer[bufindex] = '=';  // Replace ')' with '=' 
					++index;
					pstr = gcnew String(buffer);
					return pstr;                 // Return substring in new memory
				}
				else
					numL -= 100;
				break;
			case '[':
				numL += 100;
				break;

			case '}':
				if (10000 == numL)
				{
					buffer[bufindex] = '=';  // Replace ')' with '=' 
					++index;
					pstr = gcnew String(buffer);
					return pstr;                 // Return substring in new memory
				}
				else
					numL -= 10000;
				break;
			case '{':
				numL += 10000;
				break;
			}
			bufindex++;
		} while (str[index++] != '='); // Loop - don't overrun end of string
		check_error = true;
		return pstr;
	}
	private: System::Double factorial(double value) {
		double f = 1.0;
		for (; value > 0; value--) {
			f *= value;
		}
		return f;
	}

};
}
