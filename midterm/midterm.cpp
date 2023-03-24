/*
Make a program that asks the user for the amount to invest and prints back the user how much the bank is going to give the person back: Investment plus interest. If the investment is below minimum, it should be noted as not allowed.
*/

#include <iomanip>
#include <iostream>
using namespace std;
int main(){
    // Interest: For the dollar amount that the interest equals
    // interestPercent: For the percentage amount the interest equals
    // initialInvest: The amount that is invested
    // returnInvestment: The total amount in dollars that you will earn back
    double interest, interestPercent, initialInvest, returnInvestment;

    // if-else if structure allowing the program to decide the interest and do the math on return.
    cout << "How much do you want to invest ($)?" << endl;
    cin >> initialInvest;
    if(initialInvest < 20000.00){ // Input validation portion that will make sure the user inputs the correct code.
        cout << "The minimum investment is $20000.00" << endl;
    }else if(initialInvest < 50000.00){
        interestPercent = 0.15;
        interest = interestPercent * initialInvest; // Math to find the interest in dollar amount
        returnInvestment = interest + initialInvest; // Math to find the total money that will be returned after investment.
        cout << "After a year the bank is going to give you:\nInvestment: $" << setprecision(2) << fixed << initialInvest << "\nInterest: $" << interest << "\nTotal: $" << returnInvestment << endl;
    }else if(initialInvest < 100000.00){
        interestPercent = 0.20;
        interest = interestPercent * initialInvest;
        returnInvestment = interest + initialInvest;
        cout << "After a year the bank is going to give you:\nInvestment: $" << setprecision(2) << fixed << initialInvest << "\nInterest: $" << interest << "\nTotal: $" << returnInvestment << endl;
    }else if(initialInvest < 200000.00){
        interestPercent = 0.25;
        interest = interestPercent * initialInvest;
        returnInvestment = interest + initialInvest;
        cout << "After a year the bank is going to give you:\nInvestment: $" << setprecision(2) << fixed << initialInvest << "\nInterest: $" << interest << "\nTotal: $" << returnInvestment << endl;
    }else{
        interestPercent = 0.30;
        interest = interestPercent * initialInvest;
        returnInvestment = interest + initialInvest;
        cout << "After a year the bank is going to give you:\nInvestment: $" << setprecision(2) << fixed << initialInvest << "\nInterest: $" << interest << "\nTotal: $" << returnInvestment << endl;
    }
}