#ifndef __ORDER_H
#define __ORDER_H 2016
class Customer;
class SalesAssoc;
class RobotModel;


class Order {
public:
    Order(int p_orderNum, string p_date, string p_status)
    :orderNumber(p_orderNum), date(p_date), status(p_status) {};

    int get_orderNum();
    string get_date();
    void to_string();
    string get_status();
    void change_status();
    double robot_price();
    double calc_shipping();
    double calc_tax();
    double total_price();
    Order *sNext; // points to the next order in the shop list
    Order *cNext; // points to the next order in the customer list
    Order *empNext; //points to the next oder for employee
    Customer *customer = NULL;
    SalesAssoc *salesAssoc = NULL;
    RobotModel *robotModel = NULL;
private:
    int orderNumber;
    string date;
    string status;
};
#endif // __ORDER_H
