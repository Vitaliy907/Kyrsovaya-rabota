#pragma once
#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <string>
#include <iostream>
#include <fstream>
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma warning(disable: 4996)

using namespace std;

namespace PasswordTaker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Password_label;
	private: System::Windows::Forms::TextBox^ givePassword_TextBox;
	private: System::Windows::Forms::Button^ generatePassword_Button;
	private: System::Windows::Forms::Label^ browser_label;
	private: System::Windows::Forms::TextBox^ browser_TextBox;
	private: System::Windows::Forms::Button^ Save_Button;
	private: System::Windows::Forms::Button^ takePassword_Button;
	private: System::Windows::Forms::Button^ Delete_Button;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Password_label = (gcnew System::Windows::Forms::Label());
			this->givePassword_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->generatePassword_Button = (gcnew System::Windows::Forms::Button());
			this->browser_label = (gcnew System::Windows::Forms::Label());
			this->browser_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Save_Button = (gcnew System::Windows::Forms::Button());
			this->takePassword_Button = (gcnew System::Windows::Forms::Button());
			this->Delete_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Password_label
			// 
			this->Password_label->AutoSize = true;
			this->Password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password_label->Location = System::Drawing::Point(12, 105);
			this->Password_label->Name = L"Password_label";
			this->Password_label->Size = System::Drawing::Size(126, 29);
			this->Password_label->TabIndex = 0;
			this->Password_label->Text = L"Password:";
			// 
			// givePassword_TextBox
			// 
			this->givePassword_TextBox->Enabled = false;
			this->givePassword_TextBox->Location = System::Drawing::Point(144, 114);
			this->givePassword_TextBox->Name = L"givePassword_TextBox";
			this->givePassword_TextBox->Size = System::Drawing::Size(285, 20);
			this->givePassword_TextBox->TabIndex = 1;
			this->givePassword_TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::givePassword_TextBox_TextChanged);
			// 
			// generatePassword_Button
			// 
			this->generatePassword_Button->Enabled = false;
			this->generatePassword_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->generatePassword_Button->Location = System::Drawing::Point(17, 153);
			this->generatePassword_Button->Name = L"generatePassword_Button";
			this->generatePassword_Button->Size = System::Drawing::Size(412, 37);
			this->generatePassword_Button->TabIndex = 2;
			this->generatePassword_Button->Text = L"Generate Password";
			this->generatePassword_Button->UseVisualStyleBackColor = true;
			this->generatePassword_Button->Click += gcnew System::EventHandler(this, &MyForm::generatePassword_Button_Click);
			// 
			// browser_label
			// 
			this->browser_label->AutoSize = true;
			this->browser_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->browser_label->Location = System::Drawing::Point(75, 55);
			this->browser_label->Name = L"browser_label";
			this->browser_label->Size = System::Drawing::Size(63, 29);
			this->browser_label->TabIndex = 3;
			this->browser_label->Text = L"Link:";
			// 
			// browser_TextBox
			// 
			this->browser_TextBox->Location = System::Drawing::Point(144, 64);
			this->browser_TextBox->Name = L"browser_TextBox";
			this->browser_TextBox->Size = System::Drawing::Size(285, 20);
			this->browser_TextBox->TabIndex = 4;
			this->browser_TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::browser_TextBox_TextChanged);
			// 
			// Save_Button
			// 
			this->Save_Button->Enabled = false;
			this->Save_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Save_Button->Location = System::Drawing::Point(17, 239);
			this->Save_Button->Name = L"Save_Button";
			this->Save_Button->Size = System::Drawing::Size(192, 41);
			this->Save_Button->TabIndex = 5;
			this->Save_Button->Text = L"Save";
			this->Save_Button->UseVisualStyleBackColor = true;
			this->Save_Button->Click += gcnew System::EventHandler(this, &MyForm::Save_Button_Click);
			// 
			// takePassword_Button
			// 
			this->takePassword_Button->Enabled = false;
			this->takePassword_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->takePassword_Button->Location = System::Drawing::Point(17, 196);
			this->takePassword_Button->Name = L"takePassword_Button";
			this->takePassword_Button->Size = System::Drawing::Size(412, 37);
			this->takePassword_Button->TabIndex = 6;
			this->takePassword_Button->Text = L"Take Password";
			this->takePassword_Button->UseVisualStyleBackColor = true;
			this->takePassword_Button->Click += gcnew System::EventHandler(this, &MyForm::takePassword_Button_Click);
			// 
			// Delete_Button
			// 
			this->Delete_Button->Enabled = false;
			this->Delete_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delete_Button->Location = System::Drawing::Point(237, 239);
			this->Delete_Button->Name = L"Delete_Button";
			this->Delete_Button->Size = System::Drawing::Size(192, 41);
			this->Delete_Button->TabIndex = 7;
			this->Delete_Button->Text = L"Delete";
			this->Delete_Button->UseVisualStyleBackColor = true;
			this->Delete_Button->Click += gcnew System::EventHandler(this, &MyForm::Delete_Button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(464, 562);
			this->Controls->Add(this->Delete_Button);
			this->Controls->Add(this->takePassword_Button);
			this->Controls->Add(this->Save_Button);
			this->Controls->Add(this->browser_TextBox);
			this->Controls->Add(this->browser_label);
			this->Controls->Add(this->generatePassword_Button);
			this->Controls->Add(this->givePassword_TextBox);
			this->Controls->Add(this->Password_label);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Password Generator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	SOCKET Connection;

	//Генерирует рандомные символы для пароля
	void number_of_chars(int& password_length, int& number_of_counter, int& number_of_big_chars, int& number_of_small_chars)
		{
			number_of_small_chars = rand() % password_length;
			int charRandEnd = password_length - number_of_small_chars;
			number_of_big_chars = rand() % charRandEnd;
			number_of_counter = password_length - number_of_small_chars - number_of_big_chars;
		}
	//Генерирует рандомный пароль
	void passwordGenerator(string& password, int& password_length, int& number_of_counter, int& number_of_big_chars)
		{

			for (int i = 0; i < number_of_counter; i++) {
				if (password.size() >= password_length) { break; }
				password += char(rand() % 10 + 48);
			}
			for (int i = number_of_counter / 4; i < number_of_counter + number_of_big_chars; i++) {
				if (password.size() >= password_length) { break; }
				password += char(rand() % 26 + 65);
			}
			for (int i = number_of_counter + number_of_big_chars; i < password_length; i++) {
				if (password.size() >= password_length) { break; }
				password += char(rand() % 26 + 97);
			}

			//random_shuffle(password, password);
		}
	//Функия вывода пороля в Password
	void printPassword(string password) {

			String^ sys_password = gcnew String(password.c_str());
			givePassword_TextBox->Text = sys_password; 

		}
	//Переводит значение из TextBox в string
	void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	//Отправка на сервер
	void sendToServer(string act) {

		//Создание сокета для сервера
		WSAData wsaData;
		WORD DLLVersion = MAKEWORD(2, 1);
		if (WSAStartup(DLLVersion, &wsaData) != 0) {
			//std::cout << "Error" << std::endl;
			exit(1);
		}

		SOCKADDR_IN addr;
		int sizeofaddr = sizeof(addr);
		addr.sin_addr.s_addr = inet_addr("127.0.0.1");
		addr.sin_port = htons(1111);
		addr.sin_family = AF_INET;

		Connection = socket(AF_INET, SOCK_STREAM, NULL);
		if (connect(Connection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {}

		//Сохраняет пароль
		if (act == "a") {
			Save_Button->Enabled = false;
			string msg1;

			int msg_act = act.size();
			send(Connection, (char*)&msg_act, sizeof(int), NULL);
			send(Connection, act.c_str(), msg_act, NULL);

			MarshalString(browser_TextBox->Text, msg1);
			int msg_size = msg1.size();
			send(Connection, (char*)&msg_size, sizeof(int), NULL);
			send(Connection, msg1.c_str(), msg_size, NULL);

			MarshalString(givePassword_TextBox->Text, msg1);
			int msg_size_pass = msg1.size();
			send(Connection, (char*)&msg_size_pass, sizeof(int), NULL);
			send(Connection, msg1.c_str(), msg_size_pass, NULL);
		}
		//Получение пароля по Link
		else if(act=="b"){
			takePassword_Button->Enabled = false;
			string msg1;

			int msg_act = act.size();
			send(Connection, (char*)&msg_act, sizeof(int), NULL);
			send(Connection, act.c_str(), msg_act, NULL);

			MarshalString(browser_TextBox->Text, msg1);

			msg_act = msg1.size();
			send(Connection, (char*)&msg_act, sizeof(int), NULL);
			send(Connection, msg1.c_str(), msg_act, NULL);

			int msg_size;
			recv(Connection, (char*)&msg_size, sizeof(int), NULL);
			char* msg = new char[msg_size + 1];
			msg[msg_size] = '\0';
			recv(Connection, msg, msg_size, NULL);

			msg1 = "";

			for (size_t i = 0; i < msg_size; i++)
			{
				msg1 += msg[i];
			}
			String^ sys_password = gcnew String(msg1.c_str());
			givePassword_TextBox->Text = sys_password;
		}
		//Проверка наличия пароля введённой ссылки
		else if (act == "c") {

			int msg_act = act.size();
			send(Connection, (char*)&msg_act, sizeof(int), NULL);
			send(Connection, act.c_str(), msg_act, NULL);

			int password_size = 10;
			int number_of_small_chars = 0;
			int number_of_big_chars = 0;
			int number_of_counter = 0;
			string text,path;
			string password;
			MarshalString(browser_TextBox->Text, text);

			msg_act = text.size();
			send(Connection, (char*)&msg_act, sizeof(int), NULL);
			send(Connection, text.c_str(), msg_act, NULL);

			char* n = new char[1];

			n[0] = '1';

			recv(Connection, n, 1, NULL);

			if (n[0] == '1') {
				Save_Button->Enabled = true;
				number_of_chars(password_size, number_of_counter, number_of_big_chars, number_of_small_chars);
				passwordGenerator(password, password_size, number_of_counter, number_of_big_chars);
				printPassword(password);
			}
			else
			{
				Save_Button->Enabled = false;
				givePassword_TextBox->Text = "This link had already been used...";
			}
		}
		//Удаление пароля по ссылке
		else if (act == "d") {

			generatePassword_Button->Enabled = false;
			Save_Button->Enabled = false;

			int msg_act = act.size();
			send(Connection, (char*)&msg_act, sizeof(int), NULL);
			send(Connection, act.c_str(), msg_act, NULL);

			string text;

			MarshalString(browser_TextBox->Text, text);

			msg_act = text.size();
			send(Connection, (char*)&msg_act, sizeof(int), NULL);
			send(Connection, text.c_str(), msg_act, NULL);

			char* n = new char[1];

			n[0] = '1';

			recv(Connection, n, 1, NULL);

			if (n[0] == '1') {
				Delete_Button->Enabled = false;
				givePassword_TextBox->Text = "Can not find this link...";
				
			}
			else
			{
				Delete_Button->Enabled = false;
				givePassword_TextBox->Text = "Password was deleted...";
			}
		}
	}
	//При нажатии на Generate Password вызов функции C при отправки на сервер
	public: System::Void generatePassword_Button_Click(System::Object^ sender, System::EventArgs^ e) { sendToServer("c"); }

	public: System::Void givePassword_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	//При изменении текста в Link вклбчаются кнопки 
	private: System::Void browser_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		givePassword_TextBox->Enabled = true;
		generatePassword_Button->Enabled = true;
		takePassword_Button->Enabled = true;
		Delete_Button->Enabled = true;
	}
	//При нажатии на Save вызов функции A при отправки на сервер
	public: System::Void Save_Button_Click(System::Object^ sender, System::EventArgs^ e) { sendToServer("a"); }
	//При нажатии на Save вызов функции b при отправки на сервер
	private: System::Void takePassword_Button_Click(System::Object^ sender, System::EventArgs^ e) { sendToServer("b"); }
	//При нажатии на Save вызов функции d при отправки на сервер
	private: System::Void Delete_Button_Click(System::Object^ sender, System::EventArgs^ e) { sendToServer("d"); }
};
}
