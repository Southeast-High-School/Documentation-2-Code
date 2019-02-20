#include <kipr/botball.h>

int main()
{
    clear_motor_position_counter(0); //clears the motor counter of motor 0
    while (get_motor_position_counter(0) < 13000) //while motor counter is less than 13000 it will keep doing the loop
    {
        mav(0, 1500); //rotates the motor so the arm can extend outward 
        msleep(50);
    }
    ao(); //will shut all motors off   
    return 0;
}
