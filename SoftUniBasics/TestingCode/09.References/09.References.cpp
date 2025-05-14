#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  
    cout << meal << "\n";

    string food1 = "Pizza";
    cout << &food1; //memory address

    return 0;
}
