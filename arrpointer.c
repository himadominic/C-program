#include<stdio.h>
#include<string.h>
void main()
{
char *t,*name[5]={"Alan","Steve","Merin","Linta","Veena"};
int i,j;
printf("the unsorted list of five names\n");
for(i=0;i<5;i++)
printf("%s\n",name[i]);
for(i=0;i<5;i++)
for(j=i+1;j<5;j++)
if(strcmp(name[i],name[j])>0)
{
t=name[i];
name[i]=name[j];
name[j]=t;
}
printf("sorted list of names\n");
for(i=0;i<5;i++)
printf("%s\n",name[i]);
}

