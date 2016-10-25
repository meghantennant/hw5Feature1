#include "std_lib_facilities.h"
#include "shop.h"
#include "controller.h"

void Controller::cli_main() {
    int cmd = -1;
    while (cmd != 0);
    {
        cout << "Choice? ";
        cin >> cmd;
        cin.ignore(); //consume \n
        execute_cmd_main(cmd);
    }
}

void Controller::execute_cmd_main(int cmd) {
  if (cmd == 1)
  {
      cli_create();
  }
}

void Controller::cli_create() {
  int cmd = -1;
    while (cmd != 0);
    {
        view.show_create_menu();
        cout << "Choice? ";
        cin >> cmd;
        cin.ignore(); //consume \n
        execute_cmd_create(cmd);
    }
}

void Controller::execute_cmd_create(int cmd)
{
    if (cmd == 4) //Create RobotModel
    {
        string name;
        int modelNumber;

        cout << "Name?";
        getline(cin, name);

        cout << "Model Number? ";
        cin >> modelNumber;

        shop->create_robot_model(name, modelNumber);
    }
}


