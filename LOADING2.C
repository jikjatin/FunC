#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	clrscr();
	gotoxy(1,15);
	for(i=0;i<80;i++)
	{
		printf("_",i);

	}
	gotoxy(1,17);
	for(i=0;i<80;i++)
	{
		printf("_",i);

	}
	gotoxy(1,16);
	for(i=0;i<80;i++)
	{
		printf("%c",176);

	}
	gotoxy(1,16);
	for(i=0;i<80;i++)
	{
		textcolor(GREEN);
		cprintf("%c",177);
		delay(50);


	}
	getch();
}