#pragma once
#include <string>
#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <ctime>
#include "Account.h"

class createAccountController
{
public:
	int createdAccounts = 0;

	createAccountController();
	~createAccountController();

	void accountController();
	void seeAccount();
	void createownAccount();

	Konto *account[10];
	bool logout = false;
};

