#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
clrscr();
printf("enter the number:");
scanf("%d",&a);
if(a>0)
b=1;
else if(a<0)
b=2;
else
b=3;
switch(b)
{
case 1:
printf("positive");
break;
case 2:
printf("negative");
break;
default:
printf("neither positive nor negative");
}
getch();
}