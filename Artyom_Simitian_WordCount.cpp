// Artyom Simitian, CS 117 Sections 20670 & 20671
// This program takes in a set of 80 characters and determines the amount of words in the sentence.
// Maximum amount of words that can be accepted will be 40. 
// EXPECT ANSWER BETWEEN: 0 AND 40. 

#include <iostream>
#include <string> // For the string. 
#include <iomanip> // For formatting. 
using namespace std;

int WordCount(char* c) //character pointer to c.
{
    int space = 0;

    int count = 0; // To integers set equal to 0 to help compare and contrast the characters of the string accepted. 

    while (*c) // While statement for c.
    {
        // c is just short for characters (easier to understand what it is referencing)
        if (*c == ' ') // If is a space ' ', space will be assigned to 0.
        {
            space = 0;
        }

        else if (space == 0) // If space is not equal to 0 ->
        { // Space will be set equal to 1 (therefor there is a character) and count will be increased by 1. 
            space = 1;

            count++;
        }
        c++; // Move onto the next character in the string whether or not space is equal to 0 or 1. 
    }
    return count; // Get the final count. 
}

int main()
{
    char str[80]; // Max string intake set to 80

    cout << "Enter a C-string containing 80 or fewer characters: " << endl; // Question

    cin.getline(str, 80); // Accept the string of 80 characters (even if it less than 80).

    cout << "\nThe number of words in the C-string: " << WordCount(str) << endl; // Print the title along with calling the function (which gets the total amount of words)
    
    return 0;
}