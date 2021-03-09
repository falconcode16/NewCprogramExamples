
#include<stdio.h>
#include<math.h>

main()
{float avg,per,m1,m2,m3,m4,m5;


    m1=80;
    m2=90;
    m3=70;
    m4=90;
    m5=95;

    void aver(int m1,int m2,int m3,int m4,int m5);

aver(int m1,int m2,int m3,int m4,int m5);

}
void aver(avg,per,m1,m2,m3,m4,m5)
{

    avg=(m1+m2+m3+m4+m5)/5;
    per=((m1+m2+m3+m4+m5)*100)/500;
    printf("average marks=%f\n",avg);
    printf("total percentage=%f\n",per);
}
