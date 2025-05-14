#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    string line;

    cin >> num;
    cin.ignore();
    getline(cin, line);

    cout << "Число: " << num << "\nТекст: " << line << endl;
    return 0;
}
