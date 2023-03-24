#include <iostream>

using namespace std;
int main()
{
    double courseGrade = 90.0;

    // Let's make a rule of action if the courseGrade is 90 or higher
    bool overOrEqual90 = (courseGrade >= 90);
    // overOrEqual90 represents the condition that courseGrade is equal or higher than 90.0
    if(courseGrade != 90.0) // Braces are needed if you are doing more than one statement.
    { 
        cout << "You did not get a 90" << endl;
    }
    else
        cout << "You got a 90" << endl;
}