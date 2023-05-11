#include "MyForm.h"
#include <fstream>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace contactmanager;
using namespace System::Windows::Forms;
 [STAThread]

 void main(array<String^>^ args) {
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);
	 contactmanager::MyForm form;
	 Application::Run(% form);
 }

 Void MyForm::saveContactBtn_Click(System::Object^ sender, System::EventArgs^ e)
 {

     if (!(String::IsNullOrWhiteSpace(newContact_name->Text) || String::IsNullOrWhiteSpace(newContact_phone->Text) || String::IsNullOrWhiteSpace(newContact_email->Text))) {
         saveContactBtn->Enabled = true;
         String^ name = newContact_name->Text;
         String^ phoneNumber = newContact_phone->Text;
         String^ email = newContact_email->Text;
         newContact_name->Text = "";
         newContact_phone->Text = "";
         newContact_email->Text = "";
         SaveContactToFile(name, phoneNumber, email);
     }
 }

 // Function to save contact information to a text file
 void MyForm::SaveContactToFile(String^ name, String^ phoneNumber, String^ email)
 {
     std::ofstream file("E:\\Contact Manager\\contact_manager\\contact_manager\\contacts.txt", std::ios::app);
     if (file.is_open())
     {
         std::string nativeName = msclr::interop::marshal_as<std::string>(name);
         std::string nativePhoneNumber = msclr::interop::marshal_as<std::string>(phoneNumber);
         std::string nativeEmail = msclr::interop::marshal_as<std::string>(email);

         file << "Name: " << nativeName << std::endl;
         file << "Phone Number: " << nativePhoneNumber << std::endl;
         file << "Email: " << nativeEmail << std::endl;
         file << "---------------------" << std::endl;

         file.close();
     }
     else
     {
         MessageBox::Show("Failed to open the file for writing.");
     }
 }
