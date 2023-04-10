#include <iostream>
using namespace std;
int main(){
    double score, totalScore = 0.0;
    char answer;
    int numberOfReports = 0;
    // do
    do{
        // Ask Mary for the report
        cout << "Enter the grade of the report: ";
        cin >> score;
        // Update the total grade of all Mary's reports
        totalScore += score; //totalScore = totalScore + score;
        // Increase the numberOfScores by 1
        numberOfReports++;
        // Ask Mary if there is one more report to add(y/n)
        cout << "Is there one more report to add (y/n): ";
        cin >> answer;
    // while answer is 'y'
    }while(answer == 'y');
    // Print the report grade average
    cout << "Report average: " << totalScore / numberOfReports << endl;
}
