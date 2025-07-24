#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<string.h>
#include "introtsp.h"
void introtsp();
char uname[15],pass[12],ch;
void login()
{
int i,maxatt=0;
setfillstyle(1,6);
while(!kbhit())
{
char uname[15], pass[12];
rectangle(150,100,480,320);rectangle(152,102,478,318);
//textbox & password
rectangle(430,210,300,190);rectangle(430,238,300,258);
settextstyle(1,0,1);
outtextxy(200,190,"LOGIN");outtextxy(200,238,"PASSWORD");
//MAINline
settextstyle(8,0,5);
outtextxy(220,100,"LOGIN>>>");
for(i=0;i<=3;i++)
{
gotoxy(39,13);
scanf("%s",&uname);
gotoxy(39,16);
for(i=0;i<13;i++)
{
ch=getch();
pass[i]=ch;
if(ch!=13)
printf("*");
if(ch==13)
{
pass[i]='\0';
break;
}
}
if(strcmp(uname,"tsp")==0)
{
if(strcmp(pass,"tsp123")==0)
{
settextstyle(2,0,5);
setcolor(GREEN);
gotoxy(30,100);
printf("\n\n\t               Login Success! Welcome To You %s",uname);
rectangle(150,100,480,320);rectangle(152,102,478,318);
for(i=0;i<322;i++)
{
setcolor(GREEN);
outtextxy(152+i,305,"*");
delay(10);
setcolor(WHITE);
outtextxy(240,290,"Loading...Please Wait");
}
delay(500);
introtsp();
}
else
{
settextstyle(2,0,5);
setcolor(RED);
outtextxy(260,270,"wrong password");
rectangle(150,100,480,320);rectangle(152,102,478,318);
delay(500);
setcolor(WHITE);
maxatt=maxatt+1;
}
}
else
{
settextstyle(2,0,5);
setcolor(RED);
printf("\n\n\t\t            %s doesn't exist",uname);
rectangle(150,100,480,320);rectangle(152,102,478,318);
delay(500);
setcolor(WHITE);
maxatt=maxatt+1;
}
if(maxatt>2)
{
outtextxy(240,290,"Maximum Attemps Over");
delay(2000);
exit(1);
}
delay(1000);
cleardevice();
}
}
getch();
closegraph();
}
