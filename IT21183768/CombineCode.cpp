

#include <cstring>
#include <iostream>
#define SIZE 10
using namespace std;



//start user class
class User
{
protected:
	char Name[30];
	char ID[10];
	int Contact;

public:
	User();
	User(const char name[], const char id[], int contact);
	void DisplayDetails();
	~User();
};
//End user class

//start register patient class
class RegisteredPatient : public User
{
protected:
	char dob[9];
	char Gender[3];
	char Email[40];
	char Address[30];
	


public:

	RegisteredPatient();
	RegisteredPatient(const char pdob[], const char pGender[], const char pEmail[], const char pAddress[], const char name[], const char id[], int contact);
	void RegisteredPatientDetails();
	void displayRegisteredPatientDetails();
	~RegisteredPatient();
};
//-------------------------------------------------------------





//Start WebEditor class

class WebEditor : public User
{
protected:
	int webID;
	char Email[30];

public:
	WebEditor();
	WebEditor(int ID, const char email[], const char name[], const char id[], int contact);
	void webEditorDetails();
	~WebEditor();
};

//------------------------------------------------------------------


//Start Administrator class
class administrator : public User
{
protected:
	int adminID;
	char adminpassword[20];
	char adminEmail[30];
public:
	administrator();
	administrator(int AdID, const char  Adpw[], char AdEmail[], const char name[], const char id[], int contact);
	void addhospital();
	~administrator();
};
//-----------------------------------------------------------------







//Start commission class
class Commission
{
protected:
	char commisionID[10];
	int precentage;
	int amount;
	administrator* admin;
	WebEditor* webeditor;
	



public:
	Commission();
	Commission(const char CID[], int precentage, int amnt, const char name[], const char id[], int contact);
	void viewcommisiondetails();
	~Commission();
};

//---------------------------------------------------------------








//start Unregister patient class
class UnregisteredPatient : public User
{
protected:
	char PatientUsername[10];
	char PatientPassword[10];

public:

	UnregisteredPatient();
	UnregisteredPatient(const char pPatientUsername[], const char pPatientPassword[], const char name[], const char id[], int contact);
	void  displayDetails();
	void  login();
	void  logout();
	char checkLoginDetails();
	~UnregisteredPatient();

};
//--------------------------------------------------------









//Start Clinic class 

class Clinic
{
private:
	char clinicID[30];
	char clinicName[30];
public:
	Clinic();
	Clinic(const char ID[], const char Name[]);
	void viewClinicDetails();
	~Clinic();
};

//-----------------------------------------------------------------------

//Start Hospital class

class Hospital
{
private:
	int hospitalID;
	char hospitalName[50];
	char hospitalAddress[50];
	int hospitalContact;
	char hospitalEmail[30];
	char labTest[50];
	Clinic* clinic[SIZE];
	UnregisteredPatient* unregisterpatient;
	RegisteredPatient* registerpatient;
	Commission* commission[SIZE];
  

public:
 
	Hospital();
	Hospital(int ID, const char name[], const char address[], int Contact, const char email[], const char test[]);
	void viewHospitalDetails();
	void availableClinicDaily();
	void availableMedicalTest();

  void displayClinic()
{
  //Composition
}
	~Hospital();
};

//-----------------------------------------------------------------

//Start Doctor class

class Doctor : public User
{
protected:
	char specialization[50];
	char branch[30];
	int appointmentCount;
  Hospital* hospital;
	

public:
	Doctor();
	Doctor(const char spec[], const char D_branch[], int appointment, const char name[], const char id[], int contact, Hospital* phospital);
	void viewDoctorDetails();
	void login();
	void checkAppoinment();
	~Doctor();
};

//------------------------------------------------------------------------------------------

//start payment class

class Payment {
private:

	char paymentID[10];
	char paymentMethod[30];
	int paymentAmount;
	Commission* commission[SIZE];


public:
	Payment();
	Payment(const char pID[], const char pMethod[], int pAmount);
	void paymentDetails();
	void calcPayment();
	void displayPaymentDetails();

  void displayCommission(){
    //Composition
  }
	~Payment();


};
//end payment class



//start appointment class
class Appointment
{
private:
	char appointmentID[10];
	char appointmentDate[15];
	char appointmentTime[15];
	char appointmentCategory[30];
	Payment* payM[SIZE];
	RegisteredPatient* regPatient[SIZE];
  Hospital* hospital;
	


public:
  void addRegisteredPatient(RegisteredPatient* regPatient[SIZE])  {
    //Aggregation
  }
	Appointment();
	Appointment(const char aID[], const char aDate[], const char aTime[], const char aCategory[], Hospital* phospital);
	void displayAppointmentDetails();

  void displayPayment(){
  //Composition
}
	~Appointment();
};

//end appointment class


//start RegisteredPatient implimantation
RegisteredPatient::RegisteredPatient()
{
	strcpy(dob, "");
	strcpy(Gender, "");
	strcpy(Email, "");
	strcpy(Address, "");
}

RegisteredPatient::RegisteredPatient(const char pdob[], const char pGender[], const char pEmail[], const char pAddress[], const char name[], const char id[], int contact) :User(Name, ID, Contact)
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
//------------------------------------------------------------


//start Webeditor implimantation

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

//-------------------------------------------------------------------------


//start administrator implimantation
administrator::administrator()
{
	adminID = 0;
	strcpy(adminpassword, "");
	strcpy(adminEmail, "");
}

administrator::administrator(int AdID, const char Adpw[], char AdEmail[], const char name[], const char id[], int contact) :User(Name, ID, Contact)
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
//---------------------------------------------





//start commissionnin implimantation

Commission::Commission()
{
	strcpy(commisionID, "");
	precentage = 0;
	amount = 0;
}

Commission::Commission(const char CID[], int pcntg, int amnt, const char name[], const char id[], int contact)
{
	strcpy(commisionID, CID);
	precentage = pcntg;
	amount = amnt;
}

void Commission::viewcommisiondetails()
{
}

Commission::~Commission()
{
}

//------------------------------------------------------------------------------------


//start payment implimantation

Payment::Payment() {
	strcpy(paymentID, "");
	strcpy(paymentMethod, "");
	paymentAmount = 0;


}

Payment::Payment(const char pID[], const char pMethod[], int pAmount) {
	strcpy(paymentID, pID);
	strcpy(paymentMethod, pMethod);
	paymentAmount = pAmount;



}


void Payment::paymentDetails() {



}

void Payment::calcPayment() {

}

void Payment::displayPaymentDetails() {


}

Payment:: ~Payment() {
	//Destructor
	
}
//-----------------------------------------------








//start appointment implimantation

Appointment::Appointment() {
	strcpy(appointmentID, "");
	strcpy(appointmentDate, "");
	strcpy(appointmentTime, "");
	strcpy(appointmentCategory, "");

}

Appointment::Appointment(const char aID[], const char aDate[], const char aTime[], const char aCategory[], Hospital* phospital) {
	strcpy(appointmentID, aID);
	strcpy(appointmentDate, aDate);
	strcpy(appointmentTime, aTime);
	strcpy(appointmentCategory, aCategory);

}

void Appointment::displayAppointmentDetails() {


}

Appointment :: ~Appointment() {
	//destructer
  
	
}

//--------------------------------------------------------





//start user implimantation

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

//----------------------------------------







//start UnregisteredPatient implimantation

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
//-----------------------------------------------------------




//start Doctor implimantation

Doctor::Doctor()
{
	strcpy(specialization, "");
	strcpy(branch, "");
	appointmentCount = 0;
}

Doctor::Doctor(const char spec[], const char D_branch[], int appointment, const char name[], const char id[], int contact, Hospital* phospital) :User(Name, ID, Contact)
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



//start Clinic implimantation-----------------------------------


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



//---------------------------------------------------------------------

//start Hospital implimantation-------------------------------------------------------

Hospital::Hospital()
{
	hospitalID = 0;
	strcpy(hospitalName, "");
	strcpy(hospitalAddress, "");
	hospitalContact = 0;
	strcpy(hospitalEmail, "");
	strcpy(labTest, "");
}

Hospital::Hospital(int ID, const char name[], const char address[], int Contact, const char email[], const char test[])
{
	hospitalID = ID;
	strcpy(hospitalName, name);
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

//------------------------------------------------------------------------------









int main()
{
  

	//start appointment function calling

	Appointment* appointment;
	appointment = new Appointment();


	//method calling
	appointment->displayAppointmentDetails();
	
	//---------------------------------------------------


	//payment function calling
	Payment* pay;
	pay = new Payment();


	//method calling
	pay->paymentDetails();
	pay->calcPayment();
	pay->displayPaymentDetails();

	//-------------------------------------------------- 




   //register patient function callling

	RegisteredPatient* RegPatient = new RegisteredPatient();

	RegPatient->displayRegisteredPatientDetails();
	RegPatient->RegisteredPatientDetails();

	//-------------------------------------------------




  //Unregister patient function callling

	UnregisteredPatient* unregisteredpatient = new UnregisteredPatient();

	//....Method Calling....

	unregisteredpatient->login();
	unregisteredpatient->logout();
	unregisteredpatient->displayDetails();


	//-------------------------------------------------------



 //Administrator class function callling

	administrator* admin = new administrator();

	admin->addhospital();

	//------------------------------------------------



	//commission class function callling

	Commission* com = new Commission();

	com->viewcommisiondetails();

	

	//Doctor class function callling

	Doctor* Doc = new Doctor();

	Doc->DisplayDetails();
	Doc->viewDoctorDetails();
	Doc->login();
	Doc->checkAppoinment();

	//------------------------------------------------------

   //Hospital class function callling


	Hospital* hospital = new Hospital();

	hospital->viewHospitalDetails();
	hospital->availableClinicDaily();
	hospital->availableMedicalTest();

	
	//-------------------------------------------------------




	//webeditor class function callling

	WebEditor* w_editor = new WebEditor();

	w_editor->webEditorDetails();

	//-------------------------------------------------------





	//clinic class function callling

	Clinic* clnc = new Clinic();

	clnc->viewClinicDetails();

	//-------------------------------------------------------


  // Delete Dyanamic Object
  
  delete appointment;
  delete pay;
  delete RegPatient;
  delete unregisteredpatient;
  delete admin;
  delete com;
  delete Doc;
  delete hospital;
  
  //------------------------------------------------------

	return 0;

}






































