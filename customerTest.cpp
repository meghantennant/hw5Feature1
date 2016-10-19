/*#include "std_lib_facilities.h"
#include "customer.h"
#include "order.h"

int main()
{
    Customer *c1 = new Customer("Meghan Tennant", 10005, 25.25);
    int token = 0;
    if(c1->get_name() != "Meghan Tennant")
    {
        token++;
    }
    if(c1->get_cust_num() != 10005)
    {
        token++;
    }
    if(c1->get_wallet() != 25.25)
    {
        token++;
    }
    if(token != 0)
    {
        cout << "Test failed. " << c1->get_name() << "should be Meghan Tennant" << endl;
        cout << c1->get_cust_num() << " should be 10005." << endl;
        cout << c1->get_wallet() << " should be 25.25" << endl;
    }
    else
    {
        cout << "Passed!";
    }
    return 1;
}
*/
