#include "std_lib_facilities.h"
#include "order.h"
#include "customer.h"
#include "robotmodel.h"
#include "salesassoc.h"

int Order::get_orderNum()
{
    return orderNumber;
}

string Order::get_date()
{
    return date;
}

void Order::to_string()
{
    cout <<endl << endl;
    cout <<"Order Number: " << orderNumber << endl;
    cout <<"Date: " << date << endl;
    cout <<"Customer: " << customer->get_name() << " " << customer->get_cust_num() << endl;
    cout <<"Sales Associate: " << salesAssoc->get_name() << " " << salesAssoc->get_id() << endl;
    cout <<"Total Price: " << total_price() << endl;
    cout <<"STATUS: " << status << endl;
}

string Order::get_status()
{
    return status;
}

void Order::change_status()
{
    string newStatus;
    cout << "Status? " << endl;
    cin.ignore();
    getline(cin, newStatus);

    status = newStatus;
}

double Order::robot_price()
{
    return robotModel->get_price();
}

double Order::calc_shipping()
{
    double shipping = 6.75;

    int weight = robotModel->get_weight();

    shipping += (weight * 0.30);

    return shipping;
}

double Order::calc_tax()
{
    double price = robot_price();
    return (price * 0.0825);
}

double Order::total_price()
{
    double price = robot_price() + calc_shipping() + calc_tax();
    return price;
}
