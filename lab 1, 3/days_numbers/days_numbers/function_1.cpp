#include "stdafx.h"

void function_1(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << "��������� ��� �������� ����������." << endl;
	}
	else {
		cout << "��������� ��� �� �������� ����������." << endl;
	}
}
