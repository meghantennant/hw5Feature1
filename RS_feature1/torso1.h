#ifndef __TORSO1_H
#define __TORSO1_H 2016
#include "head1.h"
#include "arm1.h"
#include "locomotor1.h"
#include "battery1.h"

class Torso : public RobotPart {
public:
    Torso(string p_name, int p_partNumber, string p_componentType, double p_weight, double p_cost, string p_description, string p_style, int p_batteryCompartments, Head *p_head, Arm *p_arm, Locomotor *p_lm, Battery *p_bat)
    : RobotPart(p_name, p_partNumber, p_componentType, p_weight, p_cost, p_description)
    {
        batteryCompartments = p_batteryCompartments;
        isMade = true;
        head = p_head;
        arms.push_back(p_arm);
        locomotor = p_lm;
        batteries.push_back(p_bat);
    };

    void attach_head(Head *hd);
    void attach_arm(Arm *am);
    void attach_locomotor(Locomotor *lm);
    void attach_battery(Battery *bat);
    string get_name();
    int get_part_number();
    string get_comp_type();
    double get_weight();
    double get_cost();
    string get_style();
    string get_description();
    int get_bat_compart();
    void to_string();
    bool check_made();

protected:
    int batteryCompartments;
    Head *head;
    vector <Arm*> arms;
    Locomotor *locomotor;
    vector <Battery*> batteries;
    bool isMade = false;
    string style;
};
#endif // __TORSO1_H
