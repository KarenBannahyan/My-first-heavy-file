#pragma once
#include <string>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

namespace Project3 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm2 : public System::Windows::Forms::Form
    {
    public:
        MyForm2(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm2()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::BackgroundWorker^ backgroundWorker1;
        System::Windows::Forms::Button^ addButton; // Добавленная кнопка
        int labelCounter; // Счетчик меток

    private:
        System::Void AddLabelButtonClick(System::Object^ sender, System::EventArgs^ e);

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
            this->addButton = (gcnew System::Windows::Forms::Button()); // Инициализация кнопки
            this->SuspendLayout();

            // 
            // addButton
            // 
            this->addButton->Location = System::Drawing::Point(10, 10);
            this->addButton->Size = System::Drawing::Size(100, 23);
            this->addButton->Text = L"Добавить метку";
            this->addButton->Click += gcnew System::EventHandler(this, &MyForm2::AddLabelButtonClick);

            // 
            // MyForm2
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1424, 576);
            this->Controls->Add(this->addButton); // Добавление кнопки к форме
            this->Name = L"MyForm2";
            this->Text = L"MyForm2";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    };
}

