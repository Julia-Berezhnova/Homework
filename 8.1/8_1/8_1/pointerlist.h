#pragma once

struct PointerListElement;

struct PointerList;

PointerList* createPList();

///Adds new value to the top
void push(PointerList* list, int value);

///Returns value from the top,
///then deletes it.
int pop(PointerList* list);

int getElementsNumber(PointerList* list);

int getHeadValue(PointerList* list);

void deleteList(PointerList* list);

///Returns a reversed list
PointerList* reverseList(PointerList* list);

void printList(PointerList* list);
