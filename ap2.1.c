
#include<stdio.h>
#include<math.h>

main()
{
   float add();
   float result;
   result=add();
}
float add()
{
    float sum,m1,m2,m3;


    m1=2;
    m2=3;
    m3=3;

    sum=m1+m2+m3;
    printf("sum=%f\n",sum);
    return sum;

}
