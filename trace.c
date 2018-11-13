#include<stdio.h>
void d(int [][10],int,int);
int i,j;
void main()
{
int a[10][10],m,n;
printf("Enter row and column of matrix\n");
scanf("%d%d",&m,&n);
if(m!=n)
printf("Not possible\n");
else
printf("enter the elements of matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
d(a,m,n);
}
void d(int a[][10],int m,int n)
{
int sum1=0,sum2=0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
sum1=sum1+a[i][j];
}
if((i+j)==(m-1))
{
sum2=sum2+a[i][j];
}
}
}
printf("\nSum of Trace or principl dioganal elements is=%d",sum1);
printf("\nSum of off dioganal elements= %d\n",sum2);
}

