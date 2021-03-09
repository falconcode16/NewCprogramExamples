
#include<stdio.h>
#include<math.h>
main()
{
    float tax();
float res;
    float gst,sum,m1,m2,m3,m4,total;
    m1=5000;
    m2=2000;
    m3=500;
    m4=1000;
    sum=m1+m2+m3+m4;
gst=(m1+m2+m3+m4)*2/100;
    total=gst+sum;
    printf("gst=%f\n",gst);
    printf("net price=%f\n",total);
    res=tax();
}
float tax()
{ float total;
return (total);
}
