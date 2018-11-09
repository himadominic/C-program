
#include<stdio.h>
void main()
{
	char n[10];
	int mark1,mark2,p,mark3,mark4,mark5,total;
	printf("enter the name of the student");
	scanf("%s",&n);
	printf("marks is");
	scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
	if((mark1<30)||(mark2<30)||(mark3<30)||(mark4<30)||(mark5<30))
	{
		printf("failed");
	}
        else
{
	total=mark1+mark2+mark3;
	printf("total=%d",total);
	p=((total)/500)*100;
	printf("%d",p);
}
	if(total>250)
	{
		printf("A+ grade");
	}
	else if(total>180)
	{
		printf("A grade");

	}
	else if(total>100)
	{
		printf("B grade");
	}
	else if(total>80)
	{
		printf("C grade");

	}
	else if(total>70)
	{
		printf("D grade");
	}
}


