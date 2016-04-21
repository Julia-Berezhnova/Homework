#pragma once

struct Stack;

Stack *createStack();

//Adds new element to the stack
void push(char symbol, Stack *stack);

bool isEmpty(Stack *stack);

char pop(Stack *stack);

char top(Stack* stack);

void deleteStack(Stack *stack);

