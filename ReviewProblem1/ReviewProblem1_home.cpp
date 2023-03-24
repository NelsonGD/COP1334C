// Be able to write a simple program that will ask the user how many software units were sold. The normal price for 1 unit is $99.00. If a negative value is entered then the computer will respond that this is an invalid response. For all other entries the program must calculate a price break. (0-9 full price; 10-19 is 20% break; 20-49 is a 30% break; 50-99 is a 40% break; 100 or more is a 50% break. //

#include <iostream>
using namespace std;
int main(){
    double softwareUnit = 99.0;
    double softwareUnitsSold, priceDiscount, totalPrice;

    cout << "How many softare units were sold? ";
    cin >> softwareUnitsSold;
    if(softwareUnitsSold < 0){
        cout << "This is an invalid response.";
    }else if(softwareUnitsSold > 9 && softwareUnitsSold < 20){
        priceDiscount = 0.2; 
        totalPrice = (softwareUnit * softwareUnitsSold) * priceDiscount;
    }else if(softwareUnitsSold < 50){
        priceDiscount = 0.3;
        totalPrice = (softwareUnit * softwareUnitsSold) * priceDiscount;
    }else if(softwareUnitsSold < 100){
        priceDiscount = 0.4;
        totalPrice = (softwareUnit * softwareUnitsSold) * priceDiscount;
    }else{
        priceDiscount = 0.5;
        totalPrice = (softwareUnit * softwareUnitsSold) * priceDiscount;
    }

    cout << "The total price of all the software sold is $" << totalPrice << endl;
}