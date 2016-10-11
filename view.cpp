#include "std_lib_facilities.h"
#include "view.h"

void View::show_main_menu ()
{
    cout << endl << endl;
    cout << "**************************" <<endl;
    cout << "        Main Menu" << endl;
    cout << "**************************" <<endl;
    cout << "1. Create" << endl;
    cout << "0. Exit Program" << endl;
}

void View::show_create_menu()
{
    cout << endl << endl;
    cout << "**************************" << endl;
    cout << "          Create" << endl;
    cout << "**************************" << endl;
    cout << "4. Robot Model" << endl;
    cout << "5. Robot Components" << endl;
    cout << "0. Back to Main Menu" << endl;
}

void View::show_parts_menu()
{
    cout << endl << endl;
    cout << "1. Head" << endl;
    cout << "2. Arms" << endl;
    cout << "3. Torso" << endl;
    cout << "4. Locomotor" << endl;
    cout << "5. Batteries (must have created a torso)"<< endl;
}
