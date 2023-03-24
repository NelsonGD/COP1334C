/*
Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: If the user enters a number that is less than 1 or greater than 10, display the message "Enter a number in the range 1 through 10."
*/

#include <iostream>
using namespace std;
int main(){

    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    switch (number)
    {
    case 1: cout << "The Roman numeral version of " << number << " is I." << endl;
        break;
    case 2: cout << "The Roman numeral version of " << number << " is II." << endl;
        break;
    case 3: cout << "The Roman numeral version of " << number << " is III." << endl;
        break;
    case 4: cout << "The Roman numeral version of " << number << " is IV." << endl;
        break;
    case 5: cout << "The Roman numeral version of " << number << " is V." << endl;
        break;
    case 6: cout << "The Roman numeral version of " << number << " is VI." << endl;
        break;
    case 7: cout << "The Roman numeral version of " << number << " is VII." << endl;
        break;
    case 8: cout << "The Roman numeral version of " << number << " is VIII." << endl;
        break;
    case 9: cout << "The Roman numeral version of " << number << " is IX." << endl;
        break;
    case 10: cout << "The Roman numeral version of " << number << " is X." << endl;
        break;
    default: cout << "Enter a number in the range 1 through 10." << endl;
        break;
    }
}