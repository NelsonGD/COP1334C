#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

    int choice;
    double areaCircle, areaRectangle, areaTriangle, radius, length, width, base, height; 
    const double PI = 3.14159;

    cout << "Geometry Calculator\n\n 1. Calculate the area of a Circle\n 2. Calculate the area of a Rectangle\n 3. Calculate the area of a Triangle\n 4. Quit\n\nEnter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1: cout << "\nEnter the circle's radius: ";
            cin >> radius;
            if(radius < 0){
                cout << "\nThe radius can not be less than zero.\n";
            }else{
                areaCircle = PI * pow(radius, 2.0);
                cout << "\nThe area is "<< areaCircle << "\n" << endl;
            }
        break;
    case 2: cout << "\nEnter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;
            if(length < 0 || width < 0){
                cout << "\nOnly enter positive values for length and width.\n";
            }else{
                areaRectangle = length * width;
                cout << "\nThe area is " << areaRectangle << "\n" << endl;
            }
        break;
    case 3: cout << "Enter the length of the base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;
            if(base < 0 || height < 0){
                cout << "\nOnly enter positive values for base and height.\n";
            }else{
                areaTriangle = base * height * 0.5;
                cout << "\nThe area is " << areaTriangle << "\n" << endl;
            }
        break;
    case 4: cout << "Program ending.\n";
        break;
    default: cout << "The valid choices are 1 through 4. Run the\nprogram again and select one of those.\n";
        break;
    }
}