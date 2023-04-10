/*
Assume a file named Random.txt exists, and contains a list of random numbers. Write a program that opens the file, reads all the numbers from the file, and calculates the following:

The number of numbers in the file
The sum of all the numbers in the file (a running total)
The average of all the numbers in the file

The program should display the number of numbers found in the file, the sum of the numbers, and the average of the numbers.
Output Labels: Print each of the above quantities on a line by itself, preceded by the following (respective) strings: "Number of numbers: ", "Sum of the numbers: ", and "Average of the numbers: ".

Sample Run
Number of numbers: 20
Sum of the numbers: 210
Average of the numbers: 10.5
*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int aNumber = 0;
    int numbers = 0;
    double sum = 0.0;
    double average = 0.0;
    ifstream randomFile;
    randomFile.open("Random.txt");
    if(randomFile.fail())
        cout<<"failed to read file.";
    else{
        while(randomFile>>aNumber){
            numbers++;
            sum+=aNumber;
        }
        if(numbers>0)
        average = sum/numbers;
        else
        average = 0.0;
        cout<<"Number of numbers: "<<numbers<<"\n";
        cout<<"Sum of the numbers: "<<sum<<"\n";
        cout<<"Average of the numbers: "<<average<<"\n";
    }
    randomFile.close();
    return 0;
}