#include "User.h"
#include <cstring>
#include <iostream>
using namespace std;

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
}


UnregisteredPatient::UnregisteredPatient()
{
	strcpy(PatientUsername, "");
	strcpy(PatientPassword, "");

}

UnregisteredPatient::UnregisteredPatient(const char pPatientUsername[], const char pPatientPassword[], const char name[], const char id[], int contact)
{
	strcpy(PatientUsername, pPatientUsername);
	strcpy(PatientPassword, pPatientPassword);
}

void UnregisteredPatient::displayDetails()
{
}

void UnregisteredPatient::login()
{
}

void UnregisteredPatient::logout()
{
}

char UnregisteredPatient::checkLoginDetails()
{
	return 0;
}

UnregisteredPatient::~UnregisteredPatient()
{
}

RegisteredPatient::RegisteredPatient()
{
    strcpy(dob, "");
    strcpy(Gender, "");
    strcpy(Email, "");
    strcpy(Address, "");
}

RegisteredPatient::RegisteredPatient(const char pdob[], const char pGender[], const char pEmail[], const char pAddress[], const char name[], const char id[], int contact) :User (Name, ID, Contact)
{
    strcpy(dob, pdob);
    strcpy(Gender, pGender);
    strcpy(Email, pEmail);
    strcpy(Address, pAddress);
}

void RegisteredPatient::RegisteredPatientDetails()
{
}

void RegisteredPatient::displayRegisteredPatientDetails()
{
}

RegisteredPatient::~RegisteredPatient()
{
}


