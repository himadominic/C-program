#include<stdio.h>
void main()
{
int a[5],i,n,sum=0;
printf("enter the elements");
scanf("%d",&n);
printf("The numbers are\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d\n",sum);

}




