﻿#include <iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i != size - 1) 
        {
            cout << "\n"; 
        }    //to remove the last "\n"
    }
    return 0;
}
  