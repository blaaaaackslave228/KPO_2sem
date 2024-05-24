#include <iostream>
using namespace std;

bool leap_year(int year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int count_days(int day, int month, int year)
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leap_year(year)) {
		days[1] = 29;
	}
	int number_day = day;
	for (int i = 0; i < month - 1; i++) {
		number_day += days[i];
	}
	if (days[1] == 28) {
		number_day++;
	}
	return number_day;
}

int difference(int day1, int day2, int month1, int month2, int year1, int year2)
{
	int total_days1 = count_days(day1, month1, year1) + year1 * 365;
	int total_days2 = count_days(day2, month2, year2) + year2 * 365;
	int diff = abs(total_days2 - total_days1);
	return diff;
}

int main()
{
	setlocale(LC_ALL, "RU");
	int day1, month1, year1, day2, month2, year2;
	cout << "Ââåäèòå ïåğâóş äàòó â ôîğìàòå ÄÄÌÌÃÃÃÃ: ";
	cin >> day1 >> month1 >> year1;
	cout << "Ââåäèòå âòîğóş äàòó â ôîğìàòå ÄÄÌÌÃÃÃÃ: ";
	cin >> day2 >> month2 >> year2;
	cout << "Ğàçíèöà äíåé: " << difference(day1, day2, month1, month2, year1, year2) << endl;
	int diff_hours = difference(day1, day2, month1, month2, year1, year2) * 24;
	cout << "Ğàçíèöà â ÷àñàõ ìåæäó äâóìÿ äàòàìè: " << diff_hours << endl;
	system("PAUSE");
	return 0;
}