#include<stdio.h>
#include<stdlib.h>
     
int main(){

    int i=5, j=10;
    int *ptr;
    int **pptr;
    int ***ppptr;
    ptr=&i;
    pptr=&ptr;
    ppptr=&pptr;

    *ptr=3;
    **pptr= 7;
    ***ppptr=10;
    ptr= &j;

    **pptr=9;
    *pptr = &i;
    ***ppptr= &i;
    *ptr=-2;
printf("%d\n", ptr);
printf("%d\n", pptr);
printf("%d\n", *pptr);
printf("%d\n", **pptr);
printf("%d\n", *ptr);
printf("%d\n", ***ppptr);
printf("%d\n", j);
printf("%d\n", i);



          
return 0;
   
}