// I want to make a table that of the farenheit values from 0 to 100 in increments of 10
// and show the equivalent in Celsius degree

#include <iostream>
using namespace std;

double FtoC(double F){
    double c;
    c = (5.0/9.0)*(f-32);
    return c;
}

double FtoC(double f);

int main(){
    double farenheit;
    cout << "F\tC" << endl;
    for(farenheit = 0; farenheit <= 100; farenheit += 10){
        cout << farenheit << "\t" << FtoC(farenheit) << endl;
    }
}
double FtoC(double f){
    double c;
}