#include <iostream>
using namespace std;

void showMenu(){
    //Showing manu
    cout << "***My Menu***" << endl;
    cout << "a) Print Hello" << endl;
    cout << "b) Ask for two numbers to multiply" << endl;
    cout << "c) exit" << endl;
}

double multNumbers(double n1, double n2){
    double result;
    result = n1 * n2;
    return result;
}

int main(){
    const char EXIT_CHOICE = 'c';
    char choice;
    do{
        //Showing menu
        showMenu(); // showMeny function call
        //Asking user for choice
        cout << "Enter your choice (a, b, and c): ";
        cin >> choice;
        // Execute code based on choice
        switch (choice)
        {
        case 'a':
            cout << "Hello" << endl;
            break;
        case 'b':
            double num1, num2;
            cout << "Enter two numbers separated by a space: ";
            cin >> num1 >> num2;
            cout << "num1*num2=" << multNumbers(num1, num2) << endl;
            break;
        case 'c':
            cout << "Good bye" << endl;
            break;
        default:
            break;
        }
    }
}




