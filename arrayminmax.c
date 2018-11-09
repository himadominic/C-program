#include<stdio.h>
void main()
{
int a[5],min,max,n,i;
printf("Enter the elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0],max=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
if(max<a[i])
max=a[i];
}}
printf("min=%d \n max=%d ]n",min,max);
}
