#include "std_lib_facilities.h"
#include "robotpart1.h"
#include "locomotor1.h"

string Locomotor::get_name() {return name;}
int Locomotor::get_part_number() {return partNumber;}
string Locomotor::get_comp_type() {return componentType;}
double Locomotor::get_weight() {return weight;}
double Locomotor::get_cost() {return cost;}
string Locomotor::get_description() {return description;}
double Locomotor::get_max_speed() {return maxSpeed;}
bool Locomotor::check_made() {return isMade;}
void Locomotor::to_string()
    {
        cout << endl;
        cout << "Name: "<< get_name() << endl;
        cout << "Part Number: " << get_part_number() << endl;
        cout << "Component Type: " << get_comp_type() << endl;
        cout << "Weight: " << get_weight() << endl;
        cout << "Cost: " << get_cost() << endl;
        cout << "Max Speed: " << get_max_speed() << endl;
        cout << "Description: " << get_description() << endl;
    }

int Locomotor::power_consumed(int speed)
{
    int power = (get_weight()*4.4) * speed; //convert pounds to Newtons to get Watts
    return power; // in Watts
}

