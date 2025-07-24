#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include"login.h"
void loginpage();
void login();
void welcome();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
welcome();
loginpage();
}
void welcome()
{
int i;
setcolor(BLACK);
setcolor(MAGENTA);
settextstyle(1,0,4);
outtextxy(145,100,"\n SIMULATION PROJECT\n");
delay(200);
for(i=0;i<310;i++)
{
setcolor(CYAN);
settextstyle(1,0,2);
outtextxy(158+i,130,"^");
delay(4);
}
delay(100);

for(i=0;i<310;i++)
{
setcolor(CYAN);
outtextxy(158+i,120,"_");
delay(4);
}
setcolor(WHITE);
rectangle(10,190,635,285);
setcolor(BROWN);
settextstyle(1,0,2);
outtextxy(10,200,"\n PRINT THE SHORTEST DISTANCE WHICH MUST BE TRAVELLED");
outtextxy(210,225,"\n BY A SALES PERSON");
delay(200);
outtextxy(90,250,"\n AND RETURN TO THE ORIGIN PLACE BY USING");
setcolor(CYAN);
settextstyle(10,HORIZ_DIR,2);
delay(1000);
outtextxy(50,320,"\n TRAVELLING SALESMAN PROBLEM \n");
settextstyle(10,HORIZ_DIR,2);
delay(1000);
cleardevice();
}
/* login page */
void loginpage()
{
setcolor(WHITE);
login();
getch();
}