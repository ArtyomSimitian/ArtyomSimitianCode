// Artyom Simitian, CS 117, Sections 20670 & 20671
// This program creates a dynamic length array (based on user input) then takes the integers provided and outputs them in decending order.
// This program also adds up the total of the dynamic array. 

#include <iostream>
#include <iomanip> // For formatting. - setw(?) - fixed - showpoint - setprecision(?)
using namespace std;

// Create all of the paths at the top for clean code. 
void getInput(double*, int);
void Sort(double*, int);
double getTotal(double*, int);
void displayData(double*, int, double);

int main()
{
	double* input{}, Total; // Create two pointers for the input and the average. 
	
	int ExpAmount; // Create integer for the amount of expenses. 
	cout << setw(49) << "How many household expenses are you entering? "; // Start - Asks user for the length of the array.
	cin >> ExpAmount; // Take in the amount of the array. 

	input = new double[ExpAmount]; // Array length equal to the users choice. 

	getInput(input, ExpAmount); // Call the path of getting the input. 

	Sort(input, ExpAmount); // Call the path of sorting in accending order. 

	Total = getTotal(input, ExpAmount); // The total amount is equal to the final amount when calculated by the getTotal path. 

	displayData(input, ExpAmount, Total); // Call the displayData path do display the data. 

	// Each of these paths have the required information between the parentheses for them to execute properly. 

	return 0;
}
void getInput(double* input, int ExpAmount) // Get the input path.
{
	for (int i = 0; i < ExpAmount; i++) // For loop set to execute as many times as the dynamic array needs. 
		
		do {
			cout << setw(27) << "Enter household expense " << (i + 1) << ": $"; // Question
			cin >> *(input + i); // Take in the information and move one space in the array. 

			if (*(input + i) < 0) // *** Error Message ***
			{
				cout << setw(37) << "Negative amounts are not allowed.\n"; 
				cout << setw(26) << "Enter another amount: $";
				cin >> *(input + i);
			} 
		} while (*(input + i) < 0); // Only execute when less than 0.
}

void Sort(double* input, int ExpAmount) // Path for sorting. 
{
	double minVal;
	int sort, minAmt;  
	// Declare variables that will be used to sort the aray. ^^^
	for (sort = 0; sort < (ExpAmount - 1); sort++) // For loop to execute comparision as long as the array is. 
	{
		minAmt = sort; 
		minVal = *(input + sort);
		for (int i = sort + 1; i < ExpAmount; i++) // For loop to execute comparision as long as the array is. 
		{
			if (*(input + i) < minVal) // Compare and switch the integers if needed.
			{
				minVal = *(input + i);
				minAmt = i;  
			}

		}
	}
}

double getTotal(double* input, int ExpAmount) // Path for getting the total amount. 
{
	double Total = 0.0; {};

	for (int i = 0; i < ExpAmount; i++) // For loop set to execute as long as the dynamic array is. 
	{
		Total += *(input + i); // Take the first integer and add it to the next integer until the array is finished. 
	}
	return Total; // Get final total. 
}

void displayData(double* input, int ExpAmount, double Total) // Path to dispaly data.
{
	cout << "\n"; // Formatting. 
	cout << setw(57) << "The amounts in ascending order, and the totals, are: \n" << endl; // Title
	cout << setw(9) << "Amount" << endl; // Title
	cout << setw(13) << "--------\n\n"; // Organization

	for (int i = 0; i < ExpAmount; i++) // For loop set to execute until the array is all outputted.
	{
		cout << setw(4) << fixed << showpoint << setprecision(2); // Formatting with width. 
		cout << "$" << *(input + i) << endl; // Go through each of the numbers in the array. 
	}
	cout << "\n"; // Formatting.
	cout << setw(31) << "Total Amount of Expenses : $" << Total << endl; // Output title along with total amount. 
}