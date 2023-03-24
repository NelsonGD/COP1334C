/*
Write a program that asks the user to enter the three test scores. The program should display each test score, as well as the average of the scores.
*/

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int score1, score2, score3;
    double scoreAvg;
    // Ask for the three scores
    cout << "Enter three scores separated by space: ";
    cin >> score1 >> score2 >> score3;
    // Calculate average
    scoreAvg = (double)(score1 + score2 + score3) / 3.0;
    // Print each score
    cout << setw(12) << "Score(1-100)" << endl;
    cout << setw(12) << score1 << endl;
    cout << setw(12) << score2 << endl;
    cout << setw(12) << score3 << endl;
    // Print score's average
    cout << "Average of scores: " << scoreAvg << endl;
}