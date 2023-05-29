#include "contact_manager.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace contactmanager;
using namespace System::Windows::Forms;
[STAThread]

int search(String^ searchTerm);
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    contactmanager::contact_manager form;
    Application::Run(% form);
}

Void contact_manager::addNewContact_btn_Click(System::Object^ sender, System::EventArgs^ e)
{

    if (!(String::IsNullOrWhiteSpace(addNewContact_name_textBox->Text) || String::IsNullOrWhiteSpace(addNewContact_phone_textBox->Text) || String::IsNullOrWhiteSpace(addNewContact_email_textBox->Text))) {
        addNewContact_btn->Enabled = true;
        String^ name = addNewContact_name_textBox->Text;
        String^ phoneNumber = addNewContact_phone_textBox->Text;
        String^ email = addNewContact_email_textBox->Text;
        addNewContact_name_textBox->Text = "";
        addNewContact_phone_textBox->Text = "";
        addNewContact_email_textBox->Text = "";
        SaveContactToFile(name, phoneNumber, email);
    }
}

// Function to save contact information to a text file
void contact_manager::SaveContactToFile(String^ name, String^ phoneNumber, String^ email)
{
    std::ofstream file("E:\\Contact Management System\\Contacts.txt", std::ios::app);
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
std::string foundName;
std::string foundPhoneNumber;
std::string foundEmail;

void contact_manager::searchContact_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ searchTerm = searchContact_Textbox->Text;
    searchContact_Textbox->Text = "";
    searchedResult_Panel->Show();
    search(searchTerm);
    System::String^ managedFoundName = msclr::interop::marshal_as<System::String^>(foundName);
    searchedResult_name_Textbox->Text = managedFoundName;
    System::String^ managedFoundPhoneNumber = msclr::interop::marshal_as<System::String^>(foundPhoneNumber);
    searchedResult_phoneno_Textbox->Text = managedFoundPhoneNumber;
    System::String^ managedFoundEmail = msclr::interop::marshal_as<System::String^>(foundEmail);
    searchedResult_email_Textbox->Text = managedFoundEmail;
}
int search(String^ searchTerm)
{
    std::vector<std::string> names;
    std::vector<std::string> phoneNumbers;
    std::vector<std::string> emails;

    std::ifstream inputFile("E:\\Contact Management System\\contacts.txt");  // Replace with the actual file name

    if (!inputFile.is_open()) {
        MessageBox::Show("Failed to open the file for writing.");
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
        if (names[i] == nativeSearchTerm || phoneNumbers[i] == nativeSearchTerm || emails[i] == nativeSearchTerm) {
            foundName = names[i];
            foundPhoneNumber = phoneNumbers[i];
            foundEmail = emails[i];
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Contact not found." << std::endl;
    }

    return 0;
}
