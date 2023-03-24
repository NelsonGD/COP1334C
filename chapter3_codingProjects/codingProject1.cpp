#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string month1, month2, month3;
    double rainM1, rainM2, rainM3, avgRain;
    
    //Ask the user to input the first month.
    cout << "Enter month: ";
    cin >> month1;
    // Ask the user to input the amount of rain in inches for that month1.
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainM1;
    // Ask the user to input the second month.
    cout << "Enter month: ";
    cin >> month2;
    // Ask the user to input the amount of rain in inches for that month.
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainM2;
    // Ask the user to input the third month.
    cout << "Enter month: ";
    cin >> month3;
    // Ask the user to input the amount of rain in inches for that month.
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainM3;
    
    //Calculate the average rain for all months.
    avgRain = (rainM1 + rainM2 + rainM3) / (3);
    // Display average rain for the three months.
    //"The average rainfall for May, June, and July is 8.11 inches.
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << "is " << setprecision(3) << showpoint << avgRain << " inches." << endl;
}