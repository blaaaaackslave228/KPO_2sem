#include "stdafx.h"

void day_month(int month);
void event(int year);

int main()
{
	setlocale(LC_ALL, "RU");

	int day, month, year, date;
	cout << "������� ���� � ������� ��������: ";
	cin >> date;
	day = date / 1000000;
	date %= 1000000;
	month = date / 10000;
	year = date % 10000;

	if ((day > 31 || day < 0) || (month > 12 || month < 0) || (year > 9999 || year < 0)) {
		cout << "�� ����� ������������ ������!" << endl;
	}

	else{
		cout << "���� � ������� ��: " << day << endl;
		cout << "����� � ������� ��: " << month << endl;
		day_month(month);
		cout << "��� � ������� ����: " << year << endl;
		function_1(year);
		function_2(year, month, day);

		int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			days[1] = 29;
		}
		int number_day = day;
		for (int i = 0; i < month - 1; i++) {
			number_day += days[i];
		}
		if(days[1]==29){
			int day_my_birthday = 88;
			int day_under_birthday;
			if (number_day <= day_my_birthday) {
				day_under_birthday = day_my_birthday - number_day;
			}
			else {
				day_under_birthday = 365 + day_my_birthday - number_day;
			}
			cout << "�� ����� ��� �������� " << day_under_birthday << " ����/���." << endl;
		}
		if (days[1] == 28 ) {
			int day_my_birthday = 87;
			int day_under_birthday;
			if (number_day <= day_my_birthday) {
				day_under_birthday = day_my_birthday - number_day;
			}
			else {
				day_under_birthday = 366 + day_my_birthday - number_day;
			}
			cout << "�� ����� ��� �������� " << day_under_birthday << " ����/���." << endl;
		}
		event(year);
	}
	system("PAUSE");
	return 0;
}

void day_month(int month)
{
	string monthes[12] = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������" };
	cout << "����� � ��������� �������: " << monthes[month - 1] << endl;
}

void event(int year)
{
	int day_event, month = 0;
	cout << "������� ���������� ����� ���: ";
	cin >> day_event;
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		days[1] = 29;
	}
	while (day_event > days[month]) {
		day_event -= days[month];
		month++;
	}
	if ((day_event == 12 && month + 1 == 9 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) || (day_event == 13 && month + 1 == 9 && !(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)))
	{
		cout << "���� ������������: " << day_event << "." << month + 1 << "." << year << endl;
	}
	else if (day_event == 8 && month + 1 == 3)
	{
		cout << "8 �����: " << day_event << "." << month + 1 << "." << year << endl;
	}
	else if (day_event == 1 && month + 1 == 1)
	{
		cout << "����� ���: " << day_event << "." << month + 1 << "." << year << endl;
	}
	else
	{
		cout << "� ���� ���� ��� ����������." << endl;
	}
}



