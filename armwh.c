
#include<stdio.h>
void main()
{
int n,sum=0,rem,d;
printf("enter the number");
scanf("%d",&n);
d=n;
while(n>0)
{
rem=n%10;	//if 371,then it becomes 1+7+3 and it cubes
sum=sum+(rem*rem*rem);
n=n/10;
}
if(sum==d)
{

printf("the num is armstrong");
}
else
{
printf("the num is not armstrong");
}
}
