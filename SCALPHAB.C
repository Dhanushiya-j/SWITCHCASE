#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter the character:");
scanf("%c",&ch);
switch(ch){
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("vowel");
break;
default:
printf("consonant");
}
getch();
}