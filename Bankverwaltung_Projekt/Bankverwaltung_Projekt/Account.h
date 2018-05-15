#pragma once
#include <string>

using namespace std;

class Konto
{
public:
	Konto(const int kontonummer, const int bankleitzahl, const int opendate, int guthaben,int zinssatz,const int id);
	~Konto();
	
	int getKontonummer();
	int getBankleitzahl();
	int getOpendate();
	int getId();
	int getGuthaben();
	int getZinssatz();
private:
	const int m_kontonummer;
	const int m_bankleitzahl;
	const int m_opendate;
	const int m_id;

	int m_guthaben;
	int m_zinssatz;
	
};

