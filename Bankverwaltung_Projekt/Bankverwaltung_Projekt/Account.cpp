#include "stdafx.h"
#include "Account.h"


Konto::Konto(const int kontonummer, const int bankleitzahl, const int opendate, int guthaben, int zinssatz, const int id)
	: m_id(id), m_bankleitzahl(bankleitzahl), m_opendate(opendate), m_kontonummer(kontonummer)
{
	
	m_guthaben = guthaben;
	m_zinssatz = zinssatz;

}


Konto::~Konto()
{
}


int Konto::getKontonummer()
{
	return m_kontonummer;
}

int Konto::getBankleitzahl()
{
	return m_bankleitzahl;
}

int Konto::getOpendate()
{
	return m_opendate;
}

int Konto::getId()
{
	return m_id;
}

int Konto::getGuthaben()
{
	return m_guthaben;
}

int Konto::getZinssatz()
{
	return m_zinssatz;
}
