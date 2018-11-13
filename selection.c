#include<stdio.h>
void selection(int [],int);
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
selection(a,n);
}
void selection(int a[],int n)
{
int temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("sorted numbers are\n");
for(i=0;i<n;i++)
{
printf(" %d\n",a[i]);
}
}

