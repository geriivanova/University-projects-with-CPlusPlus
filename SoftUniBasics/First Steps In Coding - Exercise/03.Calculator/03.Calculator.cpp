#include <iostream>
using namespace std;

int main()
{
    double depositeSum, persentage, sum;
    int depositeTerm;
    cin >> depositeSum;
    cin >> depositeTerm;
    cin >> persentage;

    sum = depositeSum + depositeTerm * ((depositeSum * persentage / 100) / 12);

    cout << sum << endl;
    return 0;
}

