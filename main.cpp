#include "std_lib_facilities.h"
#include "robotmodel.h"
#include "robotpart1.h"
#include "head1.h"
#include "arm1.h"
#include "locomotor1.h"
#include "battery1.h"
#include "torso1.h"
#include "shop.h"
#include "view.h"

void create_model();
void create_head();
void create_arm();
void create_locomotor();
void create_battery();
void create_torso();
Shop shop;
View view;

int main() {

    int main_choice = -1;

    while (main_choice != 0)
    {
        view.show_main_menu();
        cout << "Choice? ";
        cin >> main_choice;

        if (main_choice == 1)
        {
            int create_choice = -1;
            while (create_choice != 0)
            {
                view.show_create_menu();
                cout << "Choice? ";
                cin >> create_choice;

                if (create_choice == 4) //create a robot model
                {
                    create_model();
                }
                else if (create_choice == 5) // create robot parts
                {
                    view.show_parts_menu();
                    int parts_choice = -1;
                    cout << "Choice? ";
                    cin >> parts_choice;

                    if (parts_choice == 1)
                    {
                        create_head();
                    }
                    else if(parts_choice == 2)
                    {
                        create_arm();
                    }
                    else if(parts_choice == 3)
                    {
                        create_torso();
                    }
                    else if(parts_choice == 4)
                    {
                        create_locomotor();
                    }
                    else if(parts_choice == 5)
                    {
                        create_battery();
                    }
                    else if(parts_choice == 0)
                    {
                        break;
                    }
                    else
                    {
                        cout << endl << parts_choice << " is not a valid option!" << endl;
                    }

                }
                else if(create_choice == 0) //Go back to main menu
                {
                    break;
                }
                else
                {
                    cout << "That choice is not valid, please try again" << endl;
                }
            }

        }
    }

}

void create_model()
{
    string name;
    int modelNumber;
    cout << "Name? ";
    cin.ignore();
    getline(cin, name);
    cout << "Model Number? ";
    cin >> modelNumber;
    shop.create_robot_model(name, modelNumber);
}
void create_head()
{
    string partName;
    int partNumberID;
    string partComponentType;
    double partWeight; //in pounds
    double partCost; // in dollars
    string partDescription;

    int flag = 0;

    int modelNum;
    cout << "What is the model number you would like to add this part to? ";
    cin >> modelNum;

    RobotModel *temp = shop.robotModels; //get list of robot models

    if(temp == NULL) //Check for empty model list
    {
        cout << "You must create a robot model first!";
    }
    else
    {
        cout << "Name? ";
        cin.ignore();
        getline(cin,partName);
        cout << "Part Number? ";
        cin >> partNumberID;
        cout << "Component Type? ";
        cin >> partComponentType;
        cout << "Weight? (in kg) ";
        cin >> partWeight;
        cout << "Cost? ";
        cin >> partCost;
        cout << "Description? ";
        cin.ignore();
        getline(cin, partDescription);

        Head *head = new Head(partName, partNumberID, partComponentType, partWeight, partCost, partDescription);
        if(head->check_made() == false)
        {
            cout << "Failed to make a Head" << endl;
            return;
        }
        while(temp != NULL) //Go through model list to find matching model number
        {
            if(modelNum == temp->get_model_number()) //if model number is found
            {
                RobotPart *temp2 = temp->first; //find model's list of robot parts

                if (temp2 == NULL) //check for empty parts list
                {
                    temp->add_robotpart(head); //start parts list
                    return;
                }
                else
                {
                    //search through model's parts list to see if part has already been created
                    while(temp2 != NULL)
                    {
                        //If model already has a head
                        if(temp2->get_comp_type() == "Head" || temp2->get_comp_type()=="head")
                        {
                            cout << "There is already a head for this model!" << endl;
                            flag = 1;
                            return;
                        }
                        else
                        {
                            temp2 = temp2->next;
                        }
                    }

                    if (flag = 0) //If model does not already have a head
                    {
                        temp->add_robotpart(head);
                        return;
                    }
                }
            }
            else
            {
                temp = temp->next; //go to next model
            }
        }
    }
    if(temp == NULL) // end of model list
    {
        cout << "No matching robot model number was found." <<endl;
    }
}

void create_arm()
{
    string partName;
    int partNumberID;
    string partComponentType;
    double partWeight; //in pounds
    double partCost; // in dollars
    string partDescription;

    int flag = 0;

    int modelNum;
    cout << "What is the model number you would like to add this part to? ";
    cin >> modelNum;

    RobotModel *temp = shop.robotModels; //get model list

    if(temp == NULL) //Check if model list is empty
    {
        cout << "You must create a robot model first!";
    }
    else
    {
        //search through model list for matching model number
        while(temp != NULL)
        {
            //Add part if model number is found
            if(modelNum == temp->get_model_number())
            {
                cout << "Name? ";
                cin.ignore();
                getline(cin,partName);
                cout << "Part Number? ";
                cin >> partNumberID;
                cout << "Component Type? ";
                cin >> partComponentType;
                cout << "Weight? (in kg) ";
                cin >> partWeight;
                cout << "Cost? ";
                cin >> partCost;
                cout << "Description? ";
                cin.ignore();
                getline(cin, partDescription);

                Arm *arm = new Arm(partName, partNumberID, partComponentType, partWeight, partCost, partDescription);
                if(arm->check_made() == false)
                {
                    cout << "Failed to make an Arm" << endl;
                    return;
                }
                RobotPart *temp2 = temp->first; //Get list of parts in model

                if (temp2 == NULL) //check if parts list is empty
                {
                    temp->add_robotpart(arm);
                    return;
                }
                else
                {
                    //Search through parts list for arms
                    while(temp2 != NULL)
                    {
                        if(temp2->get_comp_type() == "Arm" || temp2->get_comp_type()=="arm")
                        {
                            flag ++;
                            temp2 = temp2->next;
                        }
                        else
                        {
                            temp2 = temp2->next;
                        }
                    }

                    if (flag < 2) //add arm if model does not have 2 arms
                    {
                        temp->add_robotpart(arm);
                        return;
                    }
                    else
                    {
                        cout << "There are already two arms for this model!";
                        return;
                    }
                }
            }
            else
            {
                temp = temp->next; //Go to next model
            }
        }
    }
    if(temp == NULL) //End of model list
    {
        cout << "No matching robot model number was found." <<endl;
    }
}

void create_locomotor()
{
    string partName;
    int partNumberID;
    string partComponentType;
    double partWeight; //in pounds
    double partCost; // in dollars
    string partDescription;
    double partMaxSpeed; // in MPH

    int flag = 0;

    int modelNum;
    cout << "What is the model number you would like to add this part to? ";
    cin >> modelNum;

    RobotModel *temp = shop.robotModels; //Get list of model
    if(temp == NULL) // Check for empty model list
    {
        cerr << "You must create a robot model first!";
    }
    else
    {
        //Search through model list for matching model number
        while (temp != NULL)
        {
            //Add part if model number is found
            if(temp->get_model_number() == modelNum)
            {
                cout << "Name? ";
                cin.ignore();
                getline(cin,partName);
                cout << "Part Number? ";
                cin >> partNumberID;
                cout << "Component Type? ";
                cin >> partComponentType;
                cout << "Weight? (kg) ";
                cin >> partWeight;
                cout << "Cost? ";
                cin >> partCost;
                cout << "Description? ";
                cin.ignore();
                getline(cin, partDescription);
                cout << "Max Speed? (Mph) ";
                cin >> partMaxSpeed;

                Locomotor *lm = new Locomotor(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partMaxSpeed);
                if (lm->check_made() == false)
                {
                    cout << "Failed to make a locomotor";
                    return;
                }

                RobotPart *temp2 = temp->first; //Get list of parts for model
                if (temp2 == NULL) //Check for empty parts list
                {
                    temp->add_robotpart(lm);
                    return;
                }
                //Search through parts list to see if part is already in model
                while(temp2 != NULL)
                {
                    if(temp2->get_comp_type() == "Locomotor" || temp2->get_comp_type() =="locomotor")
                    {
                        flag++;
                        temp2 = temp2->next;
                    }
                    else
                    {
                        temp2 = temp2->next;
                    }
                }
                if (flag == 0) //Add part if part was not found
                {
                    temp->add_robotpart(lm);
                    return;
                }
                else
                {
                    cout << "There is already a locomotor for this model";
                    return;
                }
            }
            else
            {
                temp = temp->next; //go to next model
            }
        }
    }
    if (temp == NULL) //End of model list
    {
        cout << endl << "No matching model number was found." << endl;
    }
}

void create_battery()
{
    string partName;
    int partNumberID;
    string partComponentType;
    double partWeight; //in kg
    double partCost; // in dollars
    string partDescription;
    double partEnergy;// in kWh
    double partMaxPower; // in Watts

    int flag = 0;
    int num_bats = 0;

    int modelNum;
    cout << "What is the model number you would like to add this part to? ";
    cin >> modelNum;

    RobotModel *temp = shop.robotModels; //Get model list
    if(temp == NULL) //Check if model list is empty
    {
        cerr << "You must create a robot model first!";
    }
    else
    {
        //Search though model list to find matching model number
        while (temp != NULL)
        {
            if(temp->get_model_number() == modelNum)
            {
                cout << "Name? ";
                cin.ignore();
                getline(cin,partName);
                cout << "Part Number? ";
                cin >> partNumberID;
                cout << "Component Type? ";
                cin >> partComponentType;
                cout << "Weight? (kg)";
                cin >> partWeight;
                cout << "Cost? ";
                cin >> partCost;
                cout << "Description? ";
                cin.ignore();
                getline(cin, partDescription);
                cout << "Energy? (kWh)";
                cin >> partEnergy;
                cout << "Max Power? (Watts)";
                cin >> partMaxPower;

                Battery *bat = new Battery(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partMaxPower, partEnergy);
                if(bat->check_made() == false)
                {
                    cout << "Failed to make a battery" << endl;
                    return;
                }

                RobotPart *temp2 = temp->first; //Get model's parts list
                //Search through model list for a torso
                while(temp2 !=NULL)
                {
                    if(temp2->get_comp_type() == "Torso" || temp2->get_comp_type() == "torso")
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        temp2 = temp2->next;
                    }
                }
                if(flag == 1) // If there is a torso for the model
                {
                    flag = 0;

                    temp2 = temp->first;
                    //Search through parts list for batteries
                    while(temp2 != NULL)
                    {
                        if(temp2->get_comp_type() == "Battery" || temp2->get_comp_type() =="battery")
                        {
                            flag++;
                            temp2 = temp2->next;
                        }
                        else
                        {
                            temp2 = temp2->next;
                        }
                    }
                    if (flag != temp->get_bat_compart()) // Check for number of battery compartments
                    {
                        //add battery if there is room for another
                        temp->add_robotpart(bat);
                        return;
                    }
                    else
                    {
                        cout << "There are " << temp->get_bat_compart() << " batteries for this model already" << endl;
                        return;
                    }
                }
                else
                {
                    cerr << "No torso was found for this model. Must have a torso to add batteries!" << endl;
                    return;
                }
            }
            else
            {
                temp = temp->next; //Go to next model
            }
        }
        if(temp == NULL) //End of model list
        {
            cout << "No matching model number was found." << endl;
        }
    }
}

void create_torso()
{
    string partName;
    int partNumberID;
    string partComponentType;
    double partWeight; //in pounds
    double partCost; // in dollars
    string partDescription;
    int num_bats;

    int flag = 0;
    int modelNum;
    cout << "What is the model number you would like to add this part to? ";
    cin >> modelNum;

    RobotModel *temp = shop.robotModels; //Get model list
    if(temp == NULL) // Check for empty model list
    {
        cerr << "You must create a robot model first!";
    }
    else
    {
        //search through list for matching model number
        while(temp!=NULL)
        {
            if(temp->get_model_number() == modelNum)
            {
                    cout << "Name? ";
                    cin.ignore();
                    getline(cin,partName);
                    cout << "Part Number? ";
                    cin >> partNumberID;
                    cout << "Component Type? ";
                    cin >> partComponentType;
                    cout << "Weight? (kg) ";
                    cin >> partWeight;
                    cout << "Cost? ";
                    cin >> partCost;
                    cout << "Description? ";
                    cin.ignore();
                    getline(cin, partDescription);
                    cout << "Number of battery compartments? ";
                    cin >> num_bats;

                    Torso *torso = new Torso(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, num_bats);
                    temp->set_bat_compart(num_bats);
                    if(torso->check_made() == false)
                    {
                        cout << "Failed to make a Torso." << endl;
                    }

                RobotPart *temp2 = temp->first; //Get parts list for model
                if (temp2 == NULL) //Check for empty parts list
                {
                    temp->add_robotpart(torso);
                    return;
                }
                //Search through parts list to see if model already has the part
                while(temp2 != NULL)
                {
                    if(temp2->get_comp_type() == "Torso" || temp2->get_comp_type() =="torso")
                    {
                        flag++;
                        temp2 = temp2->next;
                    }
                    else
                    {
                        temp2 = temp2->next;
                    }
                }
                if (flag == 0) //Add part if it was not found
                {
                    temp->add_robotpart(torso);
                    return;
                }
                else
                {
                    cout << "There is already a Torso for this model." << endl;
                    return;
                }
            }
            else
            {
                temp = temp->next; //Go to next model
            }
        }
    }
    if (temp == NULL) //End of model list
    {
        cout << "No matching model number was found." << endl;
    }
}

