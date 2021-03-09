
#include<stdio.h>
#include<math.h>

main()
{
    void wer();
    wer();
}
void wer()
{     int ch,num1,num2,z;
   printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    z=num1>num2;

    switch(z)
    {case 0 :printf("num2 is greater than num1\n");

    break;
    case 1 :printf("num1 is greater than num2\n ");

    break;
    }
}
