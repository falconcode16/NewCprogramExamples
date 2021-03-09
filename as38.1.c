
#include<stdio.h>
main()
{
    void df();
    df();

}
void df()
{
    int i=0,n1,n2;
    printf("enter the range\n");
    scanf("%d%d",&n1,&n2);

    i=n1;
    while(i<=n2)
   {

  if (i%3==0)
printf("%d\t",i);

    i++;

}

}
