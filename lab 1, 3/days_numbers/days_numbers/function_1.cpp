#include "stdafx.h"

void function_1(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << "¬веденный год €вл€етс€ високосным." << endl;
	}
	else {
		cout << "¬веденный год не €вл€етс€ високосным." << endl;
	}
}
