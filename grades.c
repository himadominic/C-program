#include<stdio.h>
void main()
{
int computer,science,social,total,percent,physics,chemistry;
printf("\n Enter marks of 5 subjects each out of 100 ");
printf("\n\n computer = ");
scanf("%d",&computer);
printf("\n Science = ");
scanf("%d",&science);
printf("\n social = ");
scanf("%d",&social);
printf("\n physics =");
scanf("%d",&physics);
printf("\nchemistry =");
scanf("%d",&chemistry);
total=computer+science+social+physics+chemistry;
printf("\n Total marks = %d/500",total);
percent=total/5;
printf("\n\n Percentage = %d",percent);
if(percent>=80)
printf("\n\n Your Grade : A+");
else if(percent>=75)
printf("\n\n Your Grade : A");
else if(percent>=60)
printf("\n\n Your Grade : B");
else if(percent>=45)
printf("\n\n Your Grade : C");
else if(percent>=35)
printf("\n\n Your grade : D");
else
printf("\n\n You Are Failed");
}

