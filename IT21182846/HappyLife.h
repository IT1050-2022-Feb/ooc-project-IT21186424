
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
