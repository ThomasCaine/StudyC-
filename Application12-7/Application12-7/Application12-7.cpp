#include "stdafx.h"
#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
	Account a1(1000, "Peter");
	Account a2(1500, "Tom");
	Account *pa = &a1;
	Account::SetRate(0.095);
	cout << a1.GetRate() << endl;
	a2.SetRate(0.099);
	cout << pa->GetRate() << endl;
	return 0;
}