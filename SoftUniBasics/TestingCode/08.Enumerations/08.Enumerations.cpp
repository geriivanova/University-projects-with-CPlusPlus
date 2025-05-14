#include <iostream>
using namespace std;

enum Level {
    LOW = 0,
    MEDIUM = 1,
    HIGH = 2
};
int main()
{
    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}
