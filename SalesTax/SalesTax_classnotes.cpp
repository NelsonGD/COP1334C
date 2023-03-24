#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double amount, stateSaleTax, countySaleTax, totalSaleTax, totalSale;
    const double STATE_SALE_TAX_RATE = 0.04, COUNTY_SALE_TAX_RATE = 0.02;
    // Ask the user for the amount of purchase
    cout << "Enter the amount of this purchase: ";
    cin >> amount;
    // Calculate state sale tax
    stateSaleTax = amount * STATE_SALE_TAX_RATE;
    // Calculate county sale tax
    countySaleTax = amount * COUNTY_SALE_TAX_RATE;
    // Calculate total sale tax
    totalSaleTax = stateSaleTax + countySaleTax;
    // Calculate total amount of the sale
    totalSale = amount + totalSaleTax;
    /* Print amount of the purchase, the state sales tax, they county sales tax, the total sales tax, and the total of the sale. */
    cout << fixed << setprecision(2);
    cout << "Amount of purchase: $" << amount << endl;
    cout << "State Sale Tax: $" << stateSaleTax << endl;
    cout << "County Sale Tax: $" << countySaleTax << endl;
    cout << "Sale Tax: $" << totalSaleTax << endl;
    cout << "Total sale amount: $" << totalSale << endl;
}