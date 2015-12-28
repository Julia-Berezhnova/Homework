#include <iostream>>
#include "count.h"

//Returns priority of operation
int priority(char c)
{
    switch (c)
    {
    case '*': return 3;
    case '/': return 3;
    case '-': return 2;
    case '+': return 2;
    case '(': return 1;
    }
}

void count(char entered[], int length)
{
    Stack *operations = createStack();
    int dynamicLength = length * 3;
    char *rendered = new char[dynamicLength];

    int j = -1;
    for (int i = 0; i < length; ++i)
    {
        if (entered[i] == ')')
        {
            while (top(operations) != '(')
            {
                rendered[++j] = pop(operations);
            }
            pop(operations);
        }
        else
        {
            if ((entered[i] >= '0') && (entered[i] <= '9'))
            {
                rendered[++j] = entered[i];
            }
            else
            {
                if (entered[i] == '(')
                {
                    push('(', operations);
                }
                else
                {
                    if ((entered[i] == '+') || (entered[i] == '*') || (entered[i] == '/') || (entered[i] == '-'))
                    {
                        if (isEmpty(operations))
                        {
                            push(entered[i], operations);
                        }
                        else
                        {
                            if (priority(top(operations)) < priority(entered[i]))
                            {
                                push(entered[i], operations);
                            }
                            else
                            {
                                while ((!isEmpty(operations)) && (priority(top(operations)) >= priority(entered[i])))
                                {
                                    rendered[++j] = pop(operations);
                                }
                                push(entered[i], operations);
                            }
                        }
                    }
                }
            }
        }
    }
    while (!isEmpty(operations))
    {
        rendered[++j] = pop(operations);
    }
    for (int i = 0; i <= j; ++i)
    {
        std::cout << rendered[i] << " ";
    }
    delete[] rendered;
    deleteStack(operations);
}
