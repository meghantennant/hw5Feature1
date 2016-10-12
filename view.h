#ifndef __VIEW_H
#define __VIEW_H 2016
#include "robotmodel.h"
class View {
public:

    void show_main_menu();
    void show_create_menu();
    void show_report_menu();
    void show_parts_menu();
    void list_robot_models(RobotModel *models);
    void list_robot_parts(RobotModel *models);

};
#endif // __VIEW_H
