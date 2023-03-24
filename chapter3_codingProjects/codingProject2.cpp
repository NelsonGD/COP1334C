/*
Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into. The program should perform the following steps:
Ask the user for the diameter of the pizza in inches.
Calculate the number of slices that may be taken from a pizza of that size.
Display a message telling the number of slices.
To calculate the number of slices that may be taken from the pizza, you must know the following facts:
Each slice should have an area of 14.125 square inches.
To calculate the number of slices, simply divide the area of the pizza by 14.125.
The area of the pizza is calculated with this formula:
Area = πr2
 
In the formula, use the value 3.14159 for π. Also, r is the radius of the pizza (half the pizza's diameter).
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    const double sizeSlice = 14.125;
    const double PI = 3.14159;
    double diaPizza, areaPizza, radiusPizza;
    int numSlices;

    // Ask the user for the diamter of the pizza in inches.
    cout << "Enter pizza diameter: ";
    cin >> diaPizza;
    // Calculate the number of slices that may be taken from a pizza of that size.
    radiusPizza = (diaPizza)/2;
    areaPizza = PI * pow(radiusPizza, 2.0);
    numSlices = areaPizza / sizeSlice;
    // Display the message telling the number of slices.
    cout << setprecision(2) << numSlices << " slices" << endl;
}