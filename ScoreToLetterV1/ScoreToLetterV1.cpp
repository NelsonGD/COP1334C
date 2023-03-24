/* This program is going to find the corresponding letter to the score using a balance nested decision */
#include <iostream>
using namespace std;
int main()
{
    double score;
    // Ask user the score
    cout << "Enter score: ";
    cin >> score;
    if (score >= 70.0){ // If A, B, and C
        if(score >=90.0){
            cout << "It is an A" << endl;
        }else{ // B or C
            if(score >=80.0){
                cout << "it is a B" << endl;
            }else{
                cout << "It is a C" << endl;
            }
        }
        else{ // D or F
            if(score >= 60.0)
                cout << "It is a D" << endl;
            else
                cout << "It is an F" << endl;
        }
    }
}