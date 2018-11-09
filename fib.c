
#include<stdio.h>
int fib(int,int);
int t=3,n;
int main()
{
int a=0,b=1,f,c;
printf("enter the limit \n");
scanf("%d",&n);
printf("Fibinocci series \n");
printf("%d\n%d\n",a,b);
f=fib(a,b);

}
int fib(int a,int b)
{
int c,f;
if(t<=n)
{
c=a+b;
printf("%d\n",c);
t++;
f=fib(b,c);
return f;
}
}
