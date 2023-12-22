#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <iostream>
#include <string>
#include <winsock2.h>
#include <Ws2tcpip.h> 
#include <msclr/marshal_cppstd.h>
#pragma comment(lib, "ws2_32.lib")


namespace Project3 {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm1 : public System::Windows::Forms::Form
    {
    private:
        String^ message;
    private: System::Windows::Forms::Button^ button1;
           String^ ip;
    private: int PORT;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private:
        bool x = false;
    public:
        MyForm1(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(42, 39);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(361, 51);
            this->label1->TabIndex = 0;
            this->label1->Text = L" Message to send";
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(111, 125);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(231, 53);
            this->textBox1->TabIndex = 1;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(42, 261);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(406, 51);
            this->label2->TabIndex = 2;
            this->label2->Text = L"IP address of server";
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(111, 365);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(231, 53);
            this->textBox2->TabIndex = 3;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Yellow;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(373, 442);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 78);
            this->button1->TabIndex = 4;
            this->button1->Text = L"Send";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(-9, 548);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(205, 69);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Result";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(3, 471);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(100, 22);
            this->textBox3->TabIndex = 6;
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox3_TextChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(0, 442);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(138, 22);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Port (advanced)";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(116, 477);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(80, 16);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Default 8080";
            // 
            // MyForm1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->ClientSize = System::Drawing::Size(490, 653);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"MyForm1";
            this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        message = this->textBox1->Text;
    }

    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ip = this->textBox2->Text;
    }

    private: System::Void connection() {
        if (this->x) {
            this->label3->Text = "Access allowed";
            WSADATA wsaData;
            if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {

            }

            SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
            if (clientSocket == INVALID_SOCKET) {

                WSACleanup();

            }

            sockaddr_in serverAddr;
            serverAddr.sin_family = AF_INET;
            serverAddr.sin_port = htons(PORT);

            // Convert System::String^ to std::string for 'ip'
            std::string ipStr = msclr::interop::marshal_as<std::string>(ip->ToString());

            if (inet_pton(AF_INET, ipStr.c_str(), &serverAddr.sin_addr) <= 0) {
                this->label3->Text = "Invalid IP";
                closesocket(clientSocket);
                WSACleanup();

            }

            // Convert System::String^ to std::string for 'message'
            std::string messageStr = msclr::interop::marshal_as<std::string>(message->ToString());

            if (connect(clientSocket, reinterpret_cast<struct sockaddr*>(&serverAddr), sizeof(serverAddr)) == SOCKET_ERROR) {
                this->label3->Text = "Error";
                closesocket(clientSocket);
                WSACleanup();
            }

            if (send(clientSocket, messageStr.c_str(), messageStr.length(), 0) == SOCKET_ERROR) {
                this->label3->Text = "Error";
                closesocket(clientSocket);
                WSACleanup();
            }

            closesocket(clientSocket);
            WSACleanup();
        }
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->x = true;  // Set x to true to allow the connection
        System::Threading::Tasks::Task::Run(gcnew System::Action(this, &MyForm1::connection));
    }
           // Use Task.Run to perform the network operations asynchronously
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
        this->label3->Text = "";
    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        this->PORT = System::Convert::ToInt32(this->textBox3->Text);
    }
    };
}