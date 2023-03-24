/*
This is a program to demonstrate the creation and work of a variable
Author: Nelson Dia
*/

#include <iostream>
using namespace std;
int main()
{
    /*
    We are storing 2 numbers representing the amount of apples eaten in the morning and evening.
    Variables --> Type, Name(identifier), and value.
        - These need to be declared
        - Simple declaration:
            type identifier;

    */

   int applesEatenMorning; // Apples eaten in the morning
   int applesEatenEvening; // Apples eaten in the evening

   /*
   Assignment syntax    var_name = value;
    - (=) --> Assignment operator
   */
  applesEatenMorning = 2+2;
  applesEatenEvening = 5;

  // Show total apples eaten
  cout << "Total apples eaten today: " << (applesEatenEvening+applesEatenMorning) << endl;
  return 0;
}