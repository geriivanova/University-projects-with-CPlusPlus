#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> cars;

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");

    cout << cars.size();
    return 0;
}