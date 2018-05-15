#include "stdafx.h"
#include "User.h"
#include "LoginControllerheader.h"

User **us = new User*[MAX_USER_COUNT];

void LoginController::logincontroller() {
	int nutzereingabe = -1;

	if (numbersofusers == 0) {
		cout << "Es wurde noch kein User erstellt \nBitte erstellen Sie zuerst!" << endl;
	}

		cout << "Was wollen Sie tun ? -> (0->Exit, 1->login, 2->creat user)" << endl;

		while (!(cin >> nutzereingabe))
		{
			std::cout << "Falsche Eingabe!" << std::endl;
			cout << "Was wollen Sie tun ? -> (0->Exit, 1->login, 2->creat user)" << endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		}

	switch (nutzereingabe)
	{
	case 0:
		exit(0);
		break;
	case 1:
		if (numbersofusers > 0) {
			login();
		}
		else {
			logincontroller();
		}
		break;
	case 2:
		useranlegen();
		break;
	default:
		cout << "Falsche Eingabe! -> Bitte waehlen Sie zwischen 1 und 2 aus." << endl;
		break;
	}
}

void LoginController::login() {
	std::string temp_pass;
	std::string temp_user;

	cout << "Username: " << endl;
	cin >> temp_user;
	cout << "Passwort: " << endl;
	cin >> temp_pass;

	checkpasswort(temp_user, temp_pass);
}

void LoginController::checkpasswort(std::string username, std::string passwort) {
	int ausgabe = -1;

	for (int i = 0; i < numbersofusers; i++) {

		if ((username.compare(us[i]->getusername())) == 0 && (passwort.compare(us[i]->getpasswort())) == 0) {
			ausgabe = 1;
			cout << "Sie wurden eingeloggt! " << "mit Namen: " << us[i]->getusername() << " und passwort: " << us[i]->getpasswort() << endl;

			loggedInUser = us[i];				//hier setzte ich den loggedinUser auf den aktuellen User
			break;
		}
	}

	if (ausgabe != 1) {
		cout << "Username oder Passwort falsch!" << endl;
	}
}

void LoginController::useranlegen() {
	string username = "";
	string password = "";
	char now = '\0';

	cout << "Username: " << endl;
	cin >> username;
	cout << "Passwort: " << endl;
	cin >> password;
	cout << "User wurde angelegt!" << " Name: " << username << " Passwort: " << password << endl;

	us[numbersofusers] = new User(username, password);
	numbersofusers++;

	hashpassword(password);

}


string LoginController::hashpassword(string password)
{
	std::hash<std::string> hashedpassword;
	return to_string(hashedpassword(password));
}