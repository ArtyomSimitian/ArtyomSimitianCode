// Artyom Simitian, CS 117, Sections 18790 & 18791
// The program will ask the user for the base and height of a triangle, then display the Triangle's area.


#include <iostream>
#include <iomanip> // For formatting
using namespace std;

int main()

{
	double Base; 
	double Height; // Double Base and Height for more precision compared to floating point. 

	cout << "  Enter the triangle's base: "; // Ask for the base of the triangle. 
	cin >> Base; // Store the base of the triangle. 

	cout << "  Enter the triangle's height: "; // Ask for the height of the triangle. 
	cin >> Height; // Store the height of the triangle. 

	double Area = Base * Height * 0.5; // Equation to find the Area of the triangle with the given Base and Height. 
	// "Area" is not established on the top with "double Base;" and "double Height;" because Base and Height are not initialized yet.

	cout << "\n  Triangle's Area \n"; // Title
	cout << "  -------------------\n";
	
	cout << setprecision(2) << fixed << showpoint;
	// setprecision(2), sets the result (Base, Height and Area) to 2 decimal places.
	// fixed sets the results to fixed point notation. 
	// showpoint displays the decimal point for any result. 
	cout << "  Base:      " << Base << '\n'; // Outputs the Title "Base:" and the given input.
	cout << "  Height:    " << Height << '\n'; // Outputs the Title "Height:" and the given input.
	cout << "  Area:      " << Area << '\n'; // Outputs the Title "Area:" and the answer (explained on line 21). 
	
	return 0;
}
