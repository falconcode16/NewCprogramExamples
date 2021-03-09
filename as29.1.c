
#include<stdio.h>
#include<math.h>
main()
{
    void swapp();
    swapp();
}
void swapp()
{float x,y,z;
    printf("enter the value of x and y");
    scanf("%f%f",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("swapping x and y=%f\n%f\n" ,x,y);
}
