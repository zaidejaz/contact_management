#pragma once

namespace contactmanager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for contact_manager
	/// </summary>
	public ref class contact_manager : public System::Windows::Forms::Form
	{
	public:
		contact_manager(void)
		{
			InitializeComponent();
			addNewContact_Panel->Hide();
			searchContact_Panel->Hide();
			searchedResult_Panel->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~contact_manager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ contactManager;
	protected:
	private: System::Windows::Forms::Label^ main_addNewContact;
	private: System::Windows::Forms::Label^ main_searchContact;
	private: System::Windows::Forms::Label^ main_contactList;
	private: System::Windows::Forms::Button^ main_exit_btn;
	private: System::Windows::Forms::Panel^ addNewContact_Panel;

	private: System::Windows::Forms::Button^ addNewContact_exitBtn;
	private: System::Windows::Forms::Button^ addNewContact_backBtn;
	private: System::Windows::Forms::Button^ addNewContact_btn;
	private: System::Windows::Forms::TextBox^ addNewContact_email_textBox;
	private: System::Windows::Forms::TextBox^ addNewContact_phone_textBox;
	private: System::Windows::Forms::TextBox^ addNewContact_name_textBox;
	private: System::Windows::Forms::Label^ addNewContact_email;
	private: System::Windows::Forms::Label^ addNewContact_phone;
	private: System::Windows::Forms::Label^ addNewContact_name;
	private: System::Windows::Forms::Label^ addNewContact;
	private: System::Windows::Forms::Panel^ searchContact_Panel;
	private: System::Windows::Forms::Button^ searchContact_back_btn;
	private: System::Windows::Forms::Button^ searchContact_exit_btn;
	private: System::Windows::Forms::Button^ searchContact_btn;
	private: System::Windows::Forms::TextBox^ searchContact_Textbox;
	private: System::Windows::Forms::Label^ searchContact_Label;
	private: System::Windows::Forms::Panel^ searchedResult_Panel;
	private: System::Windows::Forms::Button^ searchedResult_close_btn;
	private: System::Windows::Forms::TextBox^ searchedResult_email_Textbox;
	private: System::Windows::Forms::TextBox^ searchedResult_phoneno_Textbox;
	private: System::Windows::Forms::TextBox^ searchedResult_name_Textbox;



	private: System::Windows::Forms::Label^ searchedResult_email_Label;
	private: System::Windows::Forms::Label^ serachedResult_Phoneno_label;
	private: System::Windows::Forms::Label^ searchedResult_name_Label;
	private: System::Windows::Forms::Label^ searchedResult_Label;

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
			this->contactManager = (gcnew System::Windows::Forms::Label());
			this->main_addNewContact = (gcnew System::Windows::Forms::Label());
			this->main_searchContact = (gcnew System::Windows::Forms::Label());
			this->main_contactList = (gcnew System::Windows::Forms::Label());
			this->main_exit_btn = (gcnew System::Windows::Forms::Button());
			this->addNewContact_Panel = (gcnew System::Windows::Forms::Panel());
			this->addNewContact_exitBtn = (gcnew System::Windows::Forms::Button());
			this->addNewContact_backBtn = (gcnew System::Windows::Forms::Button());
			this->addNewContact_btn = (gcnew System::Windows::Forms::Button());
			this->addNewContact_email_textBox = (gcnew System::Windows::Forms::TextBox());
			this->addNewContact_phone_textBox = (gcnew System::Windows::Forms::TextBox());
			this->addNewContact_name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->addNewContact_email = (gcnew System::Windows::Forms::Label());
			this->addNewContact_phone = (gcnew System::Windows::Forms::Label());
			this->addNewContact_name = (gcnew System::Windows::Forms::Label());
			this->addNewContact = (gcnew System::Windows::Forms::Label());
			this->searchContact_Panel = (gcnew System::Windows::Forms::Panel());
			this->searchedResult_Panel = (gcnew System::Windows::Forms::Panel());
			this->searchedResult_close_btn = (gcnew System::Windows::Forms::Button());
			this->searchedResult_email_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->searchedResult_phoneno_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->searchedResult_name_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->searchedResult_email_Label = (gcnew System::Windows::Forms::Label());
			this->serachedResult_Phoneno_label = (gcnew System::Windows::Forms::Label());
			this->searchedResult_name_Label = (gcnew System::Windows::Forms::Label());
			this->searchedResult_Label = (gcnew System::Windows::Forms::Label());
			this->searchContact_back_btn = (gcnew System::Windows::Forms::Button());
			this->searchContact_exit_btn = (gcnew System::Windows::Forms::Button());
			this->searchContact_btn = (gcnew System::Windows::Forms::Button());
			this->searchContact_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->searchContact_Label = (gcnew System::Windows::Forms::Label());
			this->addNewContact_Panel->SuspendLayout();
			this->searchContact_Panel->SuspendLayout();
			this->searchedResult_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// contactManager
			// 
			this->contactManager->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->contactManager->AutoSize = true;
			this->contactManager->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactManager->Location = System::Drawing::Point(55, 9);
			this->contactManager->Name = L"contactManager";
			this->contactManager->Size = System::Drawing::Size(642, 90);
			this->contactManager->TabIndex = 0;
			this->contactManager->Text = L"Contact Manager";
			// 
			// main_addNewContact
			// 
			this->main_addNewContact->AutoSize = true;
			this->main_addNewContact->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->main_addNewContact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->main_addNewContact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_addNewContact->Location = System::Drawing::Point(206, 139);
			this->main_addNewContact->Name = L"main_addNewContact";
			this->main_addNewContact->Padding = System::Windows::Forms::Padding(4);
			this->main_addNewContact->Size = System::Drawing::Size(332, 55);
			this->main_addNewContact->TabIndex = 1;
			this->main_addNewContact->Text = L"Add New Contact";
			this->main_addNewContact->Click += gcnew System::EventHandler(this, &contact_manager::main_addNewContact_Click);
			// 
			// main_searchContact
			// 
			this->main_searchContact->AutoSize = true;
			this->main_searchContact->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->main_searchContact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->main_searchContact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_searchContact->Location = System::Drawing::Point(192, 205);
			this->main_searchContact->Name = L"main_searchContact";
			this->main_searchContact->Padding = System::Windows::Forms::Padding(4);
			this->main_searchContact->Size = System::Drawing::Size(360, 55);
			this->main_searchContact->TabIndex = 2;
			this->main_searchContact->Text = L"Search For Contact";
			this->main_searchContact->Click += gcnew System::EventHandler(this, &contact_manager::main_searchContact_Click);
			// 
			// main_contactList
			// 
			this->main_contactList->AutoSize = true;
			this->main_contactList->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->main_contactList->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_contactList->Location = System::Drawing::Point(246, 271);
			this->main_contactList->Name = L"main_contactList";
			this->main_contactList->Padding = System::Windows::Forms::Padding(4);
			this->main_contactList->Size = System::Drawing::Size(240, 55);
			this->main_contactList->TabIndex = 3;
			this->main_contactList->Text = L"Contact List";
			// 
			// main_exit_btn
			// 
			this->main_exit_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_exit_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->main_exit_btn->Location = System::Drawing::Point(541, 359);
			this->main_exit_btn->Name = L"main_exit_btn";
			this->main_exit_btn->Size = System::Drawing::Size(122, 40);
			this->main_exit_btn->TabIndex = 4;
			this->main_exit_btn->Text = L"Exit";
			this->main_exit_btn->UseVisualStyleBackColor = true;
			this->main_exit_btn->Click += gcnew System::EventHandler(this, &contact_manager::main_exit_btn_Click);
			// 
			// addNewContact_Panel
			// 
			this->addNewContact_Panel->Controls->Add(this->addNewContact_exitBtn);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_backBtn);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_btn);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_email_textBox);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_phone_textBox);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_name_textBox);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_email);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_phone);
			this->addNewContact_Panel->Controls->Add(this->addNewContact_name);
			this->addNewContact_Panel->Controls->Add(this->addNewContact);
			this->addNewContact_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addNewContact_Panel->Location = System::Drawing::Point(0, 0);
			this->addNewContact_Panel->Name = L"addNewContact_Panel";
			this->addNewContact_Panel->Size = System::Drawing::Size(722, 432);
			this->addNewContact_Panel->TabIndex = 5;
			// 
			// addNewContact_exitBtn
			// 
			this->addNewContact_exitBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewContact_exitBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addNewContact_exitBtn->Location = System::Drawing::Point(569, 359);
			this->addNewContact_exitBtn->Name = L"addNewContact_exitBtn";
			this->addNewContact_exitBtn->Size = System::Drawing::Size(113, 36);
			this->addNewContact_exitBtn->TabIndex = 9;
			this->addNewContact_exitBtn->Text = L"Exit";
			this->addNewContact_exitBtn->UseVisualStyleBackColor = true;
			this->addNewContact_exitBtn->Click += gcnew System::EventHandler(this, &contact_manager::addNewContact_exitBtn_Click);
			// 
			// addNewContact_backBtn
			// 
			this->addNewContact_backBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewContact_backBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addNewContact_backBtn->Location = System::Drawing::Point(56, 360);
			this->addNewContact_backBtn->Name = L"addNewContact_backBtn";
			this->addNewContact_backBtn->Size = System::Drawing::Size(113, 36);
			this->addNewContact_backBtn->TabIndex = 8;
			this->addNewContact_backBtn->Text = L"Back";
			this->addNewContact_backBtn->UseVisualStyleBackColor = true;
			this->addNewContact_backBtn->Click += gcnew System::EventHandler(this, &contact_manager::addNewContact_backBtn_Click);
			// 
			// addNewContact_btn
			// 
			this->addNewContact_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewContact_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addNewContact_btn->Location = System::Drawing::Point(254, 270);
			this->addNewContact_btn->Name = L"addNewContact_btn";
			this->addNewContact_btn->Size = System::Drawing::Size(226, 36);
			this->addNewContact_btn->TabIndex = 7;
			this->addNewContact_btn->Text = L"Add New Contact";
			this->addNewContact_btn->UseVisualStyleBackColor = true;
			this->addNewContact_btn->Click += gcnew System::EventHandler(this, &contact_manager::addNewContact_btn_Click);
			// 
			// addNewContact_email_textBox
			// 
			this->addNewContact_email_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addNewContact_email_textBox->Location = System::Drawing::Point(283, 205);
			this->addNewContact_email_textBox->Name = L"addNewContact_email_textBox";
			this->addNewContact_email_textBox->Size = System::Drawing::Size(255, 27);
			this->addNewContact_email_textBox->TabIndex = 6;
			this->addNewContact_email_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &contact_manager::addNewContact_email_textBox_KeyPress);
			// 
			// addNewContact_phone_textBox
			// 
			this->addNewContact_phone_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addNewContact_phone_textBox->Location = System::Drawing::Point(283, 163);
			this->addNewContact_phone_textBox->Multiline = true;
			this->addNewContact_phone_textBox->Name = L"addNewContact_phone_textBox";
			this->addNewContact_phone_textBox->Size = System::Drawing::Size(255, 26);
			this->addNewContact_phone_textBox->TabIndex = 5;
			this->addNewContact_phone_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &contact_manager::addNewContact_phone_textBox_KeyPress);
			// 
			// addNewContact_name_textBox
			// 
			this->addNewContact_name_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addNewContact_name_textBox->Location = System::Drawing::Point(283, 120);
			this->addNewContact_name_textBox->Name = L"addNewContact_name_textBox";
			this->addNewContact_name_textBox->Size = System::Drawing::Size(255, 27);
			this->addNewContact_name_textBox->TabIndex = 4;
			this->addNewContact_name_textBox->TextChanged += gcnew System::EventHandler(this, &contact_manager::addNewContact_name_textBox_TextChanged);
			this->addNewContact_name_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &contact_manager::addNewContact_name_textBox_KeyPress);
			// 
			// addNewContact_email
			// 
			this->addNewContact_email->AutoSize = true;
			this->addNewContact_email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewContact_email->Location = System::Drawing::Point(128, 203);
			this->addNewContact_email->Name = L"addNewContact_email";
			this->addNewContact_email->Size = System::Drawing::Size(85, 32);
			this->addNewContact_email->TabIndex = 3;
			this->addNewContact_email->Text = L"Email";
			// 
			// addNewContact_phone
			// 
			this->addNewContact_phone->AutoSize = true;
			this->addNewContact_phone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewContact_phone->Location = System::Drawing::Point(128, 160);
			this->addNewContact_phone->Name = L"addNewContact_phone";
			this->addNewContact_phone->Size = System::Drawing::Size(138, 32);
			this->addNewContact_phone->TabIndex = 2;
			this->addNewContact_phone->Text = L"Phone No ";
			// 
			// addNewContact_name
			// 
			this->addNewContact_name->AutoSize = true;
			this->addNewContact_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewContact_name->Location = System::Drawing::Point(130, 114);
			this->addNewContact_name->Name = L"addNewContact_name";
			this->addNewContact_name->Size = System::Drawing::Size(82, 32);
			this->addNewContact_name->TabIndex = 1;
			this->addNewContact_name->Text = L"Name";
			// 
			// addNewContact
			// 
			this->addNewContact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addNewContact->AutoSize = true;
			this->addNewContact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewContact->Location = System::Drawing::Point(181, 18);
			this->addNewContact->Name = L"addNewContact";
			this->addNewContact->Size = System::Drawing::Size(382, 53);
			this->addNewContact->TabIndex = 0;
			this->addNewContact->Text = L"Add New Contact";
			// 
			// searchContact_Panel
			// 
			this->searchContact_Panel->Controls->Add(this->searchedResult_Panel);
			this->searchContact_Panel->Controls->Add(this->searchContact_back_btn);
			this->searchContact_Panel->Controls->Add(this->searchContact_exit_btn);
			this->searchContact_Panel->Controls->Add(this->searchContact_btn);
			this->searchContact_Panel->Controls->Add(this->searchContact_Textbox);
			this->searchContact_Panel->Controls->Add(this->searchContact_Label);
			this->searchContact_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchContact_Panel->Location = System::Drawing::Point(0, 0);
			this->searchContact_Panel->Name = L"searchContact_Panel";
			this->searchContact_Panel->Size = System::Drawing::Size(722, 432);
			this->searchContact_Panel->TabIndex = 6;
			// 
			// searchedResult_Panel
			// 
			this->searchedResult_Panel->Controls->Add(this->searchedResult_close_btn);
			this->searchedResult_Panel->Controls->Add(this->searchedResult_email_Textbox);
			this->searchedResult_Panel->Controls->Add(this->searchedResult_phoneno_Textbox);
			this->searchedResult_Panel->Controls->Add(this->searchedResult_name_Textbox);
			this->searchedResult_Panel->Controls->Add(this->searchedResult_email_Label);
			this->searchedResult_Panel->Controls->Add(this->serachedResult_Phoneno_label);
			this->searchedResult_Panel->Controls->Add(this->searchedResult_name_Label);
			this->searchedResult_Panel->Controls->Add(this->searchedResult_Label);
			this->searchedResult_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchedResult_Panel->Location = System::Drawing::Point(0, 0);
			this->searchedResult_Panel->Name = L"searchedResult_Panel";
			this->searchedResult_Panel->Size = System::Drawing::Size(722, 432);
			this->searchedResult_Panel->TabIndex = 5;
			// 
			// searchedResult_close_btn
			// 
			this->searchedResult_close_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchedResult_close_btn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->searchedResult_close_btn->Location = System::Drawing::Point(544, 353);
			this->searchedResult_close_btn->Name = L"searchedResult_close_btn";
			this->searchedResult_close_btn->Size = System::Drawing::Size(119, 37);
			this->searchedResult_close_btn->TabIndex = 7;
			this->searchedResult_close_btn->Text = L"Close";
			this->searchedResult_close_btn->UseVisualStyleBackColor = true;
			this->searchedResult_close_btn->Click += gcnew System::EventHandler(this, &contact_manager::searchedResult_close_btn_Click);
			// 
			// searchedResult_email_Textbox
			// 
			this->searchedResult_email_Textbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchedResult_email_Textbox->Location = System::Drawing::Point(282, 253);
			this->searchedResult_email_Textbox->Name = L"searchedResult_email_Textbox";
			this->searchedResult_email_Textbox->ReadOnly = true;
			this->searchedResult_email_Textbox->Size = System::Drawing::Size(225, 27);
			this->searchedResult_email_Textbox->TabIndex = 6;
			// 
			// searchedResult_phoneno_Textbox
			// 
			this->searchedResult_phoneno_Textbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchedResult_phoneno_Textbox->Location = System::Drawing::Point(282, 197);
			this->searchedResult_phoneno_Textbox->Name = L"searchedResult_phoneno_Textbox";
			this->searchedResult_phoneno_Textbox->ReadOnly = true;
			this->searchedResult_phoneno_Textbox->Size = System::Drawing::Size(225, 27);
			this->searchedResult_phoneno_Textbox->TabIndex = 5;
			// 
			// searchedResult_name_Textbox
			// 
			this->searchedResult_name_Textbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchedResult_name_Textbox->Location = System::Drawing::Point(282, 139);
			this->searchedResult_name_Textbox->Name = L"searchedResult_name_Textbox";
			this->searchedResult_name_Textbox->ReadOnly = true;
			this->searchedResult_name_Textbox->Size = System::Drawing::Size(225, 27);
			this->searchedResult_name_Textbox->TabIndex = 4;
			// 
			// searchedResult_email_Label
			// 
			this->searchedResult_email_Label->AutoSize = true;
			this->searchedResult_email_Label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchedResult_email_Label->Location = System::Drawing::Point(115, 248);
			this->searchedResult_email_Label->Name = L"searchedResult_email_Label";
			this->searchedResult_email_Label->Size = System::Drawing::Size(85, 32);
			this->searchedResult_email_Label->TabIndex = 3;
			this->searchedResult_email_Label->Text = L"Email";
			// 
			// serachedResult_Phoneno_label
			// 
			this->serachedResult_Phoneno_label->AutoSize = true;
			this->serachedResult_Phoneno_label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->serachedResult_Phoneno_label->Location = System::Drawing::Point(116, 192);
			this->serachedResult_Phoneno_label->Name = L"serachedResult_Phoneno_label";
			this->serachedResult_Phoneno_label->Size = System::Drawing::Size(131, 32);
			this->serachedResult_Phoneno_label->TabIndex = 2;
			this->serachedResult_Phoneno_label->Text = L"Phone No";
			// 
			// searchedResult_name_Label
			// 
			this->searchedResult_name_Label->AutoSize = true;
			this->searchedResult_name_Label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchedResult_name_Label->Location = System::Drawing::Point(118, 134);
			this->searchedResult_name_Label->Name = L"searchedResult_name_Label";
			this->searchedResult_name_Label->Size = System::Drawing::Size(82, 32);
			this->searchedResult_name_Label->TabIndex = 1;
			this->searchedResult_name_Label->Text = L"Name";
			// 
			// searchedResult_Label
			// 
			this->searchedResult_Label->AutoSize = true;
			this->searchedResult_Label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchedResult_Label->Location = System::Drawing::Point(183, 31);
			this->searchedResult_Label->Name = L"searchedResult_Label";
			this->searchedResult_Label->Size = System::Drawing::Size(348, 53);
			this->searchedResult_Label->TabIndex = 0;
			this->searchedResult_Label->Text = L"Searched Result";
			// 
			// searchContact_back_btn
			// 
			this->searchContact_back_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchContact_back_btn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->searchContact_back_btn->Location = System::Drawing::Point(70, 361);
			this->searchContact_back_btn->Name = L"searchContact_back_btn";
			this->searchContact_back_btn->Size = System::Drawing::Size(100, 33);
			this->searchContact_back_btn->TabIndex = 4;
			this->searchContact_back_btn->Text = L"Back";
			this->searchContact_back_btn->UseVisualStyleBackColor = true;
			this->searchContact_back_btn->Click += gcnew System::EventHandler(this, &contact_manager::searchContact_back_btn_Click);
			// 
			// searchContact_exit_btn
			// 
			this->searchContact_exit_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchContact_exit_btn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->searchContact_exit_btn->Location = System::Drawing::Point(567, 363);
			this->searchContact_exit_btn->Name = L"searchContact_exit_btn";
			this->searchContact_exit_btn->Size = System::Drawing::Size(96, 33);
			this->searchContact_exit_btn->TabIndex = 3;
			this->searchContact_exit_btn->Text = L"Exit";
			this->searchContact_exit_btn->UseVisualStyleBackColor = true;
			this->searchContact_exit_btn->Click += gcnew System::EventHandler(this, &contact_manager::searchContact_exit_btn_Click);
			// 
			// searchContact_btn
			// 
			this->searchContact_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchContact_btn->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->searchContact_btn->Location = System::Drawing::Point(295, 233);
			this->searchContact_btn->Name = L"searchContact_btn";
			this->searchContact_btn->Size = System::Drawing::Size(130, 40);
			this->searchContact_btn->TabIndex = 2;
			this->searchContact_btn->Text = L"Search";
			this->searchContact_btn->UseVisualStyleBackColor = true;
			this->searchContact_btn->Click += gcnew System::EventHandler(this, &contact_manager::searchContact_btn_Click);
			// 
			// searchContact_Textbox
			// 
			this->searchContact_Textbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->searchContact_Textbox->Location = System::Drawing::Point(139, 181);
			this->searchContact_Textbox->Name = L"searchContact_Textbox";
			this->searchContact_Textbox->Size = System::Drawing::Size(455, 34);
			this->searchContact_Textbox->TabIndex = 1;
			this->searchContact_Textbox->TextChanged += gcnew System::EventHandler(this, &contact_manager::searchContact_Textbox_TextChanged);
			this->searchContact_Textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &contact_manager::searchContact_Textbox_KeyPress);
			// 
			// searchContact_Label
			// 
			this->searchContact_Label->AutoSize = true;
			this->searchContact_Label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchContact_Label->Location = System::Drawing::Point(99, 31);
			this->searchContact_Label->Name = L"searchContact_Label";
			this->searchContact_Label->Size = System::Drawing::Size(529, 68);
			this->searchContact_Label->TabIndex = 0;
			this->searchContact_Label->Text = L"Search For Contact";
			// 
			// contact_manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(722, 432);
			this->Controls->Add(this->searchContact_Panel);
			this->Controls->Add(this->addNewContact_Panel);
			this->Controls->Add(this->main_exit_btn);
			this->Controls->Add(this->main_contactList);
			this->Controls->Add(this->main_searchContact);
			this->Controls->Add(this->main_addNewContact);
			this->Controls->Add(this->contactManager);
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"contact_manager";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"contact_manager";
			this->addNewContact_Panel->ResumeLayout(false);
			this->addNewContact_Panel->PerformLayout();
			this->searchContact_Panel->ResumeLayout(false);
			this->searchContact_Panel->PerformLayout();
			this->searchedResult_Panel->ResumeLayout(false);
			this->searchedResult_Panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addNewContact_exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void addNewContact_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		addNewContact_Panel->Hide();
	}
	System::Void addNewContact_btn_Click(System::Object^ sender, System::EventArgs^ e);
	void SaveContactToFile(String^ name, String^ phoneNumber, String^ email);

	private: System::Void addNewContact_name_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void main_addNewContact_Click(System::Object^ sender, System::EventArgs^ e) {
		addNewContact_Panel->Show();
	}
private: System::Void main_exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void addNewContact_name_textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter)
	{
		addNewContact_phone_textBox->Focus();
	}
}
private: System::Void addNewContact_phone_textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter)
	{
		addNewContact_email_textBox->Focus();
	}
}
private: System::Void addNewContact_email_textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter)
	{
		addNewContact_btn->Focus();
	}
}
 System::Void searchContact_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void searchedResult_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	searchedResult_Panel->Hide();
}
private: System::Void main_searchContact_Click(System::Object^ sender, System::EventArgs^ e) {
	searchContact_Panel->Show();
}
private: System::Void searchContact_back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	searchContact_Panel->Hide();
}
private: System::Void searchContact_exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void searchContact_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void searchContact_Textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter)
	{
		searchContact_btn->Focus();
	};
}
};
}
