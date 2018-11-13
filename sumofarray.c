#include<stdio.h>
float fun();
int a[25],i,n;
void main()
{
int s;
printf("Enter a limit");
scanf("%d",&n);
printf("Enter numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
s=fun();
printf("sum=%d",s);
}
float fun()
{
int sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
return sum;
}

