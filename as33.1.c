
#include<stdio.h>
#include<math.h>

main()
{
    void ghj();
    ghj();
}
void ghj()
{     int m;
   printf("enter marks\n");
    scanf("%d",&m);
    switch(m)

    {
        case 0 ... 39: printf("f grade\n");
        break;

        case 40 ... 59: printf("A grade\n");
        break;

        case 60 ... 100: printf("S grade\n");
        break;
    }
}
