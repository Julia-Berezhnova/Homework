#include <QCoreApplication>
#include <fstream>
#include <iostream>

#include "mergesort.h"
#include "arraylist.h"
#include "pointerlist.h"

using namespace std;

int main()
{
    ///typedef PointerList List;
   typedef ArrayList List;
    ifstream file("input.txt", ios::in);
    if (!file.is_open())
    {
        cout << "file not found" << endl;
        return 1;
    }
    List* list = createList();
    while (!file.eof())
    {
        int value = {};
        file >> value;
        if (!file.eof())
        {
            push(list, value);
        }
    }
    file.close();
    List* result = mergeSort(list);
    printList(result);
    deleteList(result);
    return 0;
}
