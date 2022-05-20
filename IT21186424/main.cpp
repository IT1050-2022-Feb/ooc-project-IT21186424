#include <iostream>
#include "Happylife.h"

using namespace std;

int main()
{
	commission* com = new commission();

	com->viewcommisiondetails();

	delete com;

  administrator* admin = new administrator();

	admin->addhospital();

	delete admin;
  User* use =new User ();
  use->DisplayDetails();


	return 0;
}

