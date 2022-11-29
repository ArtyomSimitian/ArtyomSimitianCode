// Artyom Simitian, CS 117, Sections 20670 & 20671
// This program finds the average amount of meat purchased per day by all 3 customers. 
// The least amount of meat purchased throughout the week by any of the customers. 
// The most amount of meat purchased throughout the week by any of the customers. 

#include <iostream>
using namespace std;

void purchase() // This path figures out the amount of meat bought every day by each customer. 
{
	const int ROWS = 3; // Three rows. 
	const int COLS = 3; // Three collums.
	double customers[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) // For loop to take in information until the array of rows is full. 
	{
		for (int j = 0; j < COLS; j++) // For loop to take in information until the array of cols is full. 
		{
			cout << "Enter how many pounds of meat purchased by customer " << j + 1 << " on day " << i + 1 << ": " << endl; // Question which has increasing values for each of the days and customers. 
			cin >> customers[i][j];
			while (customers[i][j] < 0)
			{
				cout << "Enter a non-negative amount: "; // Input Validation
				cin >> customers[i][j];
			}
			cout << "\n";
		}
	}
	void average(); // This path figures out the average throughout each of the days. 
	{
		double divide = 3;
		double day1 = customers[0][0] + customers[0][1] + customers[0][2];
		double day2 = customers[1][0] + customers[1][1] + customers[1][2];
		double day3 = customers[2][0] + customers[2][1] + customers[2][2]; //Each of these three lines figures out the total amount bought by each of the customers for each day. 

		double average1 = day1 / divide;
		double average2 = day2 / divide;
		double average3 = day3 / divide; // Math behind figuring out the average. 

		{
			cout << "--------------------------------------------------------------------\nAverage Bought Every Day:\n" << endl; // Organization
			cout << "The average amount of meat purchased on day 1 is " << average1 << " pounds.\n\n";
			cout << "The average amount of meat purchased on day 2 is " << average2 << " pounds.\n\n"; // These three lines show the average for each of the three days. 
			cout << "The average amount of meat purchased on day 3 is " << average3 << " pounds.\n\n";
			cout << "--------------------------------------------------------------------\nLeast Bought Every Day:\n" << endl; // Organization
		}
	}
	void least(); // This path figures out the least amount of meat bought for each day of the week. 
	{ //Compares each of the customers to each other to figure out the lowest amount bought for each day. (Whichever amount for each day is the least). 
		if (customers[0][0] < customers[0][1] && customers[0][0] < customers[0][2]) // For customer 1
		{
			cout << "Customer 1 purchased the least amount of meat of " << customers[0][0] << " pounds, on day 1.\n\n";
		}
		else if (customers[0][1] < customers[0][0] && customers[0][1] < customers[0][2])
		{
			cout << "Customer 2 purchased the least amount of meat of " << customers[0][1] << " pounds, on day 1.\n\n";
		}
		else if (customers[0][2] < customers[0][0] && customers[0][2] < customers[0][1])
		{
			cout << "Customer 3 purchased the least amount of meat of " << customers[0][2] << " pounds, on day 1.\n\n";
		}

		if (customers[1][0] < customers[1][1] && customers[1][0] < customers[1][2]) // For customer 2
		{
			cout << "Customer 1 purchased the least amount of meat of " << customers[1][0] << " pounds, on day 2.\n\n";
		}
		else if (customers[1][1] < customers[1][0] && customers[1][1] < customers[1][2])
		{
			cout << "Customer 2 purchased the least amount of meat of " << customers[1][1] << " pounds, on day 2.\n\n";
		}
		else if (customers[1][2] < customers[1][0] && customers[1][2] < customers[1][1])
		{
			cout << "Customer 3 purchased the least amount of meat of " << customers[1][2] << " pounds, on day 2.\n\n";
		}

		if (customers[2][0] < customers[2][1] && customers[2][0] < customers[2][2]) // for customer 3
		{
			cout << "Customer 1 purchased the least amount of meat of " << customers[2][0] << " pounds, on day 3.\n\n";
		}
		else if (customers[2][1] < customers[2][0] && customers[2][1] < customers[2][2])
		{
			cout << "Customer 2 purchased the least amount of meat of " << customers[2][1] << " pounds, on day 3.\n\n";
		}
		else if (customers[2][2] < customers[2][0] && customers[2][2] < customers[0][1])
		{
			cout << "Customer 3 purchased the least amount of meat of " << customers[2][2] << " pounds, on day 3.\n\n";
		}
	}
	void most(); // This path figures out the most amount of meat bought for each day of the week. 
	{ //Compares each of the customers to each other to figure out the most amount bought for each day. (Whichever amount for each day is the most).
		cout << "--------------------------------------------------------------------\nMost Bought Every Day:\n" << endl; // Title
		if (customers[0][0] > customers[0][1] && customers[0][0] > customers[0][2]) // For customer 1
		{
			cout << "Customer 1 purchased the most amount of meat of " << customers[0][0] << " pounds, on day 1.\n\n";
		}
		else if (customers[0][1] > customers[0][0] && customers[0][1] > customers[0][2])
		{
			cout << "Customer 2 purchased the most amount of meat of " << customers[0][1] << " pounds, on day 1.\n\n";
		}
		else if (customers[0][2] > customers[0][0] && customers[0][2] > customers[0][1])
		{
			cout << "Customer 3 purchased the most amount of meat of " << customers[0][2] << " pounds, on day 1.\n\n";
		}

		if (customers[1][0] > customers[1][1] && customers[1][0] > customers[1][2]) // For customer 2
		{
			cout << "Customer 1 purchased the most amount of meat of " << customers[1][0] << " pounds, on day 2.\n\n";
		}
		else if (customers[1][1] > customers[1][0] && customers[1][1] > customers[1][2])
		{
			cout << "Customer 2 purchased the most amount of meat of " << customers[1][1] << " pounds, on day 2.\n\n";
		}
		else if (customers[1][2] > customers[1][0] && customers[1][2] > customers[1][1])
		{
			cout << "Customer 3 purchased the most amount of meat of " << customers[1][2] << " pounds, on day 2.\n\n";
		}

		if (customers[2][0] > customers[2][1] && customers[2][0] > customers[2][2]) // For customer 3
		{
			cout << "Customer 1 purchased the most amount of meat of " << customers[2][0] << " pounds, on day 3.\n\n";
		}
		else if (customers[2][1] > customers[2][0] && customers[2][1] > customers[2][2])
		{
			cout << "Customer 2 purchased the most amount of meat of " << customers[2][1] << " pounds, on day 3.\n\n";
		}
		else if (customers[2][2] > customers[2][0] && customers[2][2] > customers[0][1])
		{
			cout << "Customer 3 purchased the most amount of meat of " << customers[2][2] << " pounds, on day 3.\n\n";
		}
	}
}

int main() // Main path that calls the secondary path of "void purchase". 
{
	purchase();
	return 0; // Compile program with zero errors. 
}

