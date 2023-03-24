/* This program simulates the simplified version of Guess Who with the cards of D2L */

#include <iostream>
using namespace std;
int main()
{
    string answer;

    // Asking if character is wearing a hat
    cout << "Is the person weaeing a hat?(yes/no) ";
    cin >> answer;
        // If wearing a hat then ask about wearing glasses
    if(answer=="yes") {
        cout << "Is the person waring glasses?(yes/no) ";
        cin >> answer;
        // If wearing glasses then is Claire
        if(answer=="yes"){
            cout << "The person is Claire" << endl;
                // Else if not wearing glasses then is George
        }else{
            cout << "The person is George" << endl;
        }
    }
        // If not wearing a hat then ask about having a moustache
    else{
        cout << "Is the person using a moustache?(yes/no) ";
        cin >> answer;
        // If using a moutache then is Alex
        if(answer == "yes")
            cout << "The person is Alex" << endl;
        else
            cout << "The person is Joe" << endl;
    }
}