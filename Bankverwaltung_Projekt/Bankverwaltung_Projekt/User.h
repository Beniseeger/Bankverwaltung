#pragma once
#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

class User {
	

	int m_numberofusers = 0;
	std::string m_passwort;
	std::string m_username;
	Konto *account;

public:
	
	User(std::string username, std::string passwort);
	~User();

	std::string getpasswort();
	std::string getusername();
	int getnumberofusers();
	

	//Getter und Setter nur machen, wenn man sie wirklich braucht
	//Hier kann man das auch über den Konstruktor machen 
	//siehe Konstruktor
	void setnumberofusers(int number);

};