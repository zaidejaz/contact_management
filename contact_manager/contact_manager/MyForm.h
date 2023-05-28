#pragma once

namespace contactmanager {

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
			addnewcontact->Hide();
			panel_exit->Hide();
			panel_search->Hide();
			search_result->Hide();
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
	private: System::Windows::Forms::Label^ main_title;
	private: System::Windows::Forms::Label^ mainPage_contactListlabel;
	private: System::Windows::Forms::Label^ mainPage_searchForContactLabel;
	private: System::Windows::Forms::Label^ mainPage_addnewContactLabel;
	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ addnewcontact;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ newContact_name;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ newContact_email;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ newContact_phone;
	private: System::Windows::Forms::Button^ saveContactBtn;


	private: System::Windows::Forms::Button^ goback;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel_exit;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel_search;
	private: System::Windows::Forms::TextBox^ textBox_search;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnSearch_back;
	private: System::Windows::Forms::Button^ button_search;

	private: System::Windows::Forms::Button^ btnSearch_exit;
	private: System::Windows::Forms::Panel^ search_result;
	private: System::Windows::Forms::TextBox^ reademail_search;
	private: System::Windows::Forms::TextBox^ readphoneno_search;
	private: System::Windows::Forms::TextBox^ readname_search;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Name;








	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->main_title = (gcnew System::Windows::Forms::Label());
			this->mainPage_contactListlabel = (gcnew System::Windows::Forms::Label());
			this->mainPage_searchForContactLabel = (gcnew System::Windows::Forms::Label());
			this->mainPage_addnewContactLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->addnewcontact = (gcnew System::Windows::Forms::Panel());
			this->panel_exit = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->goback = (gcnew System::Windows::Forms::Button());
			this->saveContactBtn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->newContact_email = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->newContact_phone = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->newContact_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel_search = (gcnew System::Windows::Forms::Panel());
			this->btnSearch_exit = (gcnew System::Windows::Forms::Button());
			this->btnSearch_back = (gcnew System::Windows::Forms::Button());
			this->button_search = (gcnew System::Windows::Forms::Button());
			this->textBox_search = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->search_result = (gcnew System::Windows::Forms::Panel());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->readname_search = (gcnew System::Windows::Forms::TextBox());
			this->readphoneno_search = (gcnew System::Windows::Forms::TextBox());
			this->reademail_search = (gcnew System::Windows::Forms::TextBox());
			this->addnewcontact->SuspendLayout();
			this->panel_exit->SuspendLayout();
			this->panel_search->SuspendLayout();
			this->search_result->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_title
			// 
			this->main_title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->main_title->AutoSize = true;
			this->main_title->BackColor = System::Drawing::Color::Transparent;
			this->main_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_title->Location = System::Drawing::Point(138, 14);
			this->main_title->Name = L"main_title";
			this->main_title->Size = System::Drawing::Size(232, 36);
			this->main_title->TabIndex = 0;
			this->main_title->Text = L"Contact Manager";
			this->main_title->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->main_title->Click += gcnew System::EventHandler(this, &MyForm::main_title_Click);
			// 
			// mainPage_contactListlabel
			// 
			this->mainPage_contactListlabel->AutoSize = true;
			this->mainPage_contactListlabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mainPage_contactListlabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainPage_contactListlabel->Location = System::Drawing::Point(92, 111);
			this->mainPage_contactListlabel->Name = L"mainPage_contactListlabel";
			this->mainPage_contactListlabel->Size = System::Drawing::Size(115, 23);
			this->mainPage_contactListlabel->TabIndex = 2;
			this->mainPage_contactListlabel->Text = L"Contact List";
			this->mainPage_contactListlabel->Click += gcnew System::EventHandler(this, &MyForm::mainPage_contactListlabel_Click);
			// 
			// mainPage_searchForContactLabel
			// 
			this->mainPage_searchForContactLabel->AutoSize = true;
			this->mainPage_searchForContactLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mainPage_searchForContactLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mainPage_searchForContactLabel->Location = System::Drawing::Point(92, 154);
			this->mainPage_searchForContactLabel->Name = L"mainPage_searchForContactLabel";
			this->mainPage_searchForContactLabel->Size = System::Drawing::Size(170, 23);
			this->mainPage_searchForContactLabel->TabIndex = 3;
			this->mainPage_searchForContactLabel->Text = L"Search for Contact";
			this->mainPage_searchForContactLabel->Click += gcnew System::EventHandler(this, &MyForm::mainPage_searchForContactLabel_Click);
			// 
			// mainPage_addnewContactLabel
			// 
			this->mainPage_addnewContactLabel->AutoSize = true;
			this->mainPage_addnewContactLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mainPage_addnewContactLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mainPage_addnewContactLabel->Location = System::Drawing::Point(92, 201);
			this->mainPage_addnewContactLabel->Name = L"mainPage_addnewContactLabel";
			this->mainPage_addnewContactLabel->Size = System::Drawing::Size(159, 23);
			this->mainPage_addnewContactLabel->TabIndex = 4;
			this->mainPage_addnewContactLabel->Text = L"Add New Contact";
			this->mainPage_addnewContactLabel->Click += gcnew System::EventHandler(this, &MyForm::mainPage_addnewContactLabel_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(407, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// addnewcontact
			// 
			this->addnewcontact->Controls->Add(this->panel_exit);
			this->addnewcontact->Controls->Add(this->button4);
			this->addnewcontact->Controls->Add(this->button2);
			this->addnewcontact->Controls->Add(this->button3);
			this->addnewcontact->Controls->Add(this->goback);
			this->addnewcontact->Controls->Add(this->saveContactBtn);
			this->addnewcontact->Controls->Add(this->label8);
			this->addnewcontact->Controls->Add(this->newContact_email);
			this->addnewcontact->Controls->Add(this->label7);
			this->addnewcontact->Controls->Add(this->newContact_phone);
			this->addnewcontact->Controls->Add(this->label6);
			this->addnewcontact->Controls->Add(this->newContact_name);
			this->addnewcontact->Controls->Add(this->label2);
			this->addnewcontact->Location = System::Drawing::Point(3, 11);
			this->addnewcontact->Name = L"addnewcontact";
			this->addnewcontact->Size = System::Drawing::Size(510, 337);
			this->addnewcontact->TabIndex = 6;
			this->addnewcontact->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel_exit
			// 
			this->panel_exit->BackColor = System::Drawing::Color::White;
			this->panel_exit->Controls->Add(this->button6);
			this->panel_exit->Controls->Add(this->button5);
			this->panel_exit->Controls->Add(this->label1);
			this->panel_exit->Location = System::Drawing::Point(106, 148);
			this->panel_exit->Name = L"panel_exit";
			this->panel_exit->Size = System::Drawing::Size(304, 116);
			this->panel_exit->TabIndex = 12;
			this->panel_exit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel_exit_Paint);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(206, 77);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"No";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(25, 77);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Yes";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(50, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Do You want to Exit\?";
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(12, 298);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(406, 298);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(473, 341);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// goback
			// 
			this->goback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->goback->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->goback->Location = System::Drawing::Point(339, 341);
			this->goback->Name = L"goback";
			this->goback->Size = System::Drawing::Size(119, 36);
			this->goback->TabIndex = 8;
			this->goback->Text = L"Go Back";
			this->goback->UseVisualStyleBackColor = true;
			this->goback->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// saveContactBtn
			// 
			this->saveContactBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveContactBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->saveContactBtn->Location = System::Drawing::Point(204, 223);
			this->saveContactBtn->Name = L"saveContactBtn";
			this->saveContactBtn->Size = System::Drawing::Size(119, 36);
			this->saveContactBtn->TabIndex = 7;
			this->saveContactBtn->Text = L"Add New Contact";
			this->saveContactBtn->UseVisualStyleBackColor = true;
			this->saveContactBtn->Click += gcnew System::EventHandler(this, &MyForm::saveContactBtn_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(61, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Email";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// newContact_email
			// 
			this->newContact_email->Location = System::Drawing::Point(178, 176);
			this->newContact_email->Name = L"newContact_email";
			this->newContact_email->Size = System::Drawing::Size(232, 20);
			this->newContact_email->TabIndex = 3;
			this->newContact_email->TextChanged += gcnew System::EventHandler(this, &MyForm::newContact_email_TextChanged);
			this->newContact_email->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::newContact_email_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(61, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 20);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Phone No";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// newContact_phone
			// 
			this->newContact_phone->Location = System::Drawing::Point(178, 135);
			this->newContact_phone->Name = L"newContact_phone";
			this->newContact_phone->Size = System::Drawing::Size(232, 20);
			this->newContact_phone->TabIndex = 2;
			this->newContact_phone->TextChanged += gcnew System::EventHandler(this, &MyForm::newContact_phone_TextChanged);
			this->newContact_phone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::newContact_phone_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(63, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Name";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// newContact_name
			// 
			this->newContact_name->Location = System::Drawing::Point(178, 97);
			this->newContact_name->Name = L"newContact_name";
			this->newContact_name->Size = System::Drawing::Size(232, 20);
			this->newContact_name->TabIndex = 1;
			this->newContact_name->TextChanged += gcnew System::EventHandler(this, &MyForm::newContact_name_TextChanged);
			this->newContact_name->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::newContact_name_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(141, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Add New Contact";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_2);
			// 
			// panel_search
			// 
			this->panel_search->Controls->Add(this->search_result);
			this->panel_search->Controls->Add(this->btnSearch_exit);
			this->panel_search->Controls->Add(this->btnSearch_back);
			this->panel_search->Controls->Add(this->button_search);
			this->panel_search->Controls->Add(this->textBox_search);
			this->panel_search->Controls->Add(this->label3);
			this->panel_search->Location = System::Drawing::Point(3, 11);
			this->panel_search->Name = L"panel_search";
			this->panel_search->Size = System::Drawing::Size(522, 367);
			this->panel_search->TabIndex = 7;
			this->panel_search->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel_search_Paint);
			// 
			// btnSearch_exit
			// 
			this->btnSearch_exit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSearch_exit->Location = System::Drawing::Point(386, 289);
			this->btnSearch_exit->Name = L"btnSearch_exit";
			this->btnSearch_exit->Size = System::Drawing::Size(75, 23);
			this->btnSearch_exit->TabIndex = 6;
			this->btnSearch_exit->Text = L"Exit";
			this->btnSearch_exit->UseVisualStyleBackColor = true;
			this->btnSearch_exit->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_exit_Click);
			// 
			// btnSearch_back
			// 
			this->btnSearch_back->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSearch_back->Location = System::Drawing::Point(55, 289);
			this->btnSearch_back->Name = L"btnSearch_back";
			this->btnSearch_back->Size = System::Drawing::Size(75, 23);
			this->btnSearch_back->TabIndex = 5;
			this->btnSearch_back->Text = L"Back";
			this->btnSearch_back->UseVisualStyleBackColor = true;
			this->btnSearch_back->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_back_Click);
			// 
			// button_search
			// 
			this->button_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_search->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_search->Location = System::Drawing::Point(194, 191);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(105, 35);
			this->button_search->TabIndex = 4;
			this->button_search->Text = L"Search";
			this->button_search->UseVisualStyleBackColor = true;
			this->button_search->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox_search
			// 
			this->textBox_search->Location = System::Drawing::Point(96, 127);
			this->textBox_search->Name = L"textBox_search";
			this->textBox_search->Size = System::Drawing::Size(315, 20);
			this->textBox_search->TabIndex = 2;
			this->textBox_search->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			this->textBox_search->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(128, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(260, 42);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Search Contact";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// search_result
			// 
			this->search_result->BackColor = System::Drawing::Color::White;
			this->search_result->Controls->Add(this->reademail_search);
			this->search_result->Controls->Add(this->readphoneno_search);
			this->search_result->Controls->Add(this->readname_search);
			this->search_result->Controls->Add(this->label9);
			this->search_result->Controls->Add(this->label5);
			this->search_result->Controls->Add(this->Name);
			this->search_result->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->search_result->Location = System::Drawing::Point(371, 49);
			this->search_result->Name = L"search_result";
			this->search_result->Size = System::Drawing::Size(269, 135);
			this->search_result->TabIndex = 7;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Location = System::Drawing::Point(26, 32);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(35, 13);
			this->Name->TabIndex = 0;
			this->Name->Text = L"Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Phone No";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 96);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Email";
			// 
			// readname_search
			// 
			this->readname_search->Location = System::Drawing::Point(85, 29);
			this->readname_search->Name = L"readname_search";
			this->readname_search->ReadOnly = true;
			this->readname_search->Size = System::Drawing::Size(161, 20);
			this->readname_search->TabIndex = 3;
			// 
			// readphoneno_search
			// 
			this->readphoneno_search->Location = System::Drawing::Point(85, 64);
			this->readphoneno_search->Name = L"readphoneno_search";
			this->readphoneno_search->ReadOnly = true;
			this->readphoneno_search->Size = System::Drawing::Size(161, 20);
			this->readphoneno_search->TabIndex = 4;
			// 
			// reademail_search
			// 
			this->reademail_search->Location = System::Drawing::Point(85, 96);
			this->reademail_search->Name = L"reademail_search";
			this->reademail_search->ReadOnly = true;
			this->reademail_search->Size = System::Drawing::Size(161, 20);
			this->reademail_search->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(525, 370);
			this->Controls->Add(this->panel_search);
			this->Controls->Add(this->addnewcontact);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->mainPage_addnewContactLabel);
			this->Controls->Add(this->mainPage_searchForContactLabel);
			this->Controls->Add(this->mainPage_contactListlabel);
			this->Controls->Add(this->main_title);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Contact Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->addnewcontact->ResumeLayout(false);
			this->addnewcontact->PerformLayout();
			this->panel_exit->ResumeLayout(false);
			this->panel_exit->PerformLayout();
			this->panel_search->ResumeLayout(false);
			this->panel_search->PerformLayout();
			this->search_result->ResumeLayout(false);
			this->search_result->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mainPage_searchForContactLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_search->Show();
	}
	private: System::Void mainPage_contactListlabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void newContact_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mainPage_addnewContactLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		mainPage_addnewContactLabel->ForeColor = System::Drawing::Color::Green;	 addnewcontact->Show();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		addnewcontact->Hide();
	}
	private: System::Void newContact_email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void main_title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void newContact_phone_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   System::Void saveContactBtn_Click(System::Object^ sender, System::EventArgs^ e);
		   void SaveContactToFile(String^ name, String^ phoneNumber, String^ email);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_exit->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		addnewcontact->Hide();
	}
	private: System::Void newContact_name_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter)
		{
			newContact_phone->Focus();
		}
	}
	private: System::Void newContact_phone_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter)
		{
			newContact_email->Focus();
		}
	}
	private: System::Void newContact_email_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter)
		{
			saveContactBtn->Focus();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_exit->Hide();
	}
	private: System::Void panel_search_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel_exit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSearch_back_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_search->Hide();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSearch_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_exit->Show();
	}
		   System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	};
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	};
}
