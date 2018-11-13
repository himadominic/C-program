#include<stdio.h>
void main()
{
char s;
printf("\nenter roman letter(I,V,L,C,D,F)\n");
scanf("%c",&s);
switch(s)
{
case 'I':
printf("1\n");
break;
case 'V':
printf("5\n");
break;
case 'X':
printf("10\n");
break;
case 'L':
printf("50\n");
break;
case 'C':
printf("100\n");
break;
case 'D':
printf("500\n");
break;
case 'F':
printf("1000\n");
break;
default:
printf("\nno such roman number is found\n");
}
}

