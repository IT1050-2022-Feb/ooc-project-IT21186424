class User {
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

class Doctor : public User {
protected:
  char specialization[50];
  char branch[30];
  int appointmentCount;

public:
  Doctor();
  Doctor(const char spec[], const char D_branch[], int appointment,
         const char name[], const char id[], int contact);
  void viewDoctorDetails();
  void login();
  void checkAppoinment();
  ~Doctor();
};

class Hospital
{
private:
	int hospitalID;
	char hospitalName[50];
	char hospitalAddress[50];
	int hospitalContact;
	char hospitalEmail[30];
	char labTest[50];

public:
	Hospital();
	Hospital(int ID, const char Hname[], const char address[], int Contact, const char email[], const char test[]);
	void viewHospitalDetails();
	void availableClinicDaily();
	void availableMedicalTest();
	~Hospital();
};