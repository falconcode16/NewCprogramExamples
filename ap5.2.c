#include<stdio.h>
#include<math.h>

main()
{
    float p,t,r,si;
 printf("enter the of value p, t ,r");

 scanf("%f%f%f",&p,&t,&r);
    float simple(float p,float t,float r,float si);

    float result;

     result=simple(p,t,r,si);
}
float simple(float p,float t,float r,float si)
{

 si=(p*r*t)/100;
 printf("si is =%f\n",si);
 return si;


}

