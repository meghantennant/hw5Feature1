/*#include "std_lib_facilities.h"
#include "order.h"
#include "customer.h"
#include "salesassoc.h"
#include "RobotModel.h"
#include "RobotPart1.h"
#include "head1.h"
#include "arm1.h"
#include "locomotor1.h"
#include "battery1.h"
#include "torso1.h"

int main()
{
    int num = 10025;
    string p_date = "10/13/16";
    Customer *customer = new Customer("Meghan Tennant", 4525, 25.00);
    SalesAssoc *sa = new SalesAssoc("Christopher Rosalez" , 14589);
    RobotModel *rm = new RobotModel("TX500", 1002);
    Arm *arm = new Arm("TX500 Arm", 501, "Arm", 5, 10, "Left arm for TX500");
    rm->add_robotpart(arm);
    Arm *arm2 = new Arm("TX500 Arm", 504, "Arm", 5, 10, "Right arm for TX500");
    rm->add_robotpart(arm2);
    Head *head = new Head("TX500 Head", 502, "Head", 10, 15, "Small head for TX500");
    rm->add_robotpart(head);
    Torso *torso = new Torso("TX500 Torso", 503, "Torso", 25, 50, "Small torso for TX500", 2);
    rm->add_robotpart(torso);

    Order *order = new Order(1548, "10/14/2016", "New");
    order->robotModel = rm;
    order->robotModel->set_price();
    order->customer = customer;
    order->salesAssoc = sa;

    if(order->get_orderNum() != 1548)
    {
        cout <<"Failed. Order number " << order->get_orderNum() << " should be 1548." << endl;
    }
    if(order->get_date() != "10/14/2016")
    {
        cout <<"Failed. Date " << order->get_date() << " should be 10/14/2016." << endl;
    }
    if(order->get_status() != "New")
    {
        cout <<"Failed. Status " << order->get_status() << " should be New." << endl;
    }
    if(order->robotModel->get_price() != 85)
    {
        cout <<"Failed. Robot price " << order->robotModel->get_price() << " should be 85." << endl;
    }
    if(order->calc_shipping() != 20.25)
    {
        cout <<"Failed. Shipping " << order->calc_shipping() << " should be 20.25." << endl;
    }
    if(order->total_price() != 112.2625)
    {
        cout <<"Failed. Total Price " << order->total_price() << " should be 112.2625." << endl;
    }
    if(order->customer->get_name() != "Meghan Tennant")
    {
        cout <<"Failed. Customer name " << order->customer->get_name() << " should be Meghan Tennant." << endl;
    }
    if(order->customer->get_cust_num() != 4525)
    {
        cout <<"Failed. Customer number " << order->customer->get_cust_num() << " should be 4525." << endl;
    }
    if(order->customer->get_wallet() != 25.00)
    {
        cout <<"Failed. Customer wallet " << order->customer->get_wallet() << " should be 25.00" << endl;
    }
    if(order->salesAssoc->get_name() != "Christopher Rosalez")
    {
        cout <<"Failed. Sales Assoc " << order->salesAssoc->get_name() << " should be Christopher Rosalez." << endl;
    }
    if(order->salesAssoc->get_id() != 14589)
    {
        cout <<"Failed. Sales Assoc ID " << order->salesAssoc->get_id() << " should be Christopher 14589." << endl;
    }
    else
    {
        cout <<"Passed!" <<endl;
    }

}
*/
