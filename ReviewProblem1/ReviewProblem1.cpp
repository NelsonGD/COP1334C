#include <iostream>
using namespace std;
int main(){

    int numOfUnits;
    const double PRICE_PER_UNIT = 99.0;
    double discount, totalPrice;
    // Ask the user for the number of units
    cout << "Enterr the number of units: ";
    cin >> numOfUnits;
    // Use a detection structure to find the discount and print the total price to pay
    if(numOfUnits < 0){
        cout << "number of units is invalid" << endl;
    }else if (numOfUnits >= 0 && numOfUnits <= 9){
        discount = 0.0;
        totalPrice = numOfUnits  * PRICE_PER_UNIT - numOfUnits * PRICE_PER_UNIT * discount;
        cout << "Price to pay: $" << totalPrice << endl;
    }else if(numOfUnits >= 10 && numOfUnits <= 19){
        discount = 0.2;
        totalPrice = numOfUnits  * PRICE_PER_UNIT - numOfUnits * PRICE_PER_UNIT * discount;
        cout << "Price to pay: $" << totalPrice << endl;
    }else if(numOfUnits >= 20 && numOfUnits <= 49){
        discount = 0.3;
        totalPrice = numOfUnits  * PRICE_PER_UNIT - numOfUnits * PRICE_PER_UNIT * discount;
        cout << "Price to pay: $" << totalPrice << endl;
    }else if (numOfUnits >= 50 && numOfUnits <= 99){
        discount = 0.4;
        totalPrice = numOfUnits  * PRICE_PER_UNIT - numOfUnits * PRICE_PER_UNIT * discount;
        cout << "Price to pay: $" << totalPrice << endl;
    }else{
        discount = 0.5;
        totalPrice = numOfUnits  * PRICE_PER_UNIT - numOfUnits * PRICE_PER_UNIT * discount;
        cout << "Price to pay: $" << totalPrice << endl;
    }
// Other to implement decision and print
    if(discount < 1)
        cout << "Invalid unit number" << endl;
    else if(numOfUnits < 10)
        discount = 0.0;
    else if(numOfUnits < 20)
        discount = 0.2;
    else if(numOfUnits < 50)
        discount = 0.3
    else if(numOfUnits <100)
        discount = 0.4
    else
        discount = 0.5
    
}

