#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	// initialize variables
	string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;
	char choice;


	// loop for user to enter letter grade, credit hours, then choose to continue or not
	do
	{
	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;

	cout<<"\n";

	cout << "Enter y or Y to continue: ";
	cin >> choice;

	cout<<"\n";

	}
	while (choice == 'y' || choice == 'Y');
	



	// calculation and display of GPA after entry of grades and credit hours has finished
	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << "GPA: " << gpa;

	return 0;
}


//comment added so VSCode picks up on a change being made and a commit and be pushed to GitHub, 6/23/2020