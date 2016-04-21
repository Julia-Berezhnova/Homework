#pragma once

#include "arraylist.h"
#include "pointerlist.h"

//typedef PointerList List;
typedef ArrayList List;

///Returns new sorted list which consists of two given lists
List* merge(List* firstList, List* secondList);

///Returns a sorted list
List* mergeSort(List* list);
