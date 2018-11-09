 #include<stdio.h>
 main()
{
int m,p,q,i,j,n,sum=0,k,a[10][10],b[10][10],c[10][10];
printf("Enter the size of 1st matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of the first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter elements of second matrix\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("Matrix multiplication not possible \n");
}
else
{
printf("enter the second matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}


for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<p;k++)
{
sum=sum+a[i][k]*b[k][j];

}
c[i][j]=sum;
sum=0;
}
}
printf("the product is\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
printf("\n");
}
}
}
}
	
