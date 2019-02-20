#include <kipr/botball.h>

int main()
{
    clear_motor_position_counter(0);
    while (get_motor_position_counter(0) > -13250)
    {
        mav(0,-1500);
        msleep(50);
    }
    ao();    return 0;
}
