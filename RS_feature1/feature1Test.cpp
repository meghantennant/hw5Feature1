#include "std_lib_facilities.h"
#include "robotpart1.h"
#include "head1.h"
#include "arm1.h"
#include "locomotor1.h"
#include "battery1.h"
#include "torso1.h"

Head *h1;
Arm *a1;
Locomotor *l1;
Battery *b1;

void create_head();
void create_arm();
void create_locomotor();
void create_battery();
void create_torso();

int main()
{
    create_head();
    create_arm();
    create_locomotor();
    create_battery();
    create_torso();
}

void create_head()
{
    string partName = "Robot Head";
    int partNumberID = 10000;
    string partComponentType = "Head";
    double partWeight = 10; //in pounds
    double partCost = 20; // in dollars
    string partDescription = "Small Robot Head";
    string partStyle = "Small";

    Head *head = new Head(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partStyle);
    h1 = head;
    if(head->check_made())
    {
        cout << "A Head was made!" << endl;
        head->to_string();
    }
    else
    {
        cout << "Failed to make a head."<<endl;
    }
}

void create_arm()
{
    string partName = "Robot Arm";
    int partNumberID = 01000;
    string partComponentType = "Arm";
    double partWeight = 2; //in pounds
    double partCost = 10; // in dollars
    int partSide = 0; // 0 = left, 1 = right
    string partDescription = "Small Robot Arm";
    string partStyle = "Small";

    Arm *arm = new Arm(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partSide, partStyle);
    a1 = arm;
    if(arm->check_made())
    {
        cout << endl;
        cout << "Am arm was made!" << endl;
        arm->to_string();
    }
    else
    {
        cout << "Failed to make an arm."<<endl;
    }
}

void create_locomotor()
{
    string partName = "Robot Locomotor";
    int partNumberID = 00100;
    string partComponentType = "Locomotor";
    double partWeight = 50; //in pounds
    double partCost = 100; // in dollars
    string partDescription = "Small Robot Locomotor";
    double partMaxSpeed = 3; // in MPH
    string partStyle = "Small";

    Locomotor *lm = new Locomotor(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partStyle, partMaxSpeed);
    l1 = lm;
    if(lm->check_made())
    {
        cout << endl;
        cout << "A locomotor was made!" << endl;
        lm->to_string();
    }
    else
    {
        cout << "Failed to make a locomotor."<<endl;
    }
}

void create_battery()
{
    string partName = "Robot Battery";
    int partNumberID = 00010;
    string partComponentType = "Battery";
    double partWeight = 5; //in pounds
    double partCost = 119.99; // in dollars
    string partDescription = "Small Robot Battery";
    double partEnergy = 110; // in kWh
    double partMaxPower = 3; // in W

    Battery *bat = new Battery(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partMaxPower, partEnergy);
    b1 = bat;
    if(bat->check_made())
    {
        cout << endl;
        cout << "A battery was made!" << endl;
        bat->to_string();
    }
    else
    {
        cout << "Failed to make a battery."<<endl;
    }
}

void create_torso()
{
    string partName = "Robot Torso";
    int partNumberID = 00001;
    string partComponentType = "Torso";
    double partWeight = 50; //in pounds
    double partCost = 100; // in dollars
    string partDescription = "Small Robot Torso";
    string partStyle = "Small";
    int num_bats = 2;

    Torso *torso = new Torso(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partStyle, num_bats, h1, a1, l1, b1);
    if(torso->check_made())
    {
        cout << "A Torso was made!" << endl;
        torso->to_string();
    }
    else
    {
        cout << "Failed to make a Torso."<<endl;
    }
}
