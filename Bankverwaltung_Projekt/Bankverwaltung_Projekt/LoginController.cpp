#include "LoginController.h"
#include "stdafx.h"
#include "Uservariablen.h"

void checkpasswort(std::string username, std::string passwort);
void login();
void useranlegen();

using namespace std;
User **us = new User*[10];
static int numbersofusers = 0;

void logincontroller() {
	int nutzereingabe = -1;

	cout << "Was wollen Sie tun ? -> (0 für Exit, 1 für Einloggen, 2 für User anlegen)" << endl;
	cin >> nutzereingabe;

	switch (nutzereingabe)
	{
	case 0:
		exit(0);
		break;
	case 1:
		login();
		break;
	case 2:
		useranlegen();
		break;
	default:
		cout << "Falsche Eingabe!" << endl;
		break;
	}
}

void login() {
	std::string temp_pass;
	std::string temp_user;

	cout << "Username: " << endl;
	cin >> temp_user;
	cout << "Passwort: " << endl;
	cin >> temp_pass;

	checkpasswort(temp_user, temp_pass);
}

void checkpasswort(std::string username, std::string passwort) {

	for (int i = 0; i < numbersofusers; i++) {

		if ((username.compare(us[i]->getusername())) == 0 && (passwort.compare(us[i]->getpasswort())) == 0) {

			cout << "Sie wurden eingeloggt! " << "mit Namen: " << us[i]->getusername() << " und passwort: " << us[i]->getpasswort() << endl;
		}
		else {
			cout << "Username oder passwort falsch!" << endl;
		}
	}

}

void useranlegen() {
	string test;
	string test2;

	cout << "Username: " << endl;
	cin >> test;
	cout << "Passwort: " << endl;
	cin >> test2;
	cout << "User wurde angelegt!" << " Name: " << test << " Passwort: " << test2<< endl;

	us[numbersofusers] = new User(test, test2);
	numbersofusers++;

}
