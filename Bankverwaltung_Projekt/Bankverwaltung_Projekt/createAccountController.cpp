#include "stdafx.h"
#include "createAccountController.h"

using namespace std;

createAccountController::createAccountController() {}

void createAccountController::accountController()
{
	int eingabe = -1;
	system("cls");
	cout << "Was wollen sie als nächstes tun" << endl;
	cout << "1) Bestehende Kontos anschauen" << endl;
	cout << "2) Eigenes Konto anlegen" << endl;
	cout << "3) Logout" << endl;
	cin >> eingabe;

	switch (eingabe)
	{
	case 1:
		if (createdAccounts > 0) {
			seeAccount();
		}
		else {
			cout << "Es wurden noch keine Nutzer angelegt!" << endl;
		}
		break;
	case 2:
		createownAccount();
		break;
	case 3:
		cout << "Auf Wiedersehen" << endl;
		logout = true;
	default:
		break;
	}

}

createAccountController::~createAccountController()
{
}

void createAccountController::createownAccount()
{
	int tempguthaben = 0;
	int tempzinssatz = 0;
	int tempid = 0;
	int tempkontonummer = 0;
	int tempbankleitzahl = 0;
	int temperstelldatum = 0;
	srand((unsigned)time(NULL)); // Zufallsgenerator initialisieren. 

	system("cls");
	cout << "------Eingeben------" << endl;
	cout << "Guthaben: ";
	cin >> tempguthaben;
	cout << "Zinssatz: ";
	cin >> tempzinssatz;

	tempid = rand();
	tempkontonummer = rand()*5;
	tempbankleitzahl = rand()*3;
	temperstelldatum = 24;

	account[createdAccounts] = new Konto(tempkontonummer, tempbankleitzahl, temperstelldatum, tempguthaben, tempzinssatz, tempid);
	cout << "Konto wurde angelegt. Mit --ID: " << account[createdAccounts]->getId() << " --Kontonummer: " << account[createdAccounts]->getKontonummer()
		<< " --Bankleitzahl: " << account[createdAccounts]->getBankleitzahl() << " --Erstellt am: " << account[createdAccounts]->getOpendate() << endl;

	createdAccounts++;

	system("PAUSE");
}

void createAccountController::seeAccount()
{
	for (int i = 0; i < createdAccounts; i++) {
		cout << "Hier ist der User" << endl;
	}

}