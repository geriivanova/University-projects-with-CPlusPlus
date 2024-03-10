#include <iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    vector<int>numbers;
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0) break;
        numbers.push_back(n);
    }

    for (vector<int>::iterator p = numbers.begin(); p != numbers.end()-1; p++)
    {
        if (*p == *(p + 1))
        {
            cout << *p << " ";
        }
    }
}
