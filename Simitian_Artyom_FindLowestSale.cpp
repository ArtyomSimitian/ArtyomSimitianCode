// Artyom Simitian, CS 117, Sections 20670 & 20671
// A program that determines which of five salespeople (David, John, Laura, Andy, Cathy) had the lowest reported sales last year. Using Layered Function Calls. 
#include <iostream>
#include <iomanip> // For formatting.
using namespace std;

void findLowest() // Execute "findLowest()" after executing "getSalesAmt()". 
{
	double David, John, Laura, Andy, Cathy; // Variables for each individual sales person. 

	double getSalesAmt(); // This function asks for information about each sales person and stores the information for each variable. 
	{
		cout << "How much is the sales amount for: David\t $";
		cin >> David;
		while(David < 0) // Incase the value that is enterd is negative or less than 0, it will ask the user to put in a positive value instead. 
		{                // This is repeated for all of the variables David, John, Laura, Andy, and Cathy. ^^^
			cout << "The sales amount must be a positive number.\n";
			cout << "How much is the sales amount for: David\t $";
			cin >> David;
		}

		cout << "How much is the sales amount for: John\t $"; // After Davids information is properly recorded it will move onto Johns and so on. 
		cin >> John;
		while(John < 0)
		{
			cout << "The sales amount must be a positive number.\n";
			cout << "How much is the sales amount for: John\t $";
			cin >> John;
		}

		cout << "How much is the sales amount for: Laura\t $";
		cin >> Laura;
		while (Laura < 0)
		{
			cout << "The sales amount must be a positive number.\n";
			cout << "How much is the sales amount for: Laura\t $";
			cin >> Laura;
		}

		cout << "How much is the sales amount for: Andy\t $";
		cin >> Andy;
		while (Andy < 0)
		{
			cout << "The sales amount must be a positive number.\n";
			cout << "How much is the sales amount for: Andy\t $";
			cin >> Andy;
		}

		cout << "How much is the sales amount for: Cathy\t $";
		cin >> Cathy;
		while (Cathy < 0)
		{
			cout << "The sales amount must be a positive number.\n";
			cout << "How much is the sales amount for: Cathy\t $";
			cin >> Cathy;
		}
	}
	// After storing all of the information the "findLowest()" will start to execute its main path, comparing each of the variables to each other. 
		if (David < John && David < Laura && David < Andy && David < Cathy)
		{
			cout << "\n\nDavid had the lowest number of reported sale(s) last year.\n\n";
			cout << "David's reported amount was $" << setprecision(2) << showpoint << fixed << David << "." << endl;
		}
	// Each of the "if" and "else if" lines will start to execute from top to bottom until one is conisdered "true". 
		else if (John < David&& John < Laura&& John < Andy&& John < Cathy)
	// The variable is compared to the other four to see if it is less than the rest. (This is the case for all of the variables).
		{
			cout << "\n\nJohn had the lowest number of reported sale(s) last year.\n\n";
			cout << "John's reported amount was $" << setprecision(2) << showpoint << fixed << John << "." << endl;
		}
	// When the "true" case is found it will execute that piece of code and set the output of the lowest amount to USD format using "setprecision(2) << showpoint << fixed". 
		else if (Laura < John && Laura < David && Laura < Andy && Laura < Cathy)
		{
			cout << "\n\nLaura had the lowest number of reported sale(s) last year.\n\n";
			cout << "Laura's reported amount was $" << setprecision(2) << showpoint << fixed << Laura << "." << endl;
		}

		else if (Andy < John && Andy < Laura && Andy < David && Andy < Cathy)
		{
			cout << "\n\nAndy had the lowest number of reported sale(s) last year.\n\n";
			cout << "Andy's reported amount was $" << setprecision(2) << showpoint << fixed << Andy << "." << endl;
		}

		else if (Cathy < John && Cathy < Laura && Cathy < Andy && Cathy < David)
		{
			cout << "\n\nCathy had the lowest number of reported sale(s) last year.\n\n";
			cout << "Cathy's reported amount was $" << setprecision(2) << showpoint << fixed << Cathy << "." << endl;
		}
}

int main() // The main path is what starts all of this and calls the other "findLowest()" function which also calls the "getSalesAmt()" function. 
{		   // CLARIFICATION: Just because findLowest() is called first does not mean it will start to find the lowest value first.
		   // It WILL call the "getSalesAmt()" path first as this is apart of the "findLowest()" path (function). 
	findLowest();
	return 0;
}
