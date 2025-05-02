#include <iostream>
#include <string>
using namespace std;

int main()
{
	double dogFood, catFood, price;

	cin >> dogFood;
	cin >> catFood;

	price = dogFood * 2.5 + catFood * 4;

	cout << price << " lv." << endl;
	return 0;
}
