#include "Happylife.h"
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
	//Destructer
}
commission::commission()
{
	strcpy(commisionID, "");
	precentage = 0;
	amount = 0;
}

commission::commission(const char CID[], int pcntg, int amnt, const char name[], const char id[], int contact) :User (Name, ID, Contact)
{
	strcpy(commisionID, CID);
	precentage = pcntg;
	amount = amnt;
}

void commission::viewcommisiondetails()
{  
}

commission::~commission()
{  
}


administrator::administrator()
{  
	adminID = 0;
	strcpy(adminpassword, "");
	strcpy(adminEmail, "");
  
}

administrator::administrator(int AdID, const char Adpw[], char AdEmail[], const char name[], const char id[], int contact) :User (Name, ID, Contact)
{
	adminID = AdID;
	strcpy(adminpassword, Adpw);
	strcpy(adminEmail, AdEmail);
  
}

void administrator::addhospital()
{   
}

administrator::~administrator()
{ 
}
