#include<stdio.h>
void main()
{
int i=55,*ip;
float f=45.77,*fp;
char c='v',*cp;
printf("i=%d\n",i);
printf("f=%f\n",f);
printf("c=%c\n",c);
ip=&i;
printf("values of i=%u\n",ip);
printf("values of i=%d\n",*ip);
fp=&f;
printf("address of f=%u\n",fp);
printf("values of f=%f\n",*fp);
cp=&c;
printf("address of c=%u\n",cp);
printf("values of c=%c\n",*cp);
}

