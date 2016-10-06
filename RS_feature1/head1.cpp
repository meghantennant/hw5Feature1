#include "std_lib_facilities.h"
#include "head1.h"
#include "robotpart1.h"

string Head::get_name() {return name;}
int Head::get_part_number() {return partNumber;}
string Head::get_comp_type() {return componentType;}
double Head::get_weight() {return weight;}
double Head::get_cost() {return cost;}
string Head::get_description() {return description;}
string Head::get_style() {return style;}
bool Head::check_made() {return isMade;}
void Head::to_string()
    {
        cout << endl;
        cout << "Name: "<< get_name() << endl;
        cout << "Part Number: " << get_part_number() << endl;
        cout << "Component Type: " << get_comp_type() << endl;
        cout << "Weight: " << get_weight() << endl;
        cout << "Cost: " << get_cost() << endl;
        cout << "Description: " << get_description() << endl;
        cout << "Style: " << get_style() << endl;
    }

