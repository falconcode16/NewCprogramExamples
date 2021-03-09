
#include<stdio.h>

main()
{
    void vote();
    vote();
}
void vote()
{
    int age;

printf("enter the age\n");
scanf("%d",&age);


    if(age>=18)
    {
        printf("eligible to vote\n");
    }
}
