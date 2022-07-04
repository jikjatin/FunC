#include<conio.h>
#include<stdio.h>
void main()
{
	int n1,n2,n3,n4;
	clrscr();
	printf("enter the password:");
	n1=getch();
	printf("*");
	n2=getch();
	printf("*");
	n3=getch();
	printf("*");
	n4=getch();
	printf("*");
	if(n1=='1'&&n2=='1'&&n3=='1'&&n4=='1')
	{
		gotoxy(15,20);
		textcolor(GREEN);
		cprintf("password match");
	}
	else if(n1=='1'&&n2=='2'&&n3=='3'&&n4=='4')
	{
		gotoxy(15,20);
		textcolor(GREEN);
		cprintf("password match");
	}
	else if(n1=='6'&&n2=='1'&&n3=='1'&&n4=='8')
	{
		gotoxy(15,20);
		textcolor(GREEN);
		cprintf("password match");
	}
	else if(n1=='9'&&n2=='8'&&n3=='7'&&n4=='6')
	{
		gotoxy(15,20);
		textcolor(GREEN);
		cprintf("password match");
	}
	else
	{
		gotoxy(15,20);
		textcolor(RED+BLINK);
		cprintf("\7\7\7\7\7\7PASSWORD MISSMATCH");
	}
	getch();
}
