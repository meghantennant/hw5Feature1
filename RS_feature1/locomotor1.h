#ifndef __LOCOMOTOR1_H
#define __LOCOMOTOR1_H 2016

class Locomotor : public RobotPart {
public:
    Locomotor(string p_name, int p_partNumber, string p_componentType, double p_weight, double p_cost, string p_description, string p_style, int p_speed)
    : RobotPart(p_name, p_partNumber, p_componentType, p_weight, p_cost, p_description)
    {
        maxSpeed = p_speed;
        style = p_style;
        isMade = true;
    };

    int power_consumed(int speed);
    string get_name();
    int get_part_number();
    string get_comp_type();
    double get_weight();
    double get_cost();
    string get_description();
    string get_style();
    double get_max_speed();
    bool check_made();
    void to_string();

private:
    string style;
    double maxSpeed;
    bool isMade = false;
};
#endif // __LOCOMOTOR1_H
