// Artyom Simitian, CS 177, Sections 20670 & 20671
// This program will ask the user for 5 values then output the largest and the smallest values from the array. 

#include <iostream>
#include <iomanip> // For formatting.
using namespace std;

int main() // Main function.
{
	const int SIZE = 5;
	double values[SIZE]{}; // An array that consists of five different values. Using double for floating points. 
	double largest = 0; 
	double smallest = 0; // Set largest and smallest both equal to 0 to later use them to compare the numbers between the arrays. 
	void getvalues(); // Path to first get the values. 
	{
		cout << "This program will ask you to\nenter five values, then it will\ndetermine the largest and smallest\nof the values you entered.\n" << endl; // Title
		for (int x = 0; x < 5; x++) // For loop to ask the user five different times for five different values. 
		{
			cout << "Enter a value: ";
			cin >> values[x]; // Cin stores the values into the array. (In this case it will do it five times so five numbers). 
			cout << endl;
		}
		largest = values[0];
		smallest = values[0]; // Set largest and smallest equal to the array to then compare them. (Sets them to the first number in the array)
	}
	void compare(const double values[]); // Path to compare largest and smallest values. 
	{
		for (int x = 0; x <= 4; x++) // For loop to compare each of the numbers order. 
		{
			if (values[x] < smallest) // Compares to see if the current number in the array is smaller than the current smallest number. (at first 0)
				smallest = values[x]; // If this ^ is the case after all five numbers have been compared it will be set to "smallest". 
			if (values[x] > largest)  // Compares to see if the current number in the array is larger than the current largerest number. (at first 0)
				largest = values[x];  // If this ^ is the case after all five numbers have been compared it will be set to "largest".
		}
		cout << setprecision(2) << fixed << showpoint << "The largest value entered is " << largest << endl; // Prints title and largest number.
		cout << setprecision(2) << fixed << showpoint << "The smallest value entered is " << smallest << endl; // Prints title and smallest number. 
		// Setprecision(2) for two decimal places. Fixed for set note notation. Showpoint for decimal places (even when uncessary). 
	}
	return 0; // Execute program with 0 errors. 
}

	