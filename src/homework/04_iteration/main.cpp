//write include statements
#include<iostream>
#include<string>
#include "dna.h"
//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	//initialize variables
	char repeat;
	string operation;
	string dna_string;
	bool check;



	do
	{
		
		//do while to get 1 or 2 to indicate what we're doing with the DNA string
		do
		{
			cout << "Enter 1 to get GC content, or enter 2 to get DNA complement: ";
			cin >> operation;

			if(operation != "1" && operation != "2")
			{
				cout << "That was not a 1 or a 2." << "\n";
			}

		} while (operation != "1" && operation != "2");
		
		//do while to get a proper DNA string
		do
		{
			cout << "Enter DNA string comprised of A, T, G, and C characters: ";
			cin >> dna_string;

			for(int i = 0; i<dna_string.size(); i++)
			{
				switch(dna_string[i])
				{
					case 'A':
						check = true;
						break;
					case 'T':
						check = true;
						break;
					case 'G':
						check = true;
						break;
					case 'C':
						check = true;
						break;
					default:
						check = false;
						break;
				}
			}

			if(check == false)
			{
				cout << "That DNA string contained characters besides A, T, G, and C." << "\n";
			}

		} while (check == false);
		
		cout << "\n";

		//if statement performs function based on if user entered a 1 or a 2. Because a do-while loop above
		//  only allows for a 1 or a 2 to pass, all instances of 'else' will be 2.
		if(operation == "1")
		{
			cout << "DNA string GC content: " << get_gc_content(dna_string);
		}
		else
		{
			cout << "DNA complement: " << get_dna_complement(dna_string);
		}
		
		cout << "\n";


		//Determines if loop continues
		cout << "Enter y or Y to continue: ";
		cin >> repeat;
		cout<<"\n";


	} while (repeat == 'y' || repeat == 'Y');
	




	
	return 0;
}