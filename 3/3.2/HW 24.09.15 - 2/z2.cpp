#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

bool binarySearch(int number, int array[], int left, int right)
{
	if (right < left)
	{
		return false;
	}
	if (array[(left + right) / 2] == number)
	{
		return true;
	}
	if (number < array[(left + right) / 2])
	{
		return binarySearch(number, array, left, (left + right) / 2 - 1);
	}
	else
	{
		return binarySearch(number, array, (left + right) / 2 + 1, right);
	}
}

void qSort(int array[], int left, int right)
{
	int start = left;
	int end = right;
	int key = array[(left + right) / 2];
	while (left <= right)
	{
		while (array[left] < key)
		{
			++left;
		}
		while (array[right] > key)
		{
			--right;
		}
		if (left <= right)
		{
			swap(array[left], array[right]);
			++left;
			--right;
		}
	}
	if (left < end)
	{
		qSort(array, left, end);
	}
	if (right > start)
	{
		qSort(array, start, right);
	}
}

int main()
{
	int size = 0;
	int num = 0;
	cout << "Enter size of array: ";
	cin >> size;
	cout << "Enter number of numbers: ";
	cin >> num;
	while (num < 1)
	{
		cout << "Number should be positive!" << endl;
		cout << "Enter number of numbers: ";
		cin >> num;
	}

	int array[5001] = {};
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		array[i] = rand();
	}
	
	qSort(array, 0, size - 1);
	for (int i = 0; i < num; ++i)
	{
		int number = rand();
		if (binarySearch(number, array, 0, size))
		{
			cout << "Array contains " << number << endl;
		}
		else
		{
			cout << "Array does not contain " << number << endl;
		}
	}
	return 0;
}
//����� ������ 5000, ���������� 30 000. ��������� ������ �������� ����� ������. ��� ������ �� ������.
//6000, 32 000. ���������� ������ ���������
//6000, 1 000. ���������� ������ ���������
//0, 20. ����� 20 �������, ������������ ������ ������� :)
//-20, 60. ����� 60 �������, ������������ ������ ������� :)
//120, -80. ��� ����������� ������� ����� �������...
//����� 'hello'. ��� ����������� ������� ����� �������... 
//�������� �������, ����� "��������" � �������������. ������ �� ����, ��� ����������, ������������� ��
//��������� ������ ������� ��� ���� (�� ���� ���� �������� �� �����, � ����� �����-��) 