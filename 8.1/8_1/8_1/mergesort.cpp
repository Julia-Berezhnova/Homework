#include "mergesort.h"

List* merge(List* firstList, List* secondList)
{
    firstList = reverseList(firstList);
    secondList = reverseList(secondList);
    List* result = createList();
    int resultSize = getElementsNumber(firstList) + getElementsNumber(secondList);
    for (int i = 0; i < resultSize; ++i)
    {
        if (getElementsNumber(firstList) > 0 && getElementsNumber(secondList) > 0)
        {
            if (getHeadValue(firstList) > getHeadValue(secondList))
            {
                push(result, pop(firstList));
            }
            else
            {
                push(result, pop(secondList));
            }
        }
        else if (getElementsNumber(firstList) > 0)
        {
            push(result, pop(firstList));
        }
        else
        {
            push(result, pop(secondList));
        }
    }
    deleteList(firstList);
    deleteList(secondList);
    return result;
}

List *mergeSort(List *list)
{
    if (getElementsNumber(list) == 1)
    {
        List *result = createList();
        push(result, pop(list));
        deleteList(list);
        return result;
    }
    short halfOfSize = getElementsNumber(list) / 2;
    List *firstPart = createList();
    List *secondPart = createList();
    while (getElementsNumber(list) > halfOfSize)
    {
        push(firstPart, pop(list));
    }
    while (getElementsNumber(list) > 0)
    {
        push(secondPart, pop(list));
    }
    deleteList(list);
    List *sortedFirstPart = mergeSort(firstPart);
    List *sortedSecondPart = mergeSort(secondPart);
    List *result = merge(sortedFirstPart, sortedSecondPart);
    return result;
}
