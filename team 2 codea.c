#include <kipr/botball.h>

int main()
{
    clear_motor_position_counter(0);
        while(get_motor_position_counter(0) <5900)
        {
            motor(0,100);
            motor(2,100);
        }
    clear_motor_position_counter(2);
        while(get_motor_position_counter(2) <1330)
        {
            motor(0,0);
            motor(2,100);
        }
   
     clear_motor_position_counter(0);
        while(get_motor_position_counter(0) <5600)
        {
            motor(0,100);
            motor(2,100);
     
        }
    set_servo_position(0,1897);
     clear_motor_position_counter(2);
        while(get_motor_position_counter(2) <1333)
        {
            motor(0,0);
            motor(2,100);
        }
         clear_motor_position_counter(0);
    while(get_motor_position_counter(0) < 500) 
    {
        motor(0,70);
        motor(2,100);
    }
    
    enable_servos();
    set_servo_position(0,1397);
    
    
    clear_motor_position_counter(2);
    while(get_motor_position_counter(2) <9000)
    {
        motor(0,100);
        motor(2,100);
    }
     
   return 0;
}
