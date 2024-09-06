#include<stdio.h>
#include<conio.h>
void main()
{//day 1=monday;
//day 2=tuesday;
//day 3=wednesday;
//day 4=thurshday;
//day 5=friday;
//day 6=saturday;
//day 7=sunday;
int day;
clrscr();
printf("enter the day no:");
scanf("%d",&day);
switch (day){
case 1:
printf("monday");
break;
case 2:
printf("tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("thurshday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;
default:
printf("no week days");
}
getch();
}
