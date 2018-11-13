#include<stdio.h>
void bubble(int [],int);
int i,j;
void main()
{
int a[10],n;
printf("Enter limit\n");
scanf("%d",&n);
printf("Enter numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubble(a,n);
}
void bubble(int a[],int n )
{
int temp;
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted numbers are\n");
for(i=0;i<n;i++)
{
printf(" %d\n",a[i]);
}
}

