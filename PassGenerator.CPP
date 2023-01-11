#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
#include<process.h>
#include<string.h>

const char data[] = "abcdefghijklmnopqrstuvwxyz"
				  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				  "0987654321"
				  "@#$&*.";
int str_len=sizeof(data)-1;
void main()
{
	 int gm,gd=DETECT,a;
	 srand(time(0));
	 char pass[500];
	 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	 setcolor(GREEN);
	 rectangle(150,90,540,333);
	 setcolor(LIGHTRED);
	 rectangle(140,80,550,343);
	 setcolor(WHITE);
	 rectangle(145,85,545,338);
	 setcolor(YELLOW);
	 settextstyle(BOLD_FONT,HORIZ_DIR,1);
	 outtextxy(180,95,"< Password Generator >");
	 setcolor(WHITE);
	 settextstyle(SMALL_FONT,HORIZ_DIR,6);
	 outtextxy(200,171,"Enter username:");
	 char name[40];
	 gotoxy(45,12);
	 cin.getline(name,40);
	 setcolor(WHITE);
	 rectangle(208,220,470,233);
	 int e=209;
	 setcolor(LIGHTGREEN);
	 for(int k=0;k<261;k++)
	 {
		delay(2);
		line(e,221,e,232);
		e++;
	 }
	 settextstyle(SMALL_FONT,HORIZ_DIR,5);
	 outtextxy(230,240,"Your Password is generated!");
	 settextstyle(SMALL_FONT,HORIZ_DIR,6);
	 outtextxy(200,284,"Strong Password:");
	 gotoxy(46,19);
	 for(int i=0; i<=12; i++)
	 cout<<data[rand()% str_len];
	 setcolor(LIGHTGRAY);
	 settextstyle(COMPLEX_FONT,HORIZ_DIR,1);
	 outtextxy(200,400,"Developed by Gitesh Mahadik");

	 getch();
}