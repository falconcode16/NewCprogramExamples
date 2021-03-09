
#include<stdio.h>
main()
{

    void dfg();
dfg();
}
void dfg()
{
int a,b,c,d,n,r = 0;
printf("Enter the four digit number \n");
scanf("%d",&n);
a = (n%10)+7;
n = n/10;
b = (n%10)+7;
n = n/10;
c = (n%10)+7;
n = n/10;
d = (n%10)+7;

r = (1000*b)+(100*a)+(10*d)+a;
printf("The result is : %d",r);
}
