
#include<stdio.h>
#include<math.h>

main()
{
    void sdf();
    sdf();
}
void sdf()
{     int ch;
    float area,x,y,r,l,b,result,sum,a,c;
    printf("enter the choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("enter the radius");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area of circle=%f\n",area);
    break;

    case 2 : printf("enter two numbers");
    scanf("%f%f",&x,&y);
    sum=x+y;
    printf("sum=%f\n",sum);
    break;

    case 3 : printf("enter length and breadth numbers\n");
              scanf("%f%f",&l,&b);
              area=l*b;
              printf("area of rectangle=%f\n", area);
               break;

     case 4 : printf("enter a number\n");
              scanf("%f%f",&a,&c);
              result=pow(a,c);
              printf("area of rectangle=%f\n", result);
               break;
    default :printf("invalid choice\n");
                  break;
}
}

