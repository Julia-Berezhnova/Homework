#include "stack.h"
#include <iostream>

struct StackElement
{
	char value;
	StackElement *next;
};

struct Stack
{
	StackElement *top;
};

//Creates and returns new stack element with needed data
StackElement *newElement(char symbol, StackElement *next)
{
	StackElement *newElement = new StackElement;
	newElement->next = next;
	newElement->value = symbol;
	return newElement;
}

void push(char symbol, Stack *stack)
{
    StackElement *temp = newElement(symbol, stack->top);
    stack->top = temp;
}

Stack *createStack()
{
	Stack *newStack = new Stack;
    newStack->top = nullptr;
	return newStack;
}

bool isEmpty(Stack *stack)
{
    return stack->top == nullptr;
}

char pop(Stack *stack)
{
    char result = stack->top->value;
    StackElement *temp = stack->top;
    stack->top = stack->top->next;
	delete temp;
	return result;
}

char top(Stack* stack)
{
    return stack->top->value;
}

void deleteStack(Stack *stack)
{
	while (!isEmpty(stack))
	{
        pop(stack);
    }
    delete stack;
}
