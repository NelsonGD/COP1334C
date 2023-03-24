

#include <iostream>
using namespace std;
int main(){
    double score;
    cout  << "Enter score: ";
    cin >> score;

    if(score >= 90.0)
        cout << "It is a A" << endl;
    else {
        if(score >= 80.0)
            cout << "It is B" << endl;
        else{
            if(score >= 70.0)
                cout << "It is a C" << endl;
            else{
                if(score >= 60.0)
                    cout << "It is a D" << endl;
                else
                    cout << "It is an F" << endl;
            }
        }
    }

}