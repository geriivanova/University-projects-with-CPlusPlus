#include <iostream>
#include <string>
using namespace std;

int fibonaciNumbers(int n) {
    if (n <= 1)
        return n;
    return fibonaciNumbers(n - 1) + fibonaciNumbers(n - 2);
}


int main()
{
    int n;
    cin >> n;
    cout << fibonaciNumbers(n);
    return 0;
}
