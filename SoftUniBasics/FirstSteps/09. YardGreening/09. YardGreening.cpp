#include <iostream>
#include <string>
using namespace std;

int main()
{
	double quadrature, price, finalPrice, discount;
	cin >> quadrature;

	price = quadrature * 7.61;
	discount = price * 0.18;
	finalPrice = price - discount;

	cout << "The final price is: " << finalPrice << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;
	return 0;
}

