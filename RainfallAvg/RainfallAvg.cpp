#include <iostream>
using namespace std;
int main(){
    int numOfYears;
    double monthRainfall, totalRainfall = 0.0;
    //  Ask the number of years
    cout << "Enter the number of years: ";
    cin >> numOfYears;
    while (numOfYears < 1){
        cout << "Number of years has to be at least 1" << endl; // Error message
        cout << "Enter the number of years: "; // Copy and paste question from before the loop
        cin >> numOfYears;
    }
    // for each year
    for(int year = 1; year <= numOfYears; year++){
        // for each month
        for(int month = 1; month <= 12; month++){
            // Ask for the rainfall that was recorded in Year year, Month month
            cout << "Enter the rainfall for Year/Month: " << year << "/" << month << ": ";
            cin >> monthRainfall;
            while(monthRainfall < 0.0){
                cout << "Rainfall cannot be negative" << endl;
                cout << "Enter the rainfall for Year: " << year << "/month" << month << ": ";
                cin >> monthRainfall;
            }
            // Add it to the total rainfall
            ;totalRainfall += monthRainfall;
        }
    }        
    // Print results
    cout << "Number of months: " << numOfYears * 12 << endl;
    cout << "Total Rainfall: " << totalRainfall << endl;
    cout << "Average rainfall per month: " << totalRainfall / (12 * numOfYears) << endl;
}