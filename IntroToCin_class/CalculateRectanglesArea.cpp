#include <iostream>
using namespace std;
int main()
{
    double width, length, area;
    // Step 1. Ask the user for width
    cout << "Enter width: ";
    cin >> width;
    // Step 2. Ask the user for length
    cout << "Enter length: ";
    cin >> length;
    // Step 3. Calculate the area based on width and length
    // Area = Width * Length
    area = width * length;
    // Step 4. Print the area of the rectangle on the screen
    cout << "The area of this rectangle is " << area << endl;
}