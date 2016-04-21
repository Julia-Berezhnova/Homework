#include <iostream>
#include <string.h>
#include "stack.h"
#include "count.h"

using namespace std;

const int maxLength = 30;

int main()
{
	char entered[maxLength] = {};
	cout << "Enter an arithmetic expression: " << endl;
	cin >> entered;
	count(entered, strlen(entered));
	return 0;
}
