#pragma once

const int maxNumberOfElements = 100;

struct ArrayList;

ArrayList* createList();

///Adds new value to the end of array
void push(ArrayList* list, int value);

///Returns value from the end of array
int pop(ArrayList* list);

int getElementsNumber(ArrayList* list);

int getHeadValue(ArrayList* list);

void deleteList(ArrayList* list);

///Returns a reversed list
ArrayList* reverseList(ArrayList* list);

void printList(ArrayList* list);
