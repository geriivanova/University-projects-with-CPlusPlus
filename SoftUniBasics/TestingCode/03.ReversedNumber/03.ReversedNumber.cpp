#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int number, reversedNumber = 0;
    cin >> number;

    while (number)
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    cout << "Reversed number is: " << reversedNumber << "\n";
    return 0;
}
