// ��������� ��������� �� ����� "array.txt" ������ ����� ���� int
// � ������� �������� ����� ������������� ��� ������� 

#include <iostream>
#include <fstream>
#include <locale.h>

#include "qSort.h"
#include "findRoger.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	
	ifstream file("array.txt", ios::in);
	if (!file.is_open())
	{
		cout << "���� array.txt �� ������" << endl;
		return 1;
	}

	int array[100] = {};
	int size = 0;

	while (!file.eof())
	{
		file >> array[size];
		++size;
	}

	int result = findRoger(array, size);
	if (result > -1)
	{
		cout << "�������� ����� ������������� �������: " << result << endl;
	}
	else
	{
		cout << "��� �������� ������� ��������" << endl;
	}
	return 0;
}

//����� ������������ ������ (������). ������ �� ������. ������ ����� ������ cmd.exe
//����� 1 44444444444444444444444444444 6666666666666666666666666666 777777777777777777777777777777777777777. ����������
//����� 22222222222222222222222222222222222222222222. "��� �������� ������� ��������"
//���� ��������� ��������� ����������� ��������� ����� (� ��� ��������), �� ������ ������ ����� �������. ������ ��� � findRoger ������� (now > max), �.�. ���� �������
//������� 2.3 � 3.2 - ��� ���� �� �� �����, ��? :)