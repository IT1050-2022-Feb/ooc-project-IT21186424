#include <iostream>
#include "User.h"
using namespace std;

int main()
{
	RegisteredPatient* RegPatient = new RegisteredPatient();

	RegPatient->displayRegisteredPatientDetails();
	RegPatient->RegisteredPatientDetails();

	delete RegPatient;

  UnregisteredPatient* unregisteredpatient = new UnregisteredPatient();

	//....Method Calling....

	unregisteredpatient->login();
	unregisteredpatient->logout();
	unregisteredpatient->displayDetails();


	//...Delete Dynamic objects...
	delete unregisteredpatient;

User*use=new User();
  
use->DisplayDetails();

delete use;
	return 0;
  }