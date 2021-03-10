
#include<stdio.h>
#include<math.h>

main()
{
    float simple();
    float result;

     result=simple();
}
float simple()
{
 float p,t,r,si;
 printf("enter the of value p, t ,r");

 scanf("%f%f%f",&p,&t,&r);
 si=(p*r*t)/100;
 printf("si is =%f\n",si);
 return si;


}
