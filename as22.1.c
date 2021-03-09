#include<stdio.h>
main()
{
    void num();
    num();
}
 void num()
{
int c [10];
int m=0,p=0,n,g=0,i;
printf("\n Enter the number of comments");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<n;i++)
{
if(c[i]==1)
{
m=m+1;
}
if(c[i]==2)
{
p++;
}
if(c[i]==3)
{
g++;
}
}
printf("\n The total number of Positive comments =%d",m);
printf("\n The total number of Negative comments =%d",p);
printf("\n The total number of Neutral comments =%d",g);


}


