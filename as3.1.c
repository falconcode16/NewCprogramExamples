
#include<stdio.h>
#include<math.h>

main()
{void aver();

aver();

}
void aver()
{
    float avg,per,m1,m2,m3,m4,m5;


    m1=80;
    m2=90;
    m3=70;
    m4=90;
    m5=95;
    avg=(m1+m2+m3+m4+m5)/5;
    per=((m1+m2+m3+m4+m5)*100)/500;
    printf("average marks=%f\n",avg);
    printf("total percentage=%f\n",per);
}
