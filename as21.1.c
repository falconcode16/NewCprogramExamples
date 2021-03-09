
#include <stdio.h>

int main()
{
    void prime();
    prime();

}
 void prime()
{
    int i, j, num, numb ,isPrime,Max;
    printf("Enter any number to print Prime factors: ");
    scanf("%d%d",&numb, &num);
    printf("All Prime Factors of %d and %d are: \n",num,numb);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }
    for(i=2; i<=numb; i++)
    {
        if(numb%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }

    for(i=1; i <= num && i <= numb; ++i)
    {
        if(num%i==0 && numb%i==0)
            Max = i;
    }

    printf(" Maximum number of students receving pencil and pens are and is %d", Max);


}
