// Bankverwaltung_Projekt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void logincontroller();

using namespace std;

int main()
{
	string abfrage = "";
	
	do {
		logincontroller();
		
		cout << "Wollen sie weiter machen ? (n/N fuer verlassen)" << endl;
		cin >> abfrage;
	} while ((abfrage.compare("n")) != 0 || (abfrage.compare("N")) != 0);

	getchar();
    return 0;
}
