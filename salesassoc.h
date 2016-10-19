#ifndef __SALESASSOC_H
#define __SALESASSOC_H 2016
class Order;

class SalesAssoc {
public:
    SalesAssoc(string p_name, int p_empID) : name(p_name), employeeID(p_empID) {};
    void to_string();
    string get_name();
    int get_id();
    int get_num_orders();
    Order *orders = NULL;
    SalesAssoc *next;

private:
    string name;
    int employeeID;

};
#endif // __SALESASSOC_H
