#include <iostream>
#include <locale.h>
#include "binaryOperations.h"

using namespace std;

// ������� ������ �������, � ������ ������ ����� � �������� �������������
void printBinaryNumber(bool binaryNumber[])
{
	cout << "�������������� �������� ���: " << endl;
	for (int i = length - 1; i >= 0; --i)
	{
		cout << binaryNumber[i] << " ";
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "RUS");

	int number = 0;
	bool binaryNumber1[length] = {};
	cout << "������� ������ �����: ";
	cin >> number;
	binaryRepresentation(number, binaryNumber1);
	printBinaryNumber(binaryNumber1);

	bool binaryNumber2[length] = {};
	cout << "������� ������ �����: ";
	cin >> number;
	binaryRepresentation(number, binaryNumber2);
	printBinaryNumber(binaryNumber2);

	bool binaryNumber3[length] = {};
	cout << "�����. ";
	binarySum(binaryNumber1, binaryNumber2, binaryNumber3);
	printBinaryNumber(binaryNumber3);
	
	cout << "���������� ������������� �����: " << endl;
	cout << DecimalRepresentation(binaryNumber3) << endl;
	
	return 0;
}

// ���� ������ �������� �����, �� �������� ���� ���������� ����� ����
// ��� ����� ������ ���������� 