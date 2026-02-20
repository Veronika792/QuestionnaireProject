#pragma once

namespace QuestionnaireProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Diagnostics;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            InitializeComboBoxes();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Основні елементи форми
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;

        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
        System::Windows::Forms::ComboBox^ comboBox1;
        System::Windows::Forms::ComboBox^ comboBox2;
        System::Windows::Forms::ComboBox^ comboBox3;
        System::Windows::Forms::ComboBox^ comboBox4;

        System::Windows::Forms::LinkLabel^ linkLabel1;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::TextBox^ textBox4;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::CheckedListBox^ checkedListBox1;
        System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::Label^ labelCourse;
    private: System::Windows::Forms::Label^ labelGroup;

        System::ComponentModel::Container^ components;

        // Метод для ініціалізації комбобоксів
        void InitializeComboBoxes()
        {
            // Країни
            comboBox1->Items->Add("Україна");
            comboBox1->Items->Add("Польща");
            comboBox1->Items->Add("Німеччина");
            comboBox1->Items->Add("Франція");
            comboBox1->Items->Add("Великобританія");
            comboBox1->Items->Add("США");
            comboBox1->Items->Add("Канада");

            // Курси
            comboBox2->Items->Add("1 курс");
            comboBox2->Items->Add("2 курс");
            comboBox2->Items->Add("3 курс");
            comboBox2->Items->Add("4 курс");

            // Групи
            comboBox3->Items->Add("М");
            comboBox3->Items->Add("СОІ");
            comboBox3->Items->Add("СОМ");
            comboBox3->Items->Add("СОФА");

            // Спеціальності
            comboBox4->Items->Add("Комп'ютерна математика");
            comboBox4->Items->Add("Середня освіта Математика");
            comboBox4->Items->Add("Середня освіта Інформатика");
            comboBox4->Items->Add("Середня освіта Фізика і Астрономія");

            // Предмети у checkedListBox
            checkedListBox1->Items->Add("Аналітична Геометрія");
            checkedListBox1->Items->Add("Інформатика");
            checkedListBox1->Items->Add("Аналіз Даних");
            checkedListBox1->Items->Add("Англійська мова для проф спілкування");
            checkedListBox1->Items->Add("Математичний Аналіз");
            checkedListBox1->Items->Add("Елементарна Математика");
            checkedListBox1->Items->Add("Геймифікація освіти");
            checkedListBox1->Items->Add("Українська Мова");
            checkedListBox1->Items->Add("Історія Математики");
            checkedListBox1->Items->Add("Штучний інтелект");
            checkedListBox1->Items->Add("Дискретна математика");
        }

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->labelCourse = (gcnew System::Windows::Forms::Label());
            this->labelGroup = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(30, 30);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(83, 17);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Прізвище:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(30, 70);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(40, 17);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Ім\'я:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(30, 110);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(147, 17);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Дата народження:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(30, 150);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(63, 17);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Країна:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(30, 190);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(117, 17);
            this->label5->TabIndex = 4;
            this->label5->Text = L"Спеціальність:";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(180, 29);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(200, 20);
            this->textBox1->TabIndex = 5;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(180, 69);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(200, 20);
            this->textBox2->TabIndex = 6;
            // 
            // maskedTextBox1
            // 
            this->maskedTextBox1->Location = System::Drawing::Point(180, 109);
            this->maskedTextBox1->Mask = L"00/00/0000";
            this->maskedTextBox1->Name = L"maskedTextBox1";
            this->maskedTextBox1->Size = System::Drawing::Size(200, 20);
            this->maskedTextBox1->TabIndex = 7;
            this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
            // 
            // comboBox1
            // 
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(180, 149);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(200, 21);
            this->comboBox1->TabIndex = 8;
            // 
            // comboBox2
            // 
            this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(180, 229);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(200, 21);
            this->comboBox2->TabIndex = 9;
            // 
            // comboBox3
            // 
            this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Location = System::Drawing::Point(180, 269);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(200, 21);
            this->comboBox3->TabIndex = 10;
            // 
            // comboBox4
            // 
            this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Location = System::Drawing::Point(180, 189);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(200, 21);
            this->comboBox4->TabIndex = 11;
            // 
            // linkLabel1
            // 
            this->linkLabel1->AutoSize = true;
            this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->linkLabel1->Location = System::Drawing::Point(30, 320);
            this->linkLabel1->Name = L"linkLabel1";
            this->linkLabel1->Size = System::Drawing::Size(129, 17);
            this->linkLabel1->TabIndex = 12;
            this->linkLabel1->TabStop = true;
            this->linkLabel1->Text = L"Сайт університету";
            this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(450, 30);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(164, 150);
            this->pictureBox1->TabIndex = 13;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox2->Location = System::Drawing::Point(620, 30);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(150, 150);
            this->pictureBox2->TabIndex = 14;
            this->pictureBox2->TabStop = false;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(450, 200);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(320, 80);
            this->textBox3->TabIndex = 15;
            this->textBox3->Text = L"Тут буде інформація про предмети, що вивчаються...";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(450, 300);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(320, 80);
            this->textBox4->TabIndex = 16;
            this->textBox4->Text = L"Тут буде інформація про мене...";
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(30, 360);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(120, 35);
            this->button1->TabIndex = 17;
            this->button1->Text = L"Я вивчаю";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(170, 360);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(120, 35);
            this->button2->TabIndex = 18;
            this->button2->Text = L"Про мене";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // checkedListBox1
            // 
            this->checkedListBox1->FormattingEnabled = true;
            this->checkedListBox1->Location = System::Drawing::Point(30, 420);
            this->checkedListBox1->Name = L"checkedListBox1";
            this->checkedListBox1->Size = System::Drawing::Size(250, 154);
            this->checkedListBox1->TabIndex = 19;
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(320, 420);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(250, 147);
            this->listBox1->TabIndex = 20;
            this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
            // 
            // labelCourse
            // 
            this->labelCourse->AutoSize = true;
            this->labelCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelCourse->Location = System::Drawing::Point(30, 230);
            this->labelCourse->Name = L"labelCourse";
            this->labelCourse->Size = System::Drawing::Size(48, 17);
            this->labelCourse->TabIndex = 22;
            this->labelCourse->Text = L"Курс:";
            // 
            // labelGroup
            // 
            this->labelGroup->AutoSize = true;
            this->labelGroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelGroup->Location = System::Drawing::Point(30, 270);
            this->labelGroup->Name = L"labelGroup";
            this->labelGroup->Size = System::Drawing::Size(57, 17);
            this->labelGroup->TabIndex = 21;
            this->labelGroup->Text = L"Група:";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(800, 600);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->checkedListBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->linkLabel1);
            this->Controls->Add(this->comboBox4);
            this->Controls->Add(this->comboBox3);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->maskedTextBox1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->labelGroup);
            this->Controls->Add(this->labelCourse);
            this->Name = L"MyForm";
            this->Text = L"Анкета студента";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        // Обробник події для linkLabel1
        System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
            try {
                // Відкриваємо сайт університету в браузері
                Process::Start("https://vspu.edu.ua");
            }
            catch (Exception^ ex) {
                MessageBox::Show("Не вдалося відкрити посилання: " + ex->Message, "Помилка");
            }
        }

        // Обробник події для кнопки "Я вивчаю"
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ subjects = "Я вивчаю наступні предмети:\r\n";
            bool hasSelected = false;

            for (int i = 0; i < checkedListBox1->Items->Count; i++) {
                if (checkedListBox1->GetItemChecked(i)) {
                    subjects += "• " + checkedListBox1->Items[i]->ToString() + "\r\n";
                    hasSelected = true;
                }
            }

            if (!hasSelected) {
                subjects += "Жоден предмет не вибрано!";
            }

            textBox3->Text = subjects;

            // Оновлюємо listBox1
            listBox1->Items->Clear();
            for (int i = 0; i < checkedListBox1->Items->Count; i++) {
                if (checkedListBox1->GetItemChecked(i)) {
                    listBox1->Items->Add(checkedListBox1->Items[i]);
                }
            }
        }

        // Обробник події для кнопки "Про мене"
        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ aboutMe = "Інформація про мене:\r\n";
            aboutMe += "Прізвище: " + (String::IsNullOrEmpty(textBox1->Text) ? "Не вказано" : textBox1->Text) + "\r\n";
            aboutMe += "Ім'я: " + (String::IsNullOrEmpty(textBox2->Text) ? "Не вказано" : textBox2->Text) + "\r\n";
            aboutMe += "Дата народження: " + (String::IsNullOrEmpty(maskedTextBox1->Text) ? "Не вказано" : maskedTextBox1->Text) + "\r\n";
            aboutMe += "Країна: " + (comboBox1->SelectedItem == nullptr ? "Не обрано" : comboBox1->SelectedItem->ToString()) + "\r\n";
            aboutMe += "Спеціальність: " + (comboBox4->SelectedItem == nullptr ? "Не обрано" : comboBox4->SelectedItem->ToString()) + "\r\n";
            aboutMe += "Курс: " + (comboBox2->SelectedItem == nullptr ? "Не обрано" : comboBox2->SelectedItem->ToString()) + "\r\n";
            aboutMe += "Група: " + (comboBox3->SelectedItem == nullptr ? "Не обрано" : comboBox3->SelectedItem->ToString()) + "\r\n";

            textBox4->Text = aboutMe;
        }

        // Обробник події для listBox1
        System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            if (listBox1->SelectedItem != nullptr) {
                String^ selectedSubject = listBox1->SelectedItem->ToString();
                MessageBox::Show("Обраний предмет: " + selectedSubject, "Інформація про предмет");
            }
        }
    };
}