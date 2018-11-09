 #include<stdio.h>
void main()
{
int a,i,j,b,c[10][10],d[10][10],s[10][10];
printf("Enter the number of rows and columns\n");
scanf("%d%d",&a,&b);
printf("Enter the 1st Matrix\n");
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&c[i][j]);
}
}
printf("Enter the second matrix \n");
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&d[i][j]);
}
}
printf("The sum is\n");

for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
s[i][j]=c[i][j]+d[i][j];
printf("%d\t",s[i][j]);
}
printf("\n");
}
}
