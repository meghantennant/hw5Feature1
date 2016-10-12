#ifndef __CONTROLLER_H
#define __CONTROLLER_H 2016
class Controller {
public:

    Controller(Shop* sp) : shop(sp) {};
    void cli_main();
    void cli_create();
    void execute_cmd_main(int cmd);
    void execute_cmd_create(int cmd);

private:
    Shop *shop;
};
#endif // __CONTROLLER_H
