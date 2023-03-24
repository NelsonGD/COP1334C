#include <iostream>
using namespace std;
int main()
{

    // The first devision only shows 2 because the computer can only be as percise as that, but the second division will show 2.5 because the computer is allowed to show decimals.
        /* cout << " 10/4 = " << 10/4 << " 10.0/4 = " << 10.0/4 << endl; */
        /* cout << " 10%4 = " << 10 % 4 << endl; */

    int carlosAge = 50, maryAge = 40, yuriAge = 43;
    double averageAge;
    averageAge = (carlosAge+maryAge+yuriAge) / 3.0;
    cout << "The average age is " << averageAge << endl;
    return 0;
}