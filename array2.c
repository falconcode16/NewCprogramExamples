#include<stdio.h>
#include<math.h>
main()
{
  int marks[20],i,n,sum=0;
  float avg;
  printf("enter the number of students\n");
  scanf("%d",&n);
  if(n<=20)
 {

printf("enter %d marks \n",n);
 for(i=0;i<n;i++)


  {
      printf("enter %d marks \n",i+1);
      scanf("%d",&marks[i]);
  } printf("the %d marks are\n",n);
  for(i=0;i<n;i++)
  {printf("%d\t",marks[i]);

  }
  for(i=1;i<n;i++)
  {
      sum=sum+i;
      avg=(float)sum/n;
      printf("average marks=%f\n",avg);
  }
  }else
  {
    printf("cant exeed 20\n");
  }
}



