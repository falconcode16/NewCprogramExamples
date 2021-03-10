#include<stdio.h>
#include<math.h>

main()
{
   float distance();
   float speed();
   float time();
   distance();
   speed();
   time();
}
   float distance(),speed(),time()
{
    float distance,speed,time,x1,x2,y1,y2;

    speed=2.0;
    x1=2;
    x2=3;
    y1=3;
    y2=8;
    distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    time=distance/speed;
    printf("distance travelled=%f\n",distance);
    printf("time taken=%f\n",time);
}

