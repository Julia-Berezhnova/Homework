#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 0;
	int m = 0;
	while (n <= 1)
	{
		cout << "������� ���������� ������: " << endl;
		cin >> n;
	}
	while (m < 1)
	{
		cout << "������� ����� ���������� ����������: " << endl;
		cin >> m;
	}
	List* Squad = createList(n);
	cout << "������� ������� ��� ������� " << survivor(Squad, m) << endl;
	return 0;
}