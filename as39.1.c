#include<stdio.h>
main()
{
   void cv();
   cv();
}
void cv()
{
    int i,n;
    printf("enter N value\n");
scanf("%d",&n);
    i=1;
    do{
        printf("%d\t",i);
        i++;

    }while(i<=n);
}
