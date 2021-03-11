#include<stdio.h>
#include<math.h>

main()
{int ch;
printf("enter any choice \n");
scanf("%d",&ch);
void add();
void area();
void si();



if (ch==1)
{


    add();

}


else if(ch==2)
{


    area();
}
else if(ch==3)
{


    si();
}
else
{
  printf("invalid choice\n")  ;
}
}
void add()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    printf("sum=%d\n",a+b);
}
void area()
{
    int r;
    printf("enter r\n");
    scanf("%d",&r);
    printf("area=%d\n",3.14*pow(r,2));
}
void si()
{
 float p,r,t;
    printf("enter p,r,t\n");
    scanf("%f%f%f",&p,&r,&t);
    printf("si=%f\n",(p*r*t/100));
}






