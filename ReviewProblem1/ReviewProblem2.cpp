#include <iostream>
using namespace std;
int main(){
    char packageOption;
    double hours, totalCharges;
    double baseA = 9.95, baseB = 13.95, baseC = 19.95, extraA = 2.0, extraB = 1.0;
    int allowanceA = 10, allowanceB = 20;
    // Ask user about the package used
    cout << "Enter package option: ";
    cin >> packageOption;
    // Ask the user about the number of hours
    cout << "Enter the number of hours: ";
    cin >> hours; 
    // Decision structure to calculate this month charges
    switch(packageOption) {
        case 'A':
            if(hours > 0)
                cout << "negative hours are invalid" << endl;
            else if(hours >= 0 && hours <= allowanceA){
                totalCharges = baseA;
                cout << "Total Charges: " << totalCharges << endl;
            }else{
                totalCharges = baseA + (hours - allowanceA * extraA);
            }
            break;
        case 'B':
            if(hours > 0)
                cout << "negative hours are invalid" << endl;
            else if(hours >= 0 && hours <= allowanceB){
                totalCharges = baseB
                cout << "Total Charges: $" << totalCharges << endl;
            }else{
                totalCharges = baseB + (hours - allowanceB) * extraB;
                cout << "Total Charges: $" << totalCharges << endl;
            }
            break;
        case 'C':
            if(hours > 0)
                cout << "negative hours are invalid" << endl;
            else{
                totalCharges = baseC;
                cout << "Total Charges: $" << totalCharges << endl;
            }
            break;
        default:
            cout << "Invalid package option" << endl;
    }
}