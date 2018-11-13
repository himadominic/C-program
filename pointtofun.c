#include<stdio.h>
int sum(int,int);
void main()
{
int a,b,s,(*fnp)(int,int);
printf("enter two number");
scanf("%d%d",&a,&b);
printf("a=%d\n b=%d",a,b);
fnp=sum;
s=(*fnp)(a,b);
printf("\nsum=%d",s);
}
int sum(int a,int b)
{
int s;
s=a+b;
return s;
}

