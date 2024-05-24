#include "stdafx.h"

void function_2(int year, int month, int day)
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			days[1] = 29;
	}
	int number_day = day;
	for (int i = 0; i < month - 1; i++) {
		number_day += days[i];
	}
	if (days[1] == 28) {
		number_day++;
	}
	cout << "Порядковый номер дня в году: " << number_day << endl;
}
