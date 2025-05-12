#include <iostream>
using namespace std;

int maxElement(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = { 1, 2, 3, 5, 90, 102, 11, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max element is: " << maxElement(arr, size);
    return 0;
}
