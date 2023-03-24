#include <iostream>
using namespace std;
int main()
{
    string firstName, lastName; // This variable is going to store the name of the user.
    // Prompting a question or request
    cout << "What is your first and last name? Separated by spaces: ";
    // Getting the information from the user
    cin >> firstName >> lastName;
    // Confirming the information
    cout << "Ah, your name is " << firstName << " " << lastName << endl;
}