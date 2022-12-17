//// artyom simitian, cs 117, sections 18790 & 18791
//// the program will ask the user for the base and height of a triangle, then display the triangle's area.
//
//
//#include <iostream>
//#include <iomanip> // for formatting
//using namespace std;
//
//int main()
//
//{
//	double base;
//	double height; // double base and height for more precision. 
//
//	cout << "  enter the traingle's base: "; // ask for the base of the triangle. 
//	cin >> base; // store the base of the traignle. 
//
//	cout << "  enter the triangle's height: "; // ask for the height of the triangle. 
//	cin >> height; // store the height of the triangle. 
//
//	double area = base * height * 0.5; // equation to find the area of the traingle with the given base and height. 
//	// area is not established on the top with "double base;" and "double height" because base and height are not initialized yet.
//	cout << "\n  _____________________";
//	cout << "\n  |traingle's area    |\n"; // title
//	cout << "  |___________________|\n";
//
//	cout << setprecision(2) << fixed << "  |base:     |" << base << "   |" << '\n'; // outputs the title "base:" and the given input.
//	cout << "  |__________|________|\n";
//	cout << setprecision(2) << fixed << "  |height:   |" << height << "   |" << '\n'; // outputs the title "height:" and the given input.
//	cout << "  |__________|________|\n";
//	cout << setprecision(2) << fixed << "  |area:     |" << area << "   |" << '\n'; // outputs the title "area:" and the answer (explained on line 21).
//	cout << "  |__________|________|\n";
//
//	// setprecision(2), sets the result (base, height and area) to 2 decimal places.
//	// fixed sets the results to fixed point notation. 
//
//	return 0;
//}


//#include <iostream>
//#include <iomanip> // for formatting
//using namespace std;
//
//void displaymessage()
//{
//	cout << "hello form the function displaymessage. \n";
//}
//int main()
//{
//	cout << "hello form main.\n";
//	for (int count = 0; count < 5; count++)
//		displaymessage(); // call display message
//	cout << "back in function main again. \n";
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//void displayvalue(int);
//
//int main()
//{
//	cout << "i am passing 5 to displayvalue. \n";
//	displayvalue(5); 
//	cout << "how i am back in main.\v";
//	return 0;
//}
//void displayvalue(int num)
//{
//	cout << "the value is " << num << endl;
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//double getsalesamt()
//{
//	double david, john, laura, andy, cathy;
//
//	showpoint, fixed;
//	cout << "how much is the sales amount for: david\t $";
//	cin >> david;
//	while (david < 0)
//	{
//		cout << "please enter a positive value.\n";
//		cout << "how much is the sales amount for: david\t $";
//		cin >> david;
//	}
//
//	cout << "how much is the sales amount for: john\t $";
//	cin >> john;
//	while (john < 0)
//	{
//		cout << "please enter a positive value.\n";
//		cout << "how much is the sales amount for: john\t $";
//		cin >> john;
//	}
//
//	cout << "how much is the sales amount for: laura\t $";
//	cin >> laura;
//	while (laura < 0)
//	{
//		cout << "please enter a positive value.\n";
//		cout << "how much is the sales amount for: laura\t $";
//		cin >> laura;
//	}
//
//	cout << "how much is the sales amount for: andy\t $";
//	cin >> andy;
//	while (andy < 0)
//	{
//		cout << "please enter a positive value.\n";
//		cout << "how much is the sales amount for: andy\t $";
//		cin >> andy;
//	}
//
//	cout << "how much is the sales amount for: cathy\t $";
//	cin >> cathy;
//	while (cathy < 0)
//	{
//		cout << "please enter a positive value.\n";
//		cout << "how much is the sales amount for: cathy\t $";
//		cin >> cathy;
//	}
//}
//
//void findlowest()
//{
//	double david, john, laura, andy, cathy;
//
//	if (david < john && david < laura && david < andy && david < cathy)
//	{
//		cout << "\n\ndavid had the lowest number of reported sale(s) last year.\n\n";
//		cout << "david's reported amount was $" << david << endl;
//	}
//
//	else if (john < david && john < laura && john < andy && john < cathy)
//	{
//		cout << "\n\njohn had the lowest number of reported sale(s) last year.\n\n";
//		cout << "john's reported amount was $" << john << endl;
//	}
//
//	else if (laura < john && laura < david && laura < andy && laura < cathy)
//	{
//		cout << "\n\nlaura had the lowest number of reported sale(s) last year.\n\n";
//		cout << "laura's reported amount was $" << laura << endl;
//	}
//
//	else if (andy < john && andy < laura && andy < david && andy < cathy)
//	{
//		cout << "\n\nandy had the lowest number of reported sale(s) last year.\n\n";
//		cout << "andy's reported amount was $" << andy << endl;
//	}
//
//	else if (cathy < john && cathy < laura && cathy < andy && cathy < david)
//	{
//		cout << "\n\ncathy had the lowest number of reported sale(s) last year.\n\n";
//		cout << "cathy's reported amount was $" << cathy << endl;
//	}
//}
//
//int main()
//{
//	getsalesamt();
//	findlowest();
//	return 0;
//}
//

//#include <iostream>
//using namespace std;
//
//void showvalue(int quantity)
//{
//	cout << "hello \n";
//	cout << "we are currently in the showvalue path";
//	int x = 1;
//	cout << x;
//}
//
//int main()
//{
//	showvalue(5);
//}
// main function
//#include <iostream>
//
//using namespace std;
//
//void display(int arg1, double arg2, char arg3)
//{
//	cout << "here are the values: " << arg1 << " " << arg2 << " " << arg3 << endl;
//}
//
//int main()
//
//{
//
//	// first you would want to declare each of the variables to each argument.
//
//	int age;
//
//	double income;
//
//	char initial;
//
//	// then we would have to figure out what each of these values are.
//
//	cin >> age;
//
//	cin >> income;
//
//	cin >> initial;
//
//	cout << endl;
//
//	display(age, income, initial);
//
//	return 0;
//
//}

//#include <iostream>
//using namespace std;
//void showvar();
//int main()
//{
//    for (int count = 0; count < 10; count++)
//        showvar();
//    return 0;
//}
//void showvar()
//{
//    static int var = 10;
//    cout << var << endl;
//    var++;
//}
//
//
//#include <iostream>
//using namespace std;
//void showvar(); // function prototype
//int main()
//{
//    for (int count = 0; count < 10; count++)
//        showvar();
//    return 0;
//}
//// definition of function showvar
//void showvar()
//{
//    static int var = 10;
//    cout << var << endl;
//    var++;
//}
// artyom_simitian_meatpurchase.cpp : this file contains the 'main' function. program execution begins and ends there.
//
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void purchase()
//{
//	const int ROWS = 3;
//	const int COLS = 3;
//	double customers[ROWS][COLS];
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << "Enter how many pounds of meat purhcased by customer " << j + 1 << " on day " << i + 1 << ": " << endl;
//			cin >> customers[i][j];
//			while (customers[i][j] < 0)
//			{
//				cout << "Enter a non-negative amount: ";
//				cin >> customers[i][j];
//			}
//			cout << "\n";
//		}
//	}
//	void average();
//	{
//		double divide = 3;
//		double day1 = customers[0][0] + customers[0][1] + customers[0][2];
//		double day2 = customers[1][0] + customers[1][1] + customers[1][2];
//		double day3 = customers[2][0] + customers[2][1] + customers[2][2];
//
//		double average1 = day1/divide;
//		double average2 = day2/divide;
//		double average3 = day3/divide;
//
//		{
//			cout << "The average amount of meat purhcased on day 1 is " << average1 << " pounds.\n\n";
//			cout << "The average amount of meat purhcased on day 2 is " << average2 << " pounds.\n\n";
//			cout << "The average amount of meat purhcased on day 3 is " << average3 << " pounds.\n\n";
//		}
//	}
//	void least();
//	{
//		int customer1 = customers[0][0] + customers[1][0] + customers[2][0];
//		int customer2 = customers[0][1] + customers[1][1] + customers[2][1];
//		int customer3 = customers[0][2] + customers[1][2] + customers[2][2];
//
//		if(customer1 < customer2 && customer1 < customer3)
//		{
//			cout << "Customer 1 purchased the least amount of meat of " << customer1 << " pounds, on day 1.\n\n";
//		}
//		else if(customer2 < customer1 && customer2 < customer3)
//		{
//			cout << "Customer 2 purchased the least amount of meat of " << customer2 << " pounds, on day 1.\n\n";
//		}
//		else if(customer3 < customer1 && customer3 < customer2)
//		{
//			cout << "Customer 3 purchased the least amount of meat of " << customer3 << " pounds, on day 1.\n\n";
//		}
//
//		if (customer1 < customer2 && customer1 < customer3)
//		{
//			cout << "Customer 1 purchased the least amount of meat of " << customer1 << " pounds, on day 1.\n\n";
//		}
//		else if (customer2 < customer1 && customer2 < customer3)
//		{
//			cout << "Customer 2 purchased the least amount of meat of " << customer2 << " pounds, on day 1.\n\n";
//		}
//		else if (customer3 < customer1 && customer3 < customer2)
//		{
//			cout << "Customer 3 purchased the least amount of meat of " << customer3 << " pounds, on day 1.\n\n";
//		}
//		
//
//	}
//}
//
//int main()
//{
//	purchase();
//}
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//// Function prototypes
//void getData(double*, int);
//void selectionSort(double*, int);
//double getAverage(double*, int);
//void displayData(double*, int, double);
//
//int main()
//{
//	double* Test,		// To dynamically allocate an array
//		Average;		// To hold the average of the scores
//	int Scores;			// To hold number of scores
//
//
//	// Get number of scores
//	cout << "How many scores do you have to average? ";
//	cin >> Scores;
//
//	// Dynamically allocate an array larger enough
//	// to hold the user-defined number of scores
//	Test = new double[Scores];	// Allocate memory
//
//	getData(Test, Scores);
//
//	selectionSort(Test, Scores);
//
//	Average = getAverage(Test, Scores);
//
//	displayData(Test, Scores, Average);
//
//	return 0;
//}
//
////*****************************************************************************
////                                 getData                                    *
//// This function asks user to input test scores that are stored in an array.  *
//// The parameter Scores holds the number of test score to be input.           *
////***************************************************************************** 
//void getData(double* Test, int Scores)
//{
//	cout << "Enter each of the scores.\n";
//	for (int i = 0; i < Scores; i++)
//	{
//		do
//		{
//			cout << "Score #" << (i + 1) << ": ";
//			cin >> *(Test + i);
//
//			if (*(Test + i) < 0)
//			{
//				cout << "Scores must be greater than 0.\n"
//					<< "Re-enter ";
//			}
//
//		} while (*(Test + i) < 0);
//	}
//}
////*****************************************************************************
////                              selectionSort                                 * 
//// This function performs an ascending-order selection sort on the Test array *
//// The paramere Scores holds the number of scores in the array.               *
////*****************************************************************************
//void selectionSort(double* Test, int Scores)
//{
//	int startscan, minIndex;
//	double minValue;
//
//	for (startscan = 0; startscan < (Scores - 1); startscan++)
//	{
//		minIndex = startscan;
//		minValue = *(Test + startscan);
//		for (int i = startscan + 1; i < Scores; i++)
//		{
//			if (*(Test + i) < minValue)
//			{
//				minValue = *(Test + i);
//				minIndex = i;
//			}
//
//		}
//		*(Test + minIndex) = *(Test + startscan);
//		*(Test + startscan) = minValue;
//	}
//}
////***************************************************************************** 
////                               getAverage                                   *
//// This function calculates the average of the scores stored in an array.     *
//// The parameter Scores holds the number of scores to average.                * 
////*****************************************************************************
//double getAverage(double* Test, int Scores)
//{
//	double Total;
//
//	for (int i = 0; i < Scores; i++)
//	{
//		Total += *(Test + i);
//	}
//
//	return Total / Scores;
//}
////*****************************************************************************
////                              displayData                                   *
////*****************************************************************************
//void displayData(double* Test, int Scores, double Avg)
//{
//	cout << "\n    Test scores\n";
//	cout << "Number of scores: " << Scores << endl;
//	cout << "Scores in ascending-order:\n";
//	for (int i = 0; i < Scores; i++)
//	{
//		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
//	}
//	cout << fixed << showpoint << setprecision(2);
//	cout << "Average score: " << Avg << endl;
//}
//
//#include <iostream>  
//using namespace std;
//
//int countWords(char* s) {
//    int space = 0;
//    int count = 0; // word count
//    // Scan all characters one by one
//    while (*s) {
//        // If next character is a separator
//        if (*s == ' ' or *s == '\n' or *s == '\t') space = 0;
//        // If next character is not a word separator and
//        // state is 0, then set the state 1 and increment word count
//        else if (space == 0) {
//            space = 1;
//            count++;
//        }
//        s++;
//    }
//    return count;
//}
//int main() {
//    char str[1000];
//    cin.getline(str, 1000);
//    cout << countWords(str);
//}
// Artyom Simitian, CS 117, Sections 18790
// This program takes in patients on a quarterly basis for three different hospitals.
// The total for each individaul hospital is displayed along with its OWN individual average!

//#include <iostream>
//#include <vector> // include vectors
//using namespace std;
//
//struct Hosptial // Struct to make all declared variables public
//{
//    int average_hospital1 = 0;
//    int average_hospital2 = 0;
//    int average_hospital3 = 0;
//    // Basic averages set for each of the hospitals.
//
//    int total_patient1 = 0;
//    int total_patient2 = 0;
//    int total_patient3 = 0;
//    // Basic totals set for each of the hospitals.
//
//    vector<int> hospital1;
//    vector<int> hospital2;
//    vector<int> hospital3;
//    // Create vectors for each of the hospitals. In this case there will be four total inputs.
//
//    vector<int> getPatients() // Get the amount of patients for each of the hospitals.
//    {
//        int i = 0; // Set i equal to 0 for future use.
//
//        vector<int> v1;
//        cout << "First quarter: "; // Question
//        cin >> i; // Take in "a" as the first spot of the vector
//        v1.push_back(i);
//        cout << "Second quarter: "; // Question
//        cin >> i; // Take in "a" as the second spot of the vector
//        v1.push_back(i);
//        cout << "Third quarter: "; // Question
//        cin >> i; // Take in "a" as the third spot of the vector
//        v1.push_back(i);
//        cout << "Fourth quarter: "; // Question
//        cin >> i; // Take in "a" as the fourth spot of the vector
//        v1.push_back(i);
//        // All of the "v1.push_back"s ^^^ are going to push back the integer taken by 1.
//        // The vector currently does not have a limit. But with this step it is increased by 1.
//        // But we are only taking in four integers in this case.
//        return v1; // Return the final vector.
//    }
//
//    int calculate_total(vector<int>v1) // Find the total for the v1 vector
//    {
//        int total = 0; // Set the current total equal to 0
//        for (int i = 0; i < v1.size(); i++) // For loop to go through the vectors current size (4)
//        {
//            total = total + v1[i]; // Go through the array and add each value and assign it to "total"
//        }
//        return total; // Get final amount.
//    }
//
//    int calculate_avg(int total) // calculate the average.
//    {
//        return total / 4;
//        // After taking in four intputs for each term you can get the average by
//        // taking the total and dividing it by the quarters.
//        // CLARIFICATION: Decided the average should not be in decimals as 0.5 of a person does not make sense logically.
//    }
//
//    void final() // Final output path
//    {
//        cout << "\n--------------------------------------"; // Organization
//        cout << "\nTotal admitted patients: \n"; // Title
//        cout << "Hospital 1: " << total_patient1 << "\n";
//        cout << "Hospital 2: " << total_patient2 << "\n"; // Output the total for each hospital
//        cout << "Hospital 3: " << total_patient3 << "\n";
//        cout << "--------------------------------------"; // Organization
//        cout << "\nAverage number of admitted patients: " << "\n"; // Title
//        cout << "Hospital 1: " << average_hospital1 << "\n";
//        cout << "Hospital 2: " << average_hospital2 << "\n"; // Output the average for each hospital
//        cout << "Hospital 3: " << average_hospital3 << "\n";
//        cout << "--------------------------------------" << endl; // Organization
//    }
//};
//
//int main() // main path
//{
//    struct Hosptial H;
//    // Create a variable for struct Hospital path. (H for hospital for easy understanding)
//
//    cout << "Enter the admitted patients for hospital 1: " << "\n"; // Question
//    H.hospital1 = H.getPatients(); // Take in the amount of patients for hospital 1
//    cout << "\nEnter the admitted patients for hospital 2: " << "\n"; // Question
//    H.hospital2 = H.getPatients(); // Take in the amount of patients for hospital 2
//    cout << "\nEnter the admitted patients for hospital 3: " << "\n"; // Question
//    H.hospital3 = H.getPatients(); // Take in the amount of patients for hospital 3
//
//    // Goes into each of their individual vectors^^^
//
//    H.total_patient1 = H.calculate_total(H.hospital1); // Total = Patients = Hospital 1
//    H.total_patient2 = H.calculate_total(H.hospital2); // Total = Patients = Hospital 2
//    H.total_patient3 = H.calculate_total(H.hospital3); // Total = Patients = Hospital 3
//    // This is done to get each hospitals indiviudal total
//
//    H.average_hospital1 = H.calculate_avg(H.total_patient1); // Average = Average Hospital 1
//    H.average_hospital2 = H.calculate_avg(H.total_patient2); // Average = Average Hospital 2
//    H.average_hospital3 = H.calculate_avg(H.total_patient3); // Average = Average Hospital 3
//    // This is done to get each hospitals individual average
//
//    H.final(); // Call the final path
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//struct Hospital
//{
//	string name;
//	int patients[4];
//	int total;
//	float avg;
//};
//
//int main()
//{
//	Hospital hospitals[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "Enter name of hospital: ";
//		cin >> hospitals[i].name;
//
//			for (int j = 0; j < 4; j++)
//			{
//				cout << "Enter number of admitted patients in Q" << j + 1 << ": ";
//				cin >> hospitals[i].patients[j];
//			}
//
//		hospitals[i].total = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			hospitals[i].total += hospitals[i].patients[j];
//		}
//
//		hospitals[i].avg = (float)hospitals[i].total / 4;
//	}
//
//	cout << "\nHospital Data: " << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "Hospital: " << hospitals[i].name << endl;
//		cout << "Total Admitted Patients: " << hospitals[i].total << endl;
//		cout << "Average Number of Admitted Patients: " << hospitals[i].avg << endl;
//		cout << endl;
//	}
//
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void quicksort(std::vector<int>& v, int left, int right)
//{
//    if (left >= right)
//        return;
//
//    int pivot = v[(left + right) / 2];
//    int i = left;
//    int j = right;
//
//    while (i < j)
//    {
//        while (v[i] < pivot)
//            i++;
//
//        while (v[j] > pivot)
//            j--;
//
//        if (i <= j)
//        {
//            std::swap(v[i], v[j]);
//            i++;
//            j--;
//        }
//    }
//
//    quicksort(v, left, j);
//    quicksort(v, i, right);
//}
//
//int main()
//{
//    std::vector<int> v = { 5, 2, 8, 1, 6, 9, 3, 7, 4 };
// 
//    quicksort(v, 0, v.size() - 1);
//
//    for (int i : v)
//        std::cout << i << " ";
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//
//const int WIDTH = 80;
//const int HEIGHT = 20;
//const int PADDLE_WIDTH = 5;
//const int PADDLE_HEIGHT = 1;
//using namespace std;
//
//enum class Direction
//{
//    NONE,
//    UP,
//    DOWN
//};
//
//struct Point
//{
//    int x;
//    int y;
//};
//
//struct Paddle
//{
//    Point pos;
//    Direction dir;
//
//    void move()
//    {
//        if (dir == Direction::UP && pos.y > 0)
//            pos.y--;
//        else if (dir == Direction::DOWN && pos.y + PADDLE_HEIGHT < HEIGHT)
//            pos.y++;
//    }
//};
//
//struct Ball
//{
//    Point pos;
//    int dx;
//    int dy;
//
//    void move()
//    {
//        pos.x += dx;
//        pos.y += dy;
//
//        if (pos.y <= 0 || pos.y >= HEIGHT - 1)
//            dy *= -1;
//    }
//};
//
//void draw(const std::vector<std::string>& screen)
//{
//    for (const auto& row : screen)
//        std::cout << row << std::endl;
//}
//
//void update(std::vector<std::string>& screen, const Paddle& left, const Paddle& right, const Ball& ball)
//{

//#include <iostream>
//using namespace std;
//
//struct MonthlyStoreBudget {
//    double rent;
//    double utilities;
//    double supplies;
//    double tax;
//    double insurance;
//    double miscellaneous;
//};
//
//void enterBudgetAmounts(MonthlyStoreBudget& budget) {
//    cout << "Enter the amount spent on rent: ";
//    cin >> budget.rent;
//
//    cout << "Enter the amount spent on utilities: ";
//    cin >> budget.utilities;
//
//    cout << "Enter the amount spent on supplies: ";
//    cin >> budget.supplies;
//
//    cout << "Enter the amount spent on tax: ";
//    cin >> budget.tax;
//
//    cout << "Enter the amount spent on insurance: ";
//    cin >> budget.insurance;
//
//    cout << "Enter the amount spent on miscellaneous expenses: ";
//    cin >> budget.miscellaneous;
//}
//
//void displayBudgetReport(const MonthlyStoreBudget& budget) {
//    cout << "Rent: $" << budget.rent << " (expected: $2000.00)" << endl;
//    cout << "Utilities: $" << budget.utilities << " (expected: $175.00)" << endl;
//    cout << "Supplies: $" << budget.supplies << " (expected: $7500.00)" << endl;
//    cout << "Tax: $" << budget.tax << " (expected: $800.00)" << endl;
//    cout << "Insurance: $" << budget.insurance << " (expected: $350.00)" << endl;
//    cout << "Miscellaneous: $" << budget.miscellaneous << " (expected: $400.00)" << endl;
//
//    double totalSpent = budget.rent + budget.utilities + budget.supplies + budget.tax + budget.insurance + budget.miscellaneous;
//    double totalExpected = 2000.00 + 175.00 + 7500.00 + 800.00 + 350.00 + 400.00;
//
//    cout << "Total spent: $" << totalSpent << " (expected: $" << totalExpected << ")" << endl;
//}
//
//int main() {
//    MonthlyStoreBudget budget;
//
//    enterBudgetAmounts(budget);
//
//    cout << endl;
//    cout << "Budget report:" << endl;
//    cout << "--------------" << endl;
//    displayBudgetReport(budget);
//
//    return 0;
//}

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