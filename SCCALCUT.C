#include<stdio.h>
#include<conio.h>
void main()
{
float num_1,num_2;
char a;
clrscr();
printf("enter the arithmetic operator:");
scanf("%c",&a);
printf("enter num_1:\n");
scanf("%f",&num_1);
printf("enter num_2:\n");
scanf("%f",&num_2);
switch(a){
case '+':
printf("%f",num_1+num_2);
break;
case '-':
printf("%f",num_1-num_2);
break;
case '*':
printf("%f",num_1*num_2);
break;
case '/':
printf("%f",num_1/num_2);
break;
default:
printf("invalid");
}
getch();
}




