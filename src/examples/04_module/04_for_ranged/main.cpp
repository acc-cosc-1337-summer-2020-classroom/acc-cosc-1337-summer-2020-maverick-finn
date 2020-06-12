#include<string>
#include<iostream>
#include "for_ranged.h"

int main() 
{
	std::string name = "John";
	loop_string_w_index(name);
	cout<"\n";
	loop_string_for_range(name);



	return 0;
}