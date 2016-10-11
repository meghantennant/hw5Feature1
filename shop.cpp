#include "std_lib_facilities.h"
#include "shop.h"
#include "robotmodel.h"


//Create a new robot model and add it to the list of models 'robotModels'
void Shop::create_robot_model(string p_name, int p_modelNumber)
{
    RobotModel *rm = new RobotModel(p_name, p_modelNumber);
    if(robotModels == NULL) //Check for empty list
    {
        robotModels = rm; // start list for robotModels
        rm->next = NULL;
    }
    else
    {
        RobotModel *temp = robotModels;
        while(temp->next != NULL) //find end of list
        {
            temp = temp->next;
        }
        temp->next = rm; //add model to end of list
        rm->next = NULL;
    }


}
