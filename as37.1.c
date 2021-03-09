
#include <stdio.h>

main()
{
    void az();
    az();
}
void az()
{

int n,dig,prime = 0;

printf("Enter the value of\n");

scanf("%d",&n);

for(int i=n;i>0;i=(i/10))

{



dig =i%10;





i++;

if(dig%2!= 0)

{

if(dig%i==0)

{

prime =1;

;

break;

}

if(prime==0)

printf("%d is a prime number \n",dig);

else

printf("%d is not a prime number \n",dig);

}

}

}
