#ifndef __ROBOTMODEL_H
#define __ROBOTMODEL_H 2016
#include "robotpart1.h"
class RobotModel {
public:
    RobotModel(string p_name, int p_modelNumber)
       : name(p_name), modelNumber(p_modelNumber)  {};
       void add_robotpart(RobotPart *rp);
       int get_model_number();
       void set_bat_compart(int num);
       int get_bat_compart();
       void set_price();
       double get_price();
       void to_string();
       RobotPart *first = NULL; //list of robot parts in the model
       RobotModel *next;
private:
    string name;
    int modelNumber;
    int batCompartments;
    double price;


};
#endif // __ROBOTMODEL_H
