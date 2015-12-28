#include "binaryOperations.h"
 
// ������ � ����������� ��������� �������:
// 1. binaryRepresentation    - ������� � ���.�������� ���
// 2. binarySum               - ���������� ����� ���� ����� � ���.�������� ����
// 3. DecimalRepresentation   - ���������� ������������� ����� � ���.�������� ����


// 1. ������� ������ ������ ���, 
// ����� �� ����������� ����� �������������� �������� ��� �����
// ������ �������� :) �� ���� 
// ��� ���� �������� � ����� � ������...
void binaryRepresentation(int number, bool binaryNumber[])
{
	for (int i = length - 1; i >= 0; --i)
	{
		int mask = 1 << i; // mask = �����. ���������� ����� ���������� ������  
		binaryNumber[i] = (number & mask) != 0; // ��������� ����������� ���������
	}
}

// 2. ������� ��������� ����� ���� �����,
// �������������� � �������������� �������� ����
// ����� ���� � �������������� �������� ����
void binarySum(bool number1[], bool number2[], bool result[])
{
	bool mind = false; // ������ "������� � ���". ���������� � ��� ������ ��� 
	for (int i = 0; i <= length - 1; ++i)
	{
		result[i] = number1[i] ^ number2[i];
		if (number1[i] && number2[i] && !mind)
		{
			result[i] = 0;
			mind = true;
		}
		else if (mind && !number1[i] && !number2[i])
		{
			result[i] = 1;
			mind = false;
		}
		else if (mind && result[i])
		{
			result[i] = 0;
			mind = true;
		}
		else if (mind && number1[i] && number2[i])
		{
			result[i] = 1;
			mind = true;
		}
	}
}

// 3. ������� ���������� ���������� ������������� �����,
// ��������������� � �������������� �������� ����
double DecimalRepresentation(bool number[])
{
	double result = 0;
	int powOfTwo = 1;
	if (!number[length - 1])
	{
		for (int i = 0; i < length; ++i)
		{
			result = result + number[i] * powOfTwo;
			powOfTwo = powOfTwo * 2;
		}
	}
	else
	{
		for (int i = 0; i < length; ++i)
		{
			result = result + (!number[i]) * powOfTwo;
			powOfTwo = powOfTwo * 2;
		}
		++result;
		result = -result;
	}
	return result;
}