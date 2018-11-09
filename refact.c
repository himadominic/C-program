#include<stdio.h>
int factorial;
void main()
{
int x,n;
printf("Enter a number \n");
scanf("%d",&n);
x=fact(n);
printf("factorial=%d\n",x);
}
int fact(int n)
{
if(n==1)
{
return(1);
}
else
{
factorial=n*fact(n-1);
return(factorial);
}
}
