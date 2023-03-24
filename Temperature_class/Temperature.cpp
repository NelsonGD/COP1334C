#include <iostream>
using namespace std;
int main()
{
    double temperatureF, temperatureC; //* Temperaturees in Farenheit and Celsius
    //* Ask the user for the temeperature in Farenheit degrees
    cout << "Enter the current temperature in Farenheit degrees: ";
    cin >> temperatureF;
    //* Convert temperature from Farenheit degrees to Celsius degrees
    temperatureC = (5.0/9.0) * (temperatureF - 32);
    //* Print the temperature in Celsois degrees
    cout << temperatureF << " Farenheit degrees is equivalent to ";
    cout << temperatureC << " Celsius degrees" << endl;
}