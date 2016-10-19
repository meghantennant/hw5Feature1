#include "std_lib_facilities.h"
#include "salesassoc.h"
#include "order.h"

void SalesAssoc::to_string()
{
    cout << "Name: " << name << endl;
    cout << "Employee ID: " << employeeID <<endl;
    if(orders == NULL)
    {
        cout << "No orders currently" << endl;
    }
    else
    {
        cout << get_num_orders() << " orders." << endl;
    }
}

string SalesAssoc::get_name()
{
    return name;
}

int SalesAssoc::get_id()
{
    return employeeID;
}

int SalesAssoc::get_num_orders()
{
    int token = 0;
    Order *temp = orders;
    while(temp != NULL)
    {
        token++;
        temp = temp->empNext;
    }
    return token;
}
