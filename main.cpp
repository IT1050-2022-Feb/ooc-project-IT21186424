#include "HappyLife.h"
#include <cstring>
#include <iostream>

using namespace std;

//User
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


//Doctor
Doctor::Doctor()
{
	strcpy(specialization, "");
	strcpy(branch, "");
	appointmentCount = 0;
}

Doctor::Doctor(const char spec[], const char D_branch[], int appointment, const char name[], const char id[], int contact): User(Name, ID, Contact)
{
	strcpy(specialization, spec);
	strcpy(branch, D_branch);
	appointmentCount = appointment;
}

void Doctor::viewDoctorDetails()
{
}

void Doctor::login()
{
}

void Doctor::checkAppoinment()
{
}

Doctor::~Doctor()
{
	//Destructor
}

//Hospital
Hospital::Hospital()
{
	hospitalID = 0;
	strcpy(hospitalName, "");
	strcpy(hospitalAddress, "");
	hospitalContact = 0;
	strcpy(hospitalEmail, "");
	strcpy(labTest, "");
}

Hospital::Hospital(int ID, const char Hname[], const char address[], int Contact, const char email[], const char test[])
{
	hospitalID = ID;
	strcpy(hospitalName, Hname);
	strcpy(hospitalAddress, address);
	strcpy(hospitalEmail, email);
	hospitalContact = Contact;
	strcpy(labTest, test);
}

void Hospital::viewHospitalDetails()
{
}

void Hospital::availableClinicDaily()
{
}

void Hospital::availableMedicalTest()
{
}

Hospital::~Hospital()
{
	//Destructor
}