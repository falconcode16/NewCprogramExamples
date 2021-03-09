#include<stdio.h>
#include<math.h>
main()
{int unit;
float bill;
    float com(int unit, float bill);
float result;
printf("enter the units comsumed\n");
scanf("%d",&unit);
    result=com(unit, bill);


}
float com(int unit, float bill)
{
if(unit>=0 && unit<=100)
{
    bill=1.5*unit;
    printf("bill=%f\n",bill);
}else if(unit>100 && unit<=250)
{
    bill=2.3*unit;
    printf("bill=%f\n",bill);
    }
else
{
  bill=4*unit;
    printf("bill=%f\n",bill);
}
return (bill);}
