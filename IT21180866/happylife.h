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