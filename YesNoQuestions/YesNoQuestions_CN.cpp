/* The purpose of this program is to use examples of yes/no questions and different ways in which we can deal with them. */

#include <iostream>
using namespace std;
int main()
{
    string answer;
    // Asking the person about liking snow.
    cout << "Do you like snow (yes/no): ";
    cin >> answer;
    // Process the answer
    if(answer == "yes")
        cout << "Great, you might like skying" << endl;
    else
     cout << "Aw, it is not that bad" << endl;

     int intAnswer;
     cout << "Do you like baseball (0:yes, 1:no):";
     cin >> intAnswer;
    // Process the integer answer
    if(intAnswer == 0)
        cout << "Great, you might like the major league" << endl;
    else 
        cout << "Then, you might like football" << endl;
}