#include<stdio.h>
void swap(int,int);
int a,b;
void main()
{
printf("enter two values\n");
scanf("%d%d",&a,&b);
printf("\nbefore swapping a=%d\n b=%d\n",a,b);
swap(a,b);
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("\n using call by value:\nThe swapped values are:\na=%d\t\nb=%d\n",a,b);
}

