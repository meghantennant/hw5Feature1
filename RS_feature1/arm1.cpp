#include "std_lib_facilities.h"
#include "robotpart1.h"
#include "arm1.h"

string Arm::get_name() {return name;}
int Arm::get_part_number() {return partNumber;}
string Arm::get_comp_type() {return componentType;}
double Arm::get_weight() {return weight;}
double Arm::get_cost() {return cost;}
string Arm::get_description() {return description;}
string Arm::get_style() {return style;}
int Arm::get_side() {return side;}
bool Arm::check_made() {return isMade;}
void Arm::to_string()
    {
        cout << endl;
        cout << "Name: "<< get_name() << endl;
        cout << "Part Number: " << get_part_number() << endl;
        cout << "Component Type: " << get_comp_type() << endl;
        cout << "Weight: " << get_weight() << endl;
        cout << "Cost: " << get_cost() << endl;
        cout << "Style: " << get_style() << endl;
        cout << "Side: " << get_side() << endl;
        cout << "Description: " << get_description() << endl;
    }

int Arm::power_consumed(int speed)
{
    int power = (get_weight()*4.4) * speed; //convert pounds to Newtons to get Watts
    return power; // in Watts
}

