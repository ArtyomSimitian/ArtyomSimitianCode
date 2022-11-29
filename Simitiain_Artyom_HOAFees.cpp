// Artyom Simitian, CS 117, Sections 18790 & 18791
// Calculating HOA Fees for the next 10 years with a .01 percent increase and an initial charge of $275.00
#include <iostream>
#include <iomanip> // For formatting
using namespace std;

int main()
{
    int year = 0; // Year starting point
    int increase = 0; // Percetnage increased
    const int initial = 275; // Initial value which is always constant. (Membership fee)
    float percentage = 0.01; // Intrest rate
    float intrest = initial * percentage; // Multiplies the initial value times the percentage to get the intrest amount. 

    cout << "   Year    Increase    Amount" << endl; // Title
    cout << "   ===========================" << "\n" << endl;
    while (year <= 9) // Print the program below until the year is less than and/or equal to 9 results.
    {
        year++, increase++; // Add one to the year and the increase (percentage).
        cout << "   " << year; cout << "\t   " << increase; // Print the year (which is incresing) then tab (\t) and print the increase (which is increasing).
        cout << setprecision(2) << fixed << "%\t    " << "   $" << intrest * year + initial << "\n" << endl;
        // setprecision(2), sets the result (amount) to 2 decimal places.
        // fixed sets the results to fixed point notation. 
        // intrest (explained on line 13) is multiplied by the current year to get the new intrest rate and is added onto the initial value. 
    }
    return 0;
}
