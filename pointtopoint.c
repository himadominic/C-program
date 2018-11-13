#include<stdio.h>
void main()
{
int a=10,*ap,**app;
ap=&a;
app=&ap;
printf("address of a %u\n",ap);
printf("address of ap %u\n",app);
printf("value of a through ap %d\n",*ap);
printf("value of ap through app %d\n",**app);
}

