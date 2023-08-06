#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;

    cout << "x = " << x << endl
         << "y = " << y << endl;

    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stateTaxRate = 0.04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countyTaxRate = 0.02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    double total = sales + stateTax + countyTax;
    cout << "Total: $" << total << endl;

}