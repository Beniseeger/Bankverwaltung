#pragma once
#include <conio.h>
#include <string>
#include <iostream>
#include "User.h"
#define MAX_USER_COUNT 10

using namespace std;

class LoginController {

public:
	User* loggedInUser;
	int numbersofusers = 0;
	void checkpasswort(std::string username, std::string passwort);
	void login();													//Methode für den Login
	void useranlegen();
	void logincontroller();
	string hashpassword(std::string password);
};