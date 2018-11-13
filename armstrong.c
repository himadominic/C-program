#include<stdio.h>
#include<math.h>
void main()
{
int low,high,d,c,s=0;
printf("\nEnter the lower limit and higher limit:\n");
scanf("%d%d",&low,&high);
while(low<high)
{
c=low;
while(c>0)
{
d=c%10;
s=s+(d*d*d);
c=c/10;
}
if(low==s)
{
printf("%d\n",low);
}
low++;
 s=0;
}
}

