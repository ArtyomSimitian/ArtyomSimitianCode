// Artyom Simitian, CS 117, Sections 20670 & 20671
// This program has a predetermined budget for a store set in place.
// With this it will compare it to the actual expendatures which will be inputted by the store owner. 
// After the expendatures have been inputted, the program will display a final report. 
// Showing the difference for each category and whether the total amount is less/greater than or equal to the original budget. 

#include <iostream>
#include <iomanip> // Formatting

using namespace std;

struct MonthlyStoreExpendatures  // Public variables using struct
{ // Original budget
    double budget_rent;
    double budget_utilities;
    double budget_supplies;
    double budget_tax;
    double budget_insurance;
    double budget_miscellaneous;
    // Variables for each category
    double rent;
    double utilities;
    double supplies;
    double tax;
    double insurance;
    double miscellaneous;
};

void enterStoreBudget(MonthlyStoreExpendatures& budget) // Path for the expendatures with a reference to each category.
{
    cout << "\n_________________________________________________________" << endl; // Organization
    cout << "|Store Budget:" << setw(43) << "|" << endl; //Title
    cout << "|_______________________________________________________|" << endl; // Organization
    // Asks for amount spent for each category and assigns the amount inputted to each individual expendature.
    cout << " Enter budget for rent: ";
    cin >> budget.budget_rent;

    cout << " Enter budget for utilities: ";
    cin >> budget.budget_utilities;

    cout << " Enter budget for supplies: ";
    cin >> budget.budget_supplies;

    cout << " Enter budget for tax: ";
    cin >> budget.budget_tax;

    cout << " Enter bduget for insurance: ";
    cin >> budget.budget_insurance;

    cout << " Enter the expected miscellaneous expenses: ";
    cin >> budget.budget_miscellaneous;
}
void enterExpendaturesAmounts(MonthlyStoreExpendatures& spent)
{

    cout << "\n\n_________________________________________________________" << endl;
    cout << "|Store Expendatures:" << setw(37) << "|" << endl;
    cout << "|_______________________________________________________|" << endl;

    cout << " Enter the amount spent on rent: ";
    cin >> spent.rent;

    cout << " Enter the amount spent on utilities: ";
    cin >> spent.utilities;

    cout << " Enter the amount spent on supplies: ";
    cin >> spent.supplies;

    cout << " Enter the amount spent on tax: ";
    cin >> spent.tax;

    cout << " Enter the amount spent on insurance: ";
    cin >> spent.insurance;

    cout << " Enter the amount spent on miscellaneous expenses: ";
    cin >> spent.miscellaneous;
}

void displayBudgetReport(const MonthlyStoreExpendatures& budget, const MonthlyStoreExpendatures& spent) // Path to display final report.
{
    // Each cout statement states its own category and outputs the budget then the rent and finally the difference between the two.
    // *** Each ouput has its own setw to keep the report organized ***
    cout << setprecision(2) << fixed << showpoint; // Formatting for all display outputs. 

    cout << " Rent" << setw(24) << budget.budget_rent << setw(9)
        << spent.rent << setw(17) << budget.budget_rent - spent.rent << endl;

    cout << " Utilities" << setw(19) << budget.budget_utilities << setw(9)
        << spent.utilities << setw(17) << budget.budget_utilities - spent.utilities << endl;

    cout << " Supplies" << setw(20) << budget.budget_supplies << setw(9)
        << spent.supplies << setw(17) << budget.budget_supplies - spent.supplies << endl;

    cout << " Tax" << setw(25) << budget.budget_tax << setw(9)
        << spent.tax << setw(17) << budget.budget_tax - spent.tax << endl;

    cout << " Insurance" << setw(19) << budget.budget_insurance << setw(9)
        << spent.insurance << setw(17) << budget.budget_insurance - spent.insurance << endl;

    cout << " Miscellanous" << setw(16) << budget.budget_miscellaneous << setw(9)
        << spent.miscellaneous << setw(17) << budget.budget_miscellaneous - spent.miscellaneous << endl;


    // Total spent is equal to all of the categories added up. 
    double totalSpent = spent.rent + spent.utilities +
        spent.supplies + spent.tax + spent.insurance + spent.miscellaneous;
    // Total expected is equal to all of the original budget prices added up.
    double totalExpected = budget.budget_rent + budget.budget_utilities +
        budget.budget_supplies + budget.budget_tax + budget.budget_insurance + budget.budget_miscellaneous;

    if (totalExpected - totalSpent > 0) // If the original budget minus the total spent is greater than 0 then the store owner is under budget. 
    {
        cout << "_________________________________________________________" << endl; // Organization
        cout << " For the month you are under budget by " << "$" << totalExpected - totalSpent << endl; // Title with amount left over.
        cout << "_________________________________________________________" << endl;
    }
    else if (totalExpected - totalSpent < 0) // If the original budget minus the total spent is less than 0 then the store owner is over budget. 
    {
        cout << "_________________________________________________________" << endl; // Organization
        cout << " For the month you are over budget by " << "$" << totalExpected - totalSpent << endl; // Title with amount spent over.
        cout << "_________________________________________________________" << endl; // Organization
    }
    else if (totalExpected - totalSpent == 0) // If the original budget minus the total spent is equal to 0 then the store owner is not under nor over budget.
    {
        cout << "_________________________________________________________" << endl; // Organization
        cout << " For the month you spent your total budget of " << "$" << totalExpected << endl; // Title with original budget amount.
        cout << "_________________________________________________________" << endl; // Organization
    }
}

int main() // Main path 
{
    MonthlyStoreExpendatures budget, spent; // Variables from the struct.
    enterStoreBudget(budget); // First, call the path that asks for the initial budget. (budget)
    enterExpendaturesAmounts(spent);  // Second, call the path that asks for the final expendature costs. (spent)

    cout << "\n\n_________________________________________________________" << endl; // Organization
    cout << "|Type of Expense     Budgeted    Spent    Over(-)/Under |" << endl; // Title
    cout << "|_______________________________________________________|" << endl; // Organization
    displayBudgetReport(budget, spent); // Display report with the variables budget and spent being needed. 

    return 0; // Return the function with 0 errors. 
}