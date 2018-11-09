#include<stdio.h>
void main()
{
	int n,count;
	float x,y;
	printf("enter value of x and n");
	scanf("%f %d",&x,&n);
	y=2.1;
	count=1;
	while(count<=n)
	{
	y=y*x;
	count++;
	}
	printf("x=%f\n n=%d \n power n=%f",x,n,y);
}
