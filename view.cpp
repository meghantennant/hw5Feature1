#include "std_lib_facilities.h"
#include "view.h"
#include "robotmodel.h"

void View::show_main_menu ()
{
    cout << endl << endl;
    cout << "**************************" <<endl;
    cout << "        Main Menu" << endl;
    cout << "**************************" <<endl;
    cout << "1. Create" << endl;
    cout << "2. Report" << endl;
    cout << "0. Exit Program" << endl;
}

void View::show_create_menu()
{
    cout << endl << endl;
    cout << "**************************" << endl;
    cout << "          Create" << endl;
    cout << "**************************" << endl;
    cout << "1. Order" << endl;
    cout << "2. Customer" << endl;
    cout << "3. Sales Associate" << endl;
    cout << "4. Robot Model" << endl;
    cout << "5. Robot Components" << endl;
    cout << "0. Back to Main Menu" << endl;
}

void View::show_report_menu()
{
    cout << endl << endl;
    cout << "**************************" << endl;
    cout << "          Report" << endl;
    cout << "**************************" << endl;
    cout << "4. Robot Models" << endl;
    cout << "5. Robot Parts" << endl;
    cout << "0. Back to Main Menu" << endl;
}
void View::show_parts_menu()
{
    cout << endl << endl;
    cout << "1. Head" << endl;
    cout << "2. Arms" << endl;
    cout << "3. Torso" << endl;
    cout << "4. Locomotor" << endl;
    cout << "5. Batteries (must have created a torso)" << endl;
}

void View::list_robot_models(RobotModel *models)
{
    RobotModel *temp = models;
    if(temp == NULL)
    {
        cerr << "There is no list of models" << endl;
        return;
    }
    else
    {
        while(temp != NULL)
        {
            cout << endl << endl;
            temp->to_string();
            temp = temp->next;
        }
    }
}

void View::list_robot_parts(RobotModel *models)
{
    RobotModel *temp = models;
    int modelNum;


    cout <<"Which model number would you like to see the parts for? ";
    cin >> modelNum;
    if(cin.fail())
    {
        cerr << "That is not a valid model number, please try again";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> modelNum;
    }


    while (temp != NULL)
    {
        if (modelNum == temp->get_model_number())
        {
            RobotPart *temp2 = temp->first;
            if (temp2 == NULL)
            {
                cerr << "There are no parts for this model.";
                return;
            }
            cout << endl;
            cout << "Parts for Model #" << modelNum << ": " <<endl;
            while (temp2 != NULL)
            {
                temp2->to_string();
                cout << endl;
                temp2 = temp2->next;
            }
            return;
        }
        else
        {
            temp = temp->next;
        }
    }
    if(temp == NULL)
    {
        cerr << "No matching model number was found";
    }
}
