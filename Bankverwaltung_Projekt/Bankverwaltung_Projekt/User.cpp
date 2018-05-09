#include "stdafx.h"
#include "Uservariablen.h"
#include <string>

User::User(std::string username, std::string passwort)
{
	setusername(username);
	setpasswort(passwort);
}

User::~User()
{}

void User::setuserID(int id) 
{
	m_userID = id;
}

void User::setpasswort(std::string pass)
{
	m_passwort = pass;
}

void User::setusername(std::string user)
{
	m_username = user;
}

std::string  User::getpasswort()
{
	return m_passwort;
}

std::string User::getusername()
{	
	return m_username;
}

int User::getUserID()
{
	return m_userID;
}