#include "HappyLife.h"
#include <iostream>
using namespace std;

int main()
{
	Appointment *appointment;
	appointment = new Appointment();


	//method calling
	appointment -> displayAppointmentDetails();

	//delete dynamic object
	delete appointment;


  Payment *pay;
	pay = new Payment();


	//method calling
	pay -> paymentDetails();
	pay -> calcPayment();
	pay -> displayPaymentDetails();
	
	//delete dynamic object
 
	delete pay;


  return 0;
   
}