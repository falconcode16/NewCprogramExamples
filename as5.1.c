#include<stdio.h>
#include<math.h>

main()
{
    void simple();
    simple();
}
void simple()
{
 float p,t,r,si;
 printf("enter the of value p, t ,r");

 scanf("%f%f%f",&p,&t,&r);
 si=(p*r*t)/100;
 printf("si is =%f\n",si);


}

