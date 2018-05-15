#include "stdafx.h"
#include "User.h"
#include <string>

User::User(std::string username, std::string passwort)
{
	m_username = username;
	m_passwort = passwort;
}

User::~User()
{}

void User::setnumberofusers(int number) 
{
	m_numberofusers = number;
}

int User::getnumberofusers() 
{
	return m_numberofusers;
}

std::string  User::getpasswort()
{
	return m_passwort;
}

std::string User::getusername()
{	
	return m_username;
}

