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

class commission : public User
{
protected:
	char commisionID[10];
	int precentage;
	int amount;
public:
	commission();
	commission(const char CID[], int precentage, int amnt, const char name[], const char id[], int contact);
	void viewcommisiondetails();
	~commission();
};


class administrator : public User
{
private:
	int adminID;
	char adminpassword[20];
	char adminEmail[30];
public:
	administrator();
	administrator(int AdID, const char  Adpw[], char AdEmail[], const char name[], const char id[], int contact);
	void addhospital();
	~administrator();
};