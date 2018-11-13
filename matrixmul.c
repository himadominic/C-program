#include<stdio.h>
void mul(int [][10],int [][10],int ,int);
int i,j,n,m,p,q,k;
void main()
{
int a[10][10],b[10][10];
printf("Enter row and column of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter row and column of second matrix\n");
scanf("%d%d",&p,&q);
if(m!=q)
printf("not possible\n");
else
{
printf("enter the elements of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of second matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("FIRST MATRIX\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("SECOND MATRIX\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
mul(a,b,m,q);
}
}
void mul(int a[][10],int b[][10],int m,int q)
{
int c[10][10];
printf("multiplication table\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<m;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
printf("%d\t",c[i][j]);
}
printf("\n");
}
}

