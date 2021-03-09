
#include<stdio.h>
#include<math.h>

main()
{
    void sd();
    sd();
}void sd()
{



int ch;
printf("enter a choice\n");
scanf("%d",&ch);
switch(ch)
{
    case 1 : printf("hi\n");
    break;
    case 2 : printf("hello\n");
    break;
    case 3 : printf("how are you\n");
    break;
    case 4: printf("I am fine\n");
    break;

    default : printf("invalid choice\n");
    break;

}
}
