#include "stdafx.h"
#include "login.h"
#include "Uservariablen.h"

using namespace std;


void checkpasswort(std::string username, std::string passwort) {
	User *us = new User;

	if (username._Equal(us->getusername) && passwort._Equal(us->getpasswort)) {
			cout << "Sie wurden eingeloggt!" << endl;	
	}
	else {
		cout << "Username oder passwort falsch!" << endl;
	}

}

login::~login()
{
}