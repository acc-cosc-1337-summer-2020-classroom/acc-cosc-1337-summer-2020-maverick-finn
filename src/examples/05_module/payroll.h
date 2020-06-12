//
/*
Write double return-value function gross_pay with int parameter(hour) and double parameter (rate)
*/

#include<iostream>
#include<iomanip>



double get_fica_tax_total(double gross_pay=1000);


double get_regular_pay(int hour, double rate);


double get_ot_pay(int hours, double rate);


void display_pay(int hours, double rate);