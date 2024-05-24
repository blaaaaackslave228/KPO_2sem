#include <iostream>

using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date
{
	day dd;
	month mm;
	year yyyy;
};

bool operator < (Date a, Date b)
{
	return ((a.yyyy < b.yyyy) || (a.yyyy == b.yyyy && a.mm == b.mm && a.dd < b.dd) || (a.yyyy == b.yyyy && a.mm < b.mm));
}

bool operator > (Date a, Date b)
{
	return (((a.yyyy > b.yyyy) || (a.yyyy == b.yyyy && a.mm == b.mm && a.dd > b.dd) || (a.yyyy == b.yyyy && a.mm > b.mm)));
}

bool operator == (Date a, Date b)
{
	return (a.yyyy == b.yyyy && a.mm == b.mm && a.dd == b.dd);
}

int main()
{
	setlocale(LC_ALL, "RU");

	Date date1 = { 7, 1, 1980 };
	Date date2 = { 7, 2, 1993 };
	Date date3 = { 7, 1, 1980 };

	if (date1 < date2) {
		cout << "������" << endl;
	}
	else {
		cout << "����" << endl;
	}

	if (date1 > date2) {
		cout << "������" << endl;
	}
	else {
		cout << "����" << endl;
	}

	if (date1 == date2) {
		cout << "������" << endl;
	}
	else {
		cout << "����" << endl;
	}

	if (date1 == date3) {
		cout << "������" << endl;
	}
	else {
		cout << "����" << endl;
	}

	return 0;
}
