// Artyom Simitian, CS 117, Sections 20670 & 20671
// A program that asks for a password and then verify that it meets the stated criteria. If it doesn't, the program should display a message telling the user why.

#include <iostream>
#include <string>
using namespace std;


void requirments() // Function that displays the requirments.
{
	cout << "Password Requirments: \n" << endl;
	cout << "  - The password should be atleast 9 characters long. " << endl;
	cout << "  - The password should contain at least one uppercase\n    and at least one lowercase letter.\n";
	cout << "  - The password should have at least one digit and at least one special character. \n" << endl;
	cout << "Enter your password: "; // Requirments ^^^
}

void scan() // Function that scans through the input and checks to see if it is valid. 
{

	string password;

	cin >> password; // Take in the string (password)

	int x, length, upper, lower, digit, special; // Declare integers 

	upper = lower = digit = special = 0; // set them equal to 0 for now. 

	length = password.length(); // Length is set to the password
	for (x = 0; x < length; x++) // For loop to go through the string
	{

		if (password[x] >= '0' && password[x] <= '9') // If the password submitted is greater than 0 and less than 9, digit is set equal to 1. 
			digit = 1;
		else
			
			if (password[x] >= 'A' && password[x] <= 'Z') // If the password submitted has characters (captial) ranging from A to Z, upper is set equal to 1. 
				upper = 1;
		
		if (password[x] >= 'a' && password[x] <= 'z') // If the password submitted has characters (lowercase) ranging from a to z, lower is set equal to 1. 
			lower = 1;

		if (password[x] >= 33 && password[x] <= 47) // If the password has the characters between 33 and 47 from the ASCII chart, special is equal to 1. 
			special = 1;
	}

	if (length >= 9 && digit == 1 && upper == 1 && lower == 1 && special == 1)
	{
		cout << "The password is valid.\n"; // If everything is equal to 1 (therefor valid) this cout statement will be printed. 
	}
	else
	{
		cout << "The password is invalid." << endl; // If it is not valid in any way first the program will print that the password is not valid ----
		// then list why its not.
		if (length < 9) //If the length is less than 9 then the password is invalid and the invalid statement will be printed below.
		{
			cout << "It should be at least 9 characters long.\n";
		}
		
		if (!upper) // If upper is not equal to 1 (stayed at 0) this error message will be printed, as there are no uppercase letters. 
		{
			cout << "It should contain at least one uppercase letter.\n";
		}
		if (!digit) // If digit is not equal to 1 (stayed at 0) this error message will be printed, as there are no digits. 
		{
			cout << "It should have at least one digit.\n";
		}
		if (!lower) // If lower is not equal to 1 (stayed at 0) this error message will be printed, as there are no lowercase letters. 
		{
			cout << "It should contain at least one lowercase letter.\n";
		}
		if (!special) // If special is not equal to 1 (stayed at 0) this error message will be printed, as there are no special characters). 
		{
			cout << "It should have at least one special character.\n";
		}
	} // CLARIFICATION: IF THERE WERE ANY UPPERCASE, LOWERCASE, SPECIAL, OR DIGIT CHARACTERS THESE INTEGERS WOULD HAVE BEEN SET TO 1. (NOT PRINTING THESE ERROR MESSAGES)
}

int main() // Main path.
{
	requirments(); // Call the main requirments path first (1)
	scan(); // Call scan path second (2)
	return 0; // Return the program with 0 errors. 
}