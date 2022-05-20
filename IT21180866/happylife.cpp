#include "happylife.h"
#include <cstring>

User::User()
{
	strcpy(Name, "");
	strcpy(ID, "");
	Contact = 0;
}

User::User(const char name[], const char id[], int contact)
{
	strcpy(Name, name);
	strcpy(ID, id);
	Contact = contact;
}

void User::DisplayDetails()
{
}

User::~User()
{
	//Destructer
}

WebEditor::WebEditor()
{
	webID = 0;
	strcpy(Email, "");
}

WebEditor::WebEditor(int ID, const char email[], const char name[], const char id[], int contact)
{
	webID = ID;
	strcat(Email, email);
}

void WebEditor::webEditorDetails()
{
}

WebEditor::~WebEditor()
{
}

Clinic::Clinic()
{
	strcpy(clinicID, "");
	strcpy(clinicName, "");
}

Clinic::Clinic(const char ID[], const char Name[])
{
	strcpy(clinicID, ID);
	strcpy(clinicName, Name);
}

void Clinic::viewClinicDetails()
{
}

Clinic::~Clinic()
{
}