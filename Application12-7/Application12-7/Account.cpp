#include "stdafx.h"
#include "Account.h"
#include <string>
using namespace std;
Account::Account(double m, const char *pNumber)
{
	m_amount=m;
	m_number = new char[strlen(pNumber) + 1];
	strcpy_s (m_number,32,pNumber);
}
Account::~Account()
{
	delete m_number;
}
double Account::GetRate()
{
	return m_rate;
}
void Account::SetRate(double r)
{
	m_rate = r;
}
double Account::m_rate = 0.098;