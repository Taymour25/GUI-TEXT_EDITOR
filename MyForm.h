#pragma once
#include<cstring>
#include<string>
#include<fstream>
#include<iostream>
#include <msclr\marshal_cppstd.h>
#include<cstdio>
#include<cctype>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::Button^ button13;



	private: System::Windows::Forms::Button^ button17;




	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::ComponentModel::IContainer^ components;

	private:

	private:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		String^ convertToString(char* a, int size)
		{
			int i;
			String^ s = "";
			for (i = 0; i < size; i++) {
			  s = s + a[i];
			}
			return s;
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(111, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Encrypt the file";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(111, 47);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 26);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Word search";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(763, 45);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"1st caps";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(932, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(176, 26);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Number of chars";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(429, 47);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"All Upper";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlText;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(265, 10);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(158, 33);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Decrypt the file";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlText;
			this->button7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button7->Location = System::Drawing::Point(265, 49);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(158, 28);
			this->button7->TabIndex = 6;
			this->button7->Text = L"number word existed";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlText;
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(429, 7);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(146, 34);
			this->button8->TabIndex = 7;
			this->button8->Text = L"merge files";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlText;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(763, 11);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(158, 26);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Clear file";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(581, 47);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(176, 30);
			this->button11->TabIndex = 10;
			this->button11->Text = L"All lower";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Location = System::Drawing::Point(581, 11);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(176, 26);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Number of words";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlText;
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(932, 47);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(176, 30);
			this->button17->TabIndex = 17;
			this->button17->Text = L"SAVE";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->richTextBox1->Location = System::Drawing::Point(74, 208);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(996, 204);
			this->richTextBox1->TabIndex = 20;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button10->Location = System::Drawing::Point(111, 113);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(312, 39);
			this->button10->TabIndex = 21;
			this->button10->Text = L"import file";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->Location = System::Drawing::Point(519, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(551, 22);
			this->textBox1->TabIndex = 22;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_2);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1122, 448);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"Text Editor";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		char arr[45];
		int k = 0;
		std::ifstream userfile("project.txt");
		userfile.getline(arr, 50);
		for (char i : arr) {
			arr[k] = char(toupper(i));
			k++;
		}
		String^ clistr = gcnew String(arr);
		Console::WriteLine(clistr);
		richTextBox1->Text = clistr;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	String^ file;
	file=textBox1->Text;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	char arr[40];
	int k = 0;
	std::fstream userfile("project.txt");
	userfile.getline(arr, 40);
	for (char i : arr) {
		i = i + 1;
		arr[k] = i;
		k++;
	}
	String^ clistr = gcnew String(arr);
	Console::WriteLine(clistr);
	richTextBox1->Text = clistr;
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ file;
	char arr[1000];
	file = richTextBox1->Text;
	std::fstream userfile("project.txt");
	userfile.getline(arr, 1000);
	String^ clistr = gcnew String(arr);
	Console::WriteLine(clistr);
	richTextBox1->Text = clistr;

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	char arr[40];
	std::fstream userfile("project.txt");
	userfile.getline(arr, 40);
	String^ clistr = gcnew String(arr);
	Console::WriteLine(clistr);
	richTextBox1->Text = clistr;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	char arr[100];
	char arr2[100];
	std::fstream userfile("project.txt");
	userfile.getline(arr, 100);
	String^ clistr = gcnew String(arr);
	Console::WriteLine(clistr);
	richTextBox1->Text = clistr;
	std::fstream secondfile("hello.txt");
	secondfile.getline(arr2, 100);
	String^ secnd = gcnew String(arr2);
	Console::WriteLine(secnd);
	richTextBox1->AppendText(secnd);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	char arr[100];
	Char arr2[100];
	int count = 0;
	std::ifstream userfile("project.txt");
	userfile.getline(arr, 100);
	for (int i : arr) {
		if (i==32) {
			count++;
		}
	}
	arr2[0] = '.';
	String^ clistr = gcnew String(arr2);
	Console::WriteLine(clistr);
	clistr = "The number of words is ";
	clistr = clistr + count;
	MessageBox::Show(clistr);
	
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cont;
	char arr[400];
	int k = 0;
	cont = richTextBox1->Text;
	std::ifstream userfile("project.txt");
	userfile.getline(arr, 400);
	std::string contn = msclr::interop::marshal_as<std::string>(cont);
	std::ofstream file("project.txt");
	file << contn;

}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text = ("");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	char arr[100];
	Char arr2[100];
	int count = 0;
	std::ifstream userfile("project.txt");
	userfile.getline(arr, 100);
	for (int i : arr) {
		if (i>48 && i<95) {
			count++;
		}
	}
	arr2[0] ='.';
	String^ clistr = gcnew String(arr2);
	Console::WriteLine(clistr);
	clistr = "The number of char is";
	clistr = clistr + count;
	MessageBox::Show(clistr);
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ src;
	std::string flst;
	int count = 0;
	int k = 0;
	src =textBox1->Text;
	std::ifstream userfile("project.txt");
	getline(userfile, flst);
	for (char i : flst) {
		flst[k] = char(tolower(i));
		k++;
	}
	std::string lol = msclr::interop::marshal_as<std::string>(src);
	if (flst.find(lol, 0) < 1000) {
		MessageBox::Show("WE HAVE FOUND THE WORD !");
	}
	else {
		MessageBox::Show("WE HAVEN'T FOUND THE WORD =(");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ src;
	String^ cont;
	std::string flst;
	int count = 0;
	int k = 0;
	src = textBox1->Text;
	std::ifstream userfile("project.txt");
	getline(userfile, flst);
	std::string lol = msclr::interop::marshal_as<std::string>(src);
	for (int i = 0; flst.find(lol, i) < 10000; i += flst.find(lol, i))
	{
		if (flst.find(lol, 0) < 1000) {
			count = count + 1;
		}
	}
	std::string contn = msclr::interop::marshal_as<std::string>(cont);
	MessageBox::Show(cont);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	char arr[45];
	int k = 0;
	std::ifstream userfile("project.txt");
	userfile.getline(arr, 50);
	for (char i : arr) {
		arr[k] = char(tolower(i));
		k++;
	}
	String^ clistr = gcnew String(arr);
	Console::WriteLine(clistr);
	richTextBox1->Text = clistr;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	char arr[100];
	int count = 0;
	int k = 0;
	std::ifstream userfile("project.txt");
	userfile.getline(arr, 100);
	for (int i : arr) {
		if (i == 32) {
			arr[k + 1] = char(toupper(arr[k + 1]));
		}
		k++;
	}
	arr[0] = char(toupper(arr[0]));
	String^ clistr = gcnew String(arr);
	Console::WriteLine(clistr);
	richTextBox1->Text = clistr;
}
};
}
