#include <iostream>
using namespace std;

int main()
{
    int pagesCount, pagesPerHour, days, result;

    cin >> pagesCount;
    cin >> pagesPerHour;
    cin >> days;

    result = ((pagesCount / pagesPerHour)) / days;
    cout << result << endl;
    return 0;
}
