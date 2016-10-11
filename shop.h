#ifndef __SHOP_H
#define __SHOP_H 2016
#include "robotmodel.h"
class Shop{
public:
    void create_robot_model(string p_name, int p_modelNumber);
    RobotModel *robotModels = NULL;

};
#endif // __SHOP_H
