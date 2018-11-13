#include<stdio.h>
int fibinocci(int);
int main()
{
int n,c=0,i;
printf("enter a positive number");
scanf("%d",&n);
printf("\n the fibonacci series is\n");
for(i=1;i<=n;i++)
{
printf("%d\n",fibinocci(c));
c++;
}
}
int fibinocci(int n)
{
if(n==0)
return (0);
else if(n==1)
return (1);
else
return(fibinocci(n-1) + fibinocci(n-2));
}

