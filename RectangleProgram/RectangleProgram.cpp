#include <iostream>
#include <iomanip>

using namespace std;
double getWidth();
double getLength();
void inputPhase (double & width, double & length)
double calculateArea(double width, double length)
double calculatePerimter(double width, double length)
void processingPhase(double width, double length, double& area, double& perimeter)
void displayPhase(double area, double perimeter)
int main(){
    double width, length, area, perimeter;
    // Input phase. Ask user for the length and width
    inputPhase(width, length, area, perimeter);
    // Processing phase. Calculate the area and parameter
    processingPhase(width, length, area, perimeter);
    //Display phase.
    displayPhase(area, perimeter);
}


double getWidth(){
    double width();
    cout << "Enter width: ";
    cin >> width;
    while(width < 0.0){
        cout << "Width needs to be non-negative" << endl;
        cout << "Enter width: ";
        cin >> width;
    }
    return width;
}

/*
Name: getLength
Porpuse: Ask the user to enter the length (validate for non-negative)
parameters: none
return double with length
*/

double getLength(){
    double length();
    cout << "Enter length: ";
    cin >> length;
    while(length < 0.0){
        cout << "Length needs to be non-negative" << endl;
        cout << "Enter length: ";
        cin >> length;
    }
    return length;
}

/*
name: inputPhase
purpose: enter the values from the use in width and length
parameters: double & width and length
return: void
*/
void inputPhase (double& width, double& length){
    width = getWidth();
    length = getLength();
}

/*
name: calculateArea
purpose: Calculate the area of the rectangle based on width and length
parameters: double width and double length
return: double area
*/
double calculateArea(double width, double length){
    return width * length;
}

/* 
name: calculatePerimeter
purpose: calculate the perimter of the rectangle based on width and length
paramters: double width and double lnegth
return: double perimeter
*/
double calculatePerimter(double width, double length){
    return 2*(width + length);
}

/*
name: processingPhase
purpose: Update the values of area and perimter based on calculations
parameters(input): double width, double length
parameters(output): double& area, double& perimter
return: none
*/
void processingPhase(double width, double length, double& area, double& perimeter){
    area = calculateArea(width, length);
    perimeter = calculatePerimeter(width, length);
}

/*
name: displayPhase
purpose: show the area and perimter of the rectangle
parameters: double area and double perimeter of the rectangle
return: none
*/
void displayPhase(double area, double perimeter){
    cout << fixed << setprecision(2);
    cout << "Area: " << area
}