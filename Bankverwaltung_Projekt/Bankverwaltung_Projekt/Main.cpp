// Bankverwaltung_Projekt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "LoginControllerheader.h"
#include "createAccountController.h"

using namespace std;

LoginController *mainController = new LoginController();
createAccountController *mainAccount = new createAccountController();

int main()
{
	//Einloggen/User createn
	do {
		mainController->logincontroller();

	} while (mainController->loggedInUser == nullptr);		//solange variable noch nicht gesetzt wurde ist das false


	//Erstellen eines neuen Kontos
	do {
		mainAccount->accountController();
	} while (!mainAccount->logout);

	system("PAUSE");
    return 0;
}
