//main
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"

#include <iostream>

using std::cout; using std::cin; 




int main()
{
    //initialize selection variable, as well as variables for employee types to calculate pay
    int selection;
    double base_pay, bonus, hours, rate, commission;



    do
    {
      cout<<"Enter 1 to calculate engineer pay, or enter 2 to calculate sales employee pay. Enter 0 to exit: ";
      cin>>selection;
      cout<<"\n"<<"\n";

      if(selection == 1)
      {
        cout<<"Enter base pay: $";
        cin>>base_pay;
        cout<<"\n";

        cout<<"Enter bonus pay: $";
        cin>>bonus;
        cout<<"\n";

        Employee *engineer = new Engineer(base_pay, bonus);
        
        cout<<"Engineer gross pay: $"<<engineer->get_pay()<<"\n";
        cout<<"\n";

        delete engineer;
        engineer = nullptr;
      }
      else if(selection == 2)
      {
        cout<<"Enter hours worked: ";
        cin>>hours;
        cout<<"\n";

        cout<<"Enter hourly rate in dollars: $";
        cin >>rate;
        cout<<"\n";

        cout<<"Enter sales commission in dollars: $";
        cin >>commission;
        cout<<"\n";

        Employee *sales_employee = new SalesEmployee(hours, rate, commission);

        cout<<"Sales employee total pay: $"<<sales_employee->get_pay()<<"\n";
        cout<<"\n";

        delete sales_employee;
        sales_employee = nullptr;
      }
      else if(selection == 0)
      {
        cout<<"\n"<<"Exiting program..."<<"\n";
      }
      else
      {
        cout<<"That was not a valid option. Please try again.";
        cout<<"\n"<<"\n";
      }
      


    } while (selection != 0);
    


    
    
    return 0;
}