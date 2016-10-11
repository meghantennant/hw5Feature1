/*
#include "std_lib_facilities.h"
#include "robotmodel.h"
#include "robotpart1.h"
#include "head1.h"
#include "arm1.h"
#include "locomotor1.h"
#include "battery1.h"
#include "torso1.h"
#include "shop.h"

RobotPart* create_head();
RobotPart* create_arm();
RobotPart* create_locomotor();
RobotPart* create_battery();
RobotPart* create_torso();
Shop shop;

int main()
{
    string name = "Robot Model";
    int modelNumber = 1;
    shop.create_robot_model(name, modelNumber);

    RobotModel *rm = shop.robotModels;
    RobotPart *head = create_head();
    rm->add_robotpart(head);
    RobotPart *arm1 = create_arm();
    rm->add_robotpart(arm1);
    RobotPart *arm2 = create_arm();
    rm->add_robotpart(arm2);
    RobotPart *lm = create_locomotor();
    rm->add_robotpart(lm);
    RobotPart *torso = create_torso();
    rm->add_robotpart(torso);
    RobotPart *bat = create_battery();
    rm->add_robotpart(bat);

    rm->set_price();

    rm->to_string();
    cout << "Price should be 359.99" << endl;


}

RobotPart* create_head()
{
    string partName = "Robot Head";
    int partNumberID = 10000;
    string partComponentType = "Head";
    double partWeight = 10; //in pounds
    double partCost = 20; // in dollars
    string partDescription = "Small Robot Head";

    Head *head = new Head(partName, partNumberID, partComponentType, partWeight, partCost, partDescription);
    return head;
}

RobotPart* create_arm()
{
    string partName = "Robot Arm";
    int partNumberID = 01000;
    string partComponentType = "Arm";
    double partWeight = 2; //in pounds
    double partCost = 10; // in dollars
    string partDescription = "Small Robot Arm";

    Arm *arm = new Arm(partName, partNumberID, partComponentType, partWeight, partCost, partDescription);

    return arm;
}

RobotPart* create_locomotor()
{
    string partName = "Robot Locomotor";
    int partNumberID = 00100;
    string partComponentType = "Locomotor";
    double partWeight = 50; //in pounds
    double partCost = 100; // in dollars
    string partDescription = "Small Robot Locomotor";
    double partMaxSpeed = 3; // in MPH

    Locomotor *lm = new Locomotor(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, partMaxSpeed);
    return lm;
}

RobotPart* create_battery()
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
    return bat;
}

RobotPart* create_torso()
{
    string partName = "Robot Torso";
    int partNumberID = 00001;
    string partComponentType = "Torso";
    double partWeight = 50; //in pounds
    double partCost = 100; // in dollars
    string partDescription = "Small Robot Torso";
    int num_bats = 2;

    Torso *torso = new Torso(partName, partNumberID, partComponentType, partWeight, partCost, partDescription, num_bats);
    return torso;
}
*/
