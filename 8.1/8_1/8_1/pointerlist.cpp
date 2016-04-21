#include "pointerlist.h"
#include <iostream>

struct PointerListElement
{
    int value;
    PointerListElement* next;
};

struct PointerList
{
    int elementsNumber;
    PointerListElement* head;
};

PointerList* createPList()
{
    PointerList* result = new PointerList;
    result->head = nullptr;
    result->elementsNumber = 0;
    return result;
}

void push(PointerList* list, int value)
{
    PointerListElement* element = new PointerListElement;
    element->value = value;
    element->next = list->head;
    list->head = element;
    ++list->elementsNumber;
}

int pop(PointerList* list)
{
    PointerListElement* deletedElement = list->head;
    int result = deletedElement->value;
    list->head = list->head->next;
    --list->elementsNumber;
    delete deletedElement;
    return result;
}

int getElementsNumber(PointerList* list)
{
    return list->elementsNumber;
}

int getHeadValue(PointerList* list)
{
    return list->head->value;
}

void deleteList(PointerList* list)
{
    while (list->head != nullptr)
    {
        PointerListElement* temp = list->head;
        list->head = temp->next;
        --list->elementsNumber;
        delete temp;
    }
    delete list->head;
}

PointerList* reverseList(PointerList* list)
{
    PointerList* result = createPList();
    while (list->head != nullptr)
    {
        push(result, pop(list));
    }
    deleteList(list);
    return result;
}

void printList(PointerList* list)
{
    PointerListElement* temp = list->head;
    while (temp != nullptr)
    {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
