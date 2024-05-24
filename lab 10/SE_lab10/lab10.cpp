#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1);
	cout << "�����: " << target1 << " ����������: " << num_items1 << '\n';
	int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << "���������� ���������, ������� 3: " << num_items3 << '\n';
	cout << endl << "������, ������ ����������: " << endl;
	for (auto i : v) [i]() {if (i % 3 == 0) cout << i << " "; }();
	cout << endl << "������ � �����������: " << endl;
	for (auto i : v) [](auto i) {if (i % 3 == 0) cout << i << " "; }(i);
	cout << endl << "������ ��� ����������: " << endl;
	for (auto i : v) [i] {if (i % 3 == 0) cout << i << " "; }();
	cout << endl << endl;

	auto merge_lines{ [](string a, string b) {return a + b; } };
	string line_one = "����� ";
	string line_two = "��������";
	cout << merge_lines(line_one, line_two) << endl << endl;

	auto compare_lines{ [](string a, string b) {if (a.length() > b.length()) return a; else return b; } };
	string first_line, second_line;
	cout << "������� ������ ������: ";
	cin >> first_line;
	cout << "������� ������ ������: ";
	cin >> second_line;
	cout << compare_lines(first_line, second_line) << endl;
	return 0;
}