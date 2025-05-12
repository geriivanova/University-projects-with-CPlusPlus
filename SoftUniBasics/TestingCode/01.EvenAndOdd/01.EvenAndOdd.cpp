#include <iostream>
using namespace std;

void evenOrOdd(int array[], int size)
{
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }

    cout << "Count of even numbers is: " << countEven << '\n';
    cout << "Count of odd numbers is: " << countOdd << '\n';
}

int main()
{
    int arr[] = { 1, 3, 7, 8, 9, 42, 16, 4, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    evenOrOdd(arr, size);
    return 0;
}