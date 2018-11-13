#include<stdio.h>
int search();
int m=0,n,a[25],p,i,l;
void main()
{
printf("Enter the limit\n");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
search();
if(m==0)
printf("not found\n");
}
int search()
{
int s;
printf("enter the number to be searched\n");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("number found at %d position\n",i+1);
m=1;
}
}
return m;
}

