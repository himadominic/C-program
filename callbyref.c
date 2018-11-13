#include<stdio.h>
void swap(int *,int *);
int a,b;
void main()
{
printf("\nenter two values\n");
scanf("%d%d",&a,&b);
printf("\nbefore swapping\n a=%d\n b=%d\n",a,b);
swap(&a,&b);
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("\n using call by reference:\nThe swapped valuesare:\na=%d \n b=%d \n",*a,*b);
}

