#include "HappyLife.h"
#include <cstring>
#include <iostream>
using namespace std;

//implimantation
Appointment :: Appointment() {
	strcpy(appointmentID, "");
	strcpy(appointmentDate, "");
	strcpy(appointmentTime, "");
	strcpy(appointmentCategory, "");

}

Appointment :: Appointment(const char aID[], const char aDate[], const char aTime[], const char aCategory[]) {
	strcpy(appointmentID, aID);
	strcpy(appointmentDate, aDate);
	strcpy(appointmentTime, aTime);
	strcpy(appointmentCategory, aCategory);

}

void Appointment :: displayAppointmentDetails() {


}

Appointment :: ~Appointment() {
	//destructer
}

Payment::Payment() {
	strcpy(paymentID, "");
	strcpy(paymentMethod, "");
	paymentAmount = 0;
 

}

Payment :: Payment(const char pID[], const char pMethod[], int pAmount) {
	strcpy(paymentID, pID);
	strcpy(paymentMethod, pMethod);
	paymentAmount = pAmount;
 

	
}


void Payment::paymentDetails() {


	
}

void Payment::calcPayment(){
	
}

void Payment::displayPaymentDetails() {


}

Payment:: ~Payment() {
	//Destructor
}