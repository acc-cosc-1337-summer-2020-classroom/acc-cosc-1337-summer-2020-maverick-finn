#include "payroll.h"

using std::cout; using std::setw;

const double FICA_TAX_RATE = 0.062;
const double OT_MULT = 1.5;
//
/*
Function gross_pay returns the product of hours and rate.  The function pays
straight time, there is not overtime.
*/

double get_fica_tax_total(double gross_pay)
{
    return gross_pay * FICA_TAX_RATE;
}

double get_regular_pay(int hour, double rate)
{
    double regular_pay{0};


    
    if(hours > 0)
    {
        if(hours > 40)
        {
            hours = 40;
        }

        regular_pay = hours * rate;
    }


    return regular_pay;
}



double get_ot_pay(int hours, double rate)
{
    double overtime_pay{0};

    if(hours > 40)
    {
        overtime_pay = (hours - 40) * OT_MULT * rate;
    }
    

    return overtime_pay;
}

void display_pay(int hours, double rate)
{
    double regular_pay{0}, overtime_pay{0}, fica_tax_total{0}, gross_pay{0}, net_pay{0};

    regular_pay = get_regular_pay(hours, rate);
    overtime_pay = get_ot_pay(hours, rate);
    
    gross_pay = regular_pay + overtime_pay;
    fica_tax_total = get_fica_tax_total(gross_pay);

    net_pay = regular_pay + overtime_pay - fica_tax_total;


    cout<<std::fixed<<std::setprecision(2);
    cout<<setw(17)<<"Regular Pay: "<<setw(7)<<regular_pay<<"\n";
    cout<<setw(17)<<"Overtime Pay: "<<setw(7)<<overtime_pay<<"\n";
    cout<<setw(17)<<"Gross Pay: "<<setw(7)<<gross_pay<<"\n";
    cout<<setw(17)<<"FICA Reduction: "<<setw(7)<<fica_tax_total<<"\n";
    cout<<setw(17)<<"Net Pay: "<<setw(7)<<net_pay<<"\n";


}