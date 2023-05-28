#include "MyForm.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
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
     std::ofstream file("C:\\Users\\muham\\Desktop\\C++\\contact_management-main\\Contact Manager\\contact_manager\\contact_manager\\contacts.txt", std::ios::app);
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
 void MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
 {
     search_result->Show();
 }

 int search(String^ searchTerm)
 {
     std::vector<std::string> names;
     std::vector<std::string> phoneNumbers;
     std::vector<std::string> emails;

     std::ifstream inputFile("contacts.txt");  // Replace with the actual file name

     if (!inputFile.is_open()) {
         std::cout << "Failed to open the file." << std::endl;
         return 1;
     }

     std::string line;
     std::string currentName;
     std::string currentPhoneNumber;
     std::string currentEmail;
     while (std::getline(inputFile, line)) {
         if (line.find("Name: ") != std::string::npos) {
             currentName = line.substr(6);
         }
         else if (line.find("Phone Number: ") != std::string::npos) {
             currentPhoneNumber = line.substr(14);
         }
         else if (line.find("Email: ") != std::string::npos) {
             currentEmail = line.substr(7);
         }
         else if (line.find("---------------------") != std::string::npos) {
             names.push_back(currentName);
             phoneNumbers.push_back(currentPhoneNumber);
             emails.push_back(currentEmail);
             currentName = "";
             currentPhoneNumber = "";
             currentEmail = "";
         }
     }

     inputFile.close();

     std::string nativeSearchTerm = msclr::interop::marshal_as<std::string>(searchTerm);

     bool found = false;
     for (size_t i = 0; i < names.size(); ++i) {
         if ( names[i] ==  nativeSearchTerm || phoneNumbers[i] == nativeSearchTerm || emails[i] == nativeSearchTerm) {
             std::cout << "Name: " << names[i] << std::endl;
             std::cout << "Phone Number: " << phoneNumbers[i] << std::endl;
             std::cout << "Email: " << emails[i] << std::endl;
             found = true;
             break;
         }
     }

     if (!found) {
         std::cout << "Contact not found." << std::endl;
     }

     return 0;
 }

 
 

 

