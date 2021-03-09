
#include<stdio.h>
main()
{
    void big();
    big();
}
void big()
{
int avg,n1,n2,n3,n4,n5,tot,rno,assno;
printf("Enter the number of assignments done by the students \n");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
avg = (n1+n2+n3+n4+n5)/5;
printf("The total number of students are 5\n");
printf("The average of solving assignment is: %d \n",avg);
printf("Enter the number of assignments to get the roll number of the student\n");
scanf("%d",&assno);
if(assno==5)
printf("The student roll number is 4 \n ");
else if (assno==8)
    printf(" The student roll number is 1 \n");
else if(assno==6)
    printf("The student roll number is 2 \n");
else if(assno==9)
    printf("The student roll number is 3 \n");
else if(assno==10)
    printf("The student roll number is 5\n");
    if(5<assno<8)
    printf("Roll number 1 2 & 4 have solved the assignment\n");
}
