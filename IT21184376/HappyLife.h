//create Appointment class

class Appointment
{
private:
	char appointmentID[10];
	char appointmentDate[15];
	char appointmentTime[15];
	char appointmentCategory[30];

public:
	Appointment();
	Appointment(const char aID[], const char aDate[], const char aTime[], const char aCategory[]);
	void displayAppointmentDetails();
	~Appointment();
};


//create Payment Class
class Payment {
private:

	char paymentID[10];
	char paymentMethod[30];
	int paymentAmount;
	

public:
	Payment();
	Payment(const char pID[], const char pMethod[], int pAmount);
	void paymentDetails();
	void calcPayment();
	void displayPaymentDetails();
	~Payment();


};