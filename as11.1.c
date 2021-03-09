
#include<stdio.h>
 #include<math.h>
    int main()
{
    void smallest();
    smallest();
}
void smallest()
    {
    int x,y,z;
     printf(" Enter three Integer numbers for x, y, z ");
    scanf("%d%d%d",&x,&y,&z);



    if((x < y)&&(x < z))
    {


    printf("x is smallest=%d\n",x);
    }
    else if(y < z)
    {

    printf(" y is smallest=%d\n",y);
    }
    else

    {
        printf("z is smallest=%d\n",z);
    }
 }



