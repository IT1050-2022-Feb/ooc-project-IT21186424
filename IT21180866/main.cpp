#include "happylife.h"
#include <iostream>

using namespace std;

int main()
{
  //User
	User* Us = new User();

	Us->DisplayDetails();

  //web editor
	WebEditor* w_editor = new WebEditor();

	w_editor->webEditorDetails();

  //clinic
	Clinic* clnc = new Clinic();

	clnc->viewClinicDetails();

  delete Us;
  delete w_editor;
  delete clnc;
  
  return 0;
}