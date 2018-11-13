#include<stdio.h>
main()
{
int i,n,sum=0;
printf("Enter the limit of natural number\n");
scanf("%d",&n);
i=0;
printf("\nnumbers are\n");
do
{
printf("%d\n",i);
sum=sum+i;
i++;
}
while(i<=n);
printf("\n sum=%d\n",sum);
}

