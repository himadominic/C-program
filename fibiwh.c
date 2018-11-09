
#include<stdio.h>
void main()
{
int i,a,b,c;
i=1;
a=0;
b=1;
while(i<10)
{
printf("%d",a);
c=a+b;			//0+1;
a=b;
b=c;			//1+1
i++;
}
}
