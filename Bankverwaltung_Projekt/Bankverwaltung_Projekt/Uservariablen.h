#pragma once
#include <string>
#include <iostream>

class User {

	std::string m_passwort;
	std::string m_username;
	int			m_userID;

public:
	User(std::string username, std::string passwort);
	~User();

	std::string getpasswort();
	std::string getusername();
	int			getUserID();

	void setpasswort(std::string passwort);
	void setusername(std::string username);
	void setuserID(int id);

};