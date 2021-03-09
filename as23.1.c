
#include<stdio.h>
main()
{
    void as();
    as();
}
void as()
{
 int i,x=97,n=0;
 for(i=1;i<=25;i++)
 {
  n=n+x;
  x=x-2;
 }
 printf("Number of bricks the gardener should buy=%d",n);
}
