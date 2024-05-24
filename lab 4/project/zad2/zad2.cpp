#include <iostream>

using namespace std;

typedef unsigned char full_name [100];
typedef unsigned char gender [5];
typedef unsigned char post [50];
typedef unsigned int salary;
typedef unsigned int work_experience;
typedef unsigned char address [50];

struct Worker
{
	full_name fullname;
	gender g;
	post p;
	salary s;
	work_experience we;
	address ad;
};

bool operator < (Worker a, Worker b) 
{
	return (a.we < b.we);
}

bool operator > (Worker a, Worker b)
{
	return (a.s > b.s);
}

bool func(const address a1, const address a2)
{
	for (int i = 0; i < 50; i++) {
		if (a1[i] != a2[i]) {
			return false;
		}
	}
	return true;
}

bool operator == (Worker a, Worker b)
{
	return func(a.ad, b.ad);
}

int main()
{
	setlocale(LC_ALL, "RU");

	Worker worker_1 = { "Белодед Николай Иванович", "м", "доцент", 2500, 5, "Улица Свердлова" };
	Worker worker_2 = { "Наркевич Аделина Сергеевна", "ж", "старший преподаватель", 2000, 10, "Улица Свердлова" };

	if (worker_1 < worker_2) {
		cout << "Истина" << endl;
	}
	else {
		cout << "Ложь" << endl;
	}

	if (worker_1 > worker_2) {
		cout << "Истина" << endl;
	}
	else {
		cout << "Ложь" << endl;
	}

	if (worker_1 == worker_2) {
		cout << "Истина" << endl;
	}
	else {
		cout << "Ложь" << endl;
	}

	return 0;
}