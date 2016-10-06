#ifndef __ARM1_H
#define __ARM1_H 2016

class Arm : public RobotPart {

public:
    Arm(string p_name, int p_partNumber, string p_componentType, double p_weight, double p_cost, string p_description,int p_side, string p_style)
    : RobotPart(p_name, p_partNumber, p_componentType, p_weight, p_cost, p_description)
    {
        style = p_style;
        side = p_side;
        isMade = true;
    };

    class InvalidOption {};
    string get_name();
    int get_part_number();
    string get_comp_type();
    double get_weight();
    double get_cost();
    string get_description();
    string get_style();
    int get_side();
    bool check_made();
    void to_string();
    int power_consumed(int speed);

private:
    int side;
    string style;
    bool isMade = false;
};
#endif // __ARM1_H
