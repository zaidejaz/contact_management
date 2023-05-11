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


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->addnewcontact->SuspendLayout();
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
			this->main_title->Location = System::Drawing::Point(196, 19);
			this->main_title->Name = L"main_title";
			this->main_title->Size = System::Drawing::Size(295, 46);
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
			this->mainPage_contactListlabel->Location = System::Drawing::Point(92, 120);
			this->mainPage_contactListlabel->Name = L"mainPage_contactListlabel";
			this->mainPage_contactListlabel->Size = System::Drawing::Size(144, 29);
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
			this->mainPage_searchForContactLabel->Location = System::Drawing::Point(92, 160);
			this->mainPage_searchForContactLabel->Name = L"mainPage_searchForContactLabel";
			this->mainPage_searchForContactLabel->Size = System::Drawing::Size(211, 29);
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
			this->mainPage_addnewContactLabel->Size = System::Drawing::Size(200, 29);
			this->mainPage_addnewContactLabel->TabIndex = 4;
			this->mainPage_addnewContactLabel->Text = L"Add New Contact";
			this->mainPage_addnewContactLabel->Click += gcnew System::EventHandler(this, &MyForm::mainPage_addnewContactLabel_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(473, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// addnewcontact
			// 
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
			this->addnewcontact->Location = System::Drawing::Point(12, 12);
			this->addnewcontact->Name = L"addnewcontact";
			this->addnewcontact->Size = System::Drawing::Size(618, 403);
			this->addnewcontact->TabIndex = 6;
			this->addnewcontact->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
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
			this->label8->Size = System::Drawing::Size(65, 25);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Email";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// newContact_email
			// 
			this->newContact_email->Location = System::Drawing::Point(178, 176);
			this->newContact_email->Name = L"newContact_email";
			this->newContact_email->Size = System::Drawing::Size(232, 22);
			this->newContact_email->TabIndex = 5;
			this->newContact_email->TextChanged += gcnew System::EventHandler(this, &MyForm::newContact_email_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(61, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Phone No";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// newContact_phone
			// 
			this->newContact_phone->Location = System::Drawing::Point(178, 135);
			this->newContact_phone->Name = L"newContact_phone";
			this->newContact_phone->Size = System::Drawing::Size(232, 22);
			this->newContact_phone->TabIndex = 3;
			this->newContact_phone->TextChanged += gcnew System::EventHandler(this, &MyForm::newContact_phone_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(63, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Name";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// newContact_name
			// 
			this->newContact_name->Location = System::Drawing::Point(178, 97);
			this->newContact_name->Name = L"newContact_name";
			this->newContact_name->Size = System::Drawing::Size(232, 22);
			this->newContact_name->TabIndex = 1;
			this->newContact_name->TextChanged += gcnew System::EventHandler(this, &MyForm::newContact_name_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(171, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 38);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Add New Contact";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_2);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(618, 403);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mainPage_searchForContactLabel_Click(System::Object^ sender, System::EventArgs^ e) {
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
	 addnewcontact->Show();
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
};

}
