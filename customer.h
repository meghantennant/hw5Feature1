#ifndef __CUSTOMER_H
#define __CUSTOMER_H 2016
#include "order.h"
class Customer {
public:
    Customer(string p_name, int custNum, double p_wallet)
    : name(p_name) , customerNumber(custNum) , wallet(p_wallet) {};

    string get_name();
    int get_cust_num();
    double get_wallet();
    void set_wallet(double money);
    void to_string();
    void view_orders();
    Order *orders = NULL;
    Customer *next;


private:
    string name;
    int customerNumber;
    double wallet;
};
#endif // __CUSTOMER_H
