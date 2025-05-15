#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = size - 1;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << ' ';
    }

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        while (right > left)
        {
            swap(arr[left++], arr[right--]);
        }

    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
