#include <kipr/botball.h>

int main()
    

{
   enable_servos();//defalt servo position
    set_servo_position(0,1440);
    msleep(1500);    
    
    set_servo_position(2,988);
    msleep(1000);
    
    mav(0,1200);//turn to go twards building
    mav(2,0);
    msleep(1500);
    
    mav(0,1500);
    mav(2,1500);
    msleep(3500);
    
    set_servo_position(0,908);//move firetruck
    msleep(1500);
    
    
    set_servo_position(2,0);
    msleep(1000);
    
    set_servo_position(2,988);
    msleep(1000);    
    
    
    
    
    camera_open_black();
    camera_update();
   get_object_count(0);
     
    return 0;
}
