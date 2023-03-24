/*
This program is to start analyzing the structure of a simple program
For instance comments
Author: Carlos Lollett
*/

#include <iostream>
using namespace std; // This allows to use cout without std::
int main()
{
    // << is the insertion operator
    // cout << item 1 << item 2 << item 3 << ... << item n;
    cout << "Hello World!\n"; // This is printing Hello World!
    // "\n" is a backspace sequence that makes your printout to go to the next line
    // "\t" is an escape sequence that gives a tab mark to your printout
    // To add quotation marks just use \""
    cout << "\nI \nlike \n\t\"C++\"\n";
    cout << "It is better than Python\n";
    cout << "I like C++\n" << "It is better than Python\n";

}