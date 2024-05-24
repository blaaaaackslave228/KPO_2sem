#include <iostream>

using namespace std;

int sum(int x, int y) { return x + y; };
int sub(int x, int y) { return x - y; };

int(*func)(int, int);

int main()
{

	setlocale(LC_ALL, "RU");
	int n = 7;
	int X = 9 + n, Y = 10 + n, Z = 11 + n;
	float S = 1.0 + n;

	bool question4_1 = false;
	bool question4_2 = true;

	char question5 = 'a';
	char question6 = L'à';

	wchar_t question7 = 'm';
	wchar_t question8 = L'ì';

	short question9_1 = X;
	short question9_2 = -X;

	short question10_1 = 0x7FFF;
	short question10_2 = 0xFFFFFFFFFFFF8000;

	unsigned short question11_1 = 0xFFFF;
	unsigned short question11_2 = 0;

	int question12_1 = Y;
	int question12_2 = -Y;

	int question13_1 = 0x7FFFFFFF;
	int question13_2 = 0xFFFFFFFF80000000;

	unsigned int question14_1 = 0xFFFFFFFF;
	unsigned int question14_2 = 0;

	long question15_1 = Z;
	long question15_2 = -Z;

	long question16_1 = 0x7FFFFFFF;
	long question16_2 = 0xFFFFFFFF80000000;

	unsigned long question17_1 = 0xFFFFFFFF;
	unsigned long question17_2 = 0;

	float question18_1 = S;
	float question18_2 = -S;

	float question19_1 = S / 0;
	float question19_2 = -S / 0;
	float question19_3 = question19_1 / question19_2;

	char question20_1 = 'd';
	wchar_t question20_2 = L'ä';
	short question20_3 = 15;
	int question20_4 = 150;
	float question20_5 = 150.1;
	double question20_6 = 150.00001;

	char* c = &question20_1;
	wchar_t* wc = &question20_2;
	short* s = &question20_3;
	int* i = &question20_4;
	float* f = &question20_5;
	double* d = &question20_6;

	char* c1 = c + 3;
	wchar_t* wc1 = wc + 3;
	short* s1 = s + 3;
	int* i1 = i + 3;
	float* f1 = f + 3;
	double* d1 = d + 3;

	func = sum;
	int x = func(2, 3);
	func = sub;
	int y = func(2, 3);

	return 0;

}