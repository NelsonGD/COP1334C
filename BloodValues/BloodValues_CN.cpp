/* This program is going to ask the user for the values of triglycites, cholesterol, and glucose. Then set a warning in case a value is higher than normal (threshold) */
#include <iostream>
using namespace std;
int main()
{
    double triglycerites, cholesterol, glucose;
    const double TG_THRESHOLD = 150.0, CHL_THRESHOLD = 200.0, GL_THRESHOLD = 99.0;
    // Ask user to enter the levels of tryglicerates, cholesterol, and glucose.
    cout << "Enter the level of triglycerites in blood (mg/dL): ";
    cin >> triglycerites;
    cout << "Enter the level of cholesterol in blood (mg/dL): ";
    cin >> cholesterol;
    cout << "Enter the level of glucose in blood (mg/dL): ";
    cin >> glucose;
    
    // Check if value are higher than normal if any is, trigger an alarm.
    if(triglycerites <= TG_THRESHOLD)
        cout << "Triglycerites levels are normal." << endl;
    else
        cout << "Triglycerites levels are above normal values" << endl;
    if(cholesterol <= CHL_THRESHOLD)
        cout << "Cholesterol levels are normal." << endl;
    else
        cout << "Cholesterol levels are above normal values." << endl;
    if(glucose >= GL_THRESHOLD)
        cout << "Glucose level are above normal values." << endl;
}