#include <iostream>
using namespace std;
int main()
{
    int penPackages, markerPackages, boardCleaner, discount;
    double penPrice, markerPrice, cleanerPrice, price, priceWithDiscount;

    cin >> penPackages >> markerPackages >> boardCleaner >> discount;

    penPrice = penPackages * 5.80;
    markerPrice = markerPackages * 7.20;
    cleanerPrice = boardCleaner * 1.20;

    price = penPrice + markerPrice + cleanerPrice;

    priceWithDiscount = price - (price * discount / 100);
    cout << priceWithDiscount << endl;
    return 0;
}
