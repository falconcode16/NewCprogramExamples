

#include<stdio.h>
main()
{
    void conversion();
    conversion();

}
void conversion()
{
    float km,m,cm,feet,inches;
    printf("enter in km to convert\n");



    scanf("%f",&km);


    m=1000*km;
    feet=m*3.280;
    cm=feet*30.48;
    inches=0.3937*cm;




    printf("conversion of  km to m is =%f\n",m);
    printf("conversion of  m to feet =%f\n",feet);
     printf("conversion of  feet to cm =%f\n",cm);
      printf("conversion of  cm to inches =%f\n",inches);

}
