#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include"city5.h"
void city5();
void workin()
{
int n,o,i,temp;
int c1,c2,c3,c4,c5,c6,c7,c8,c9,a1,a2,a3,a4,a5,a6;
cleardevice();
while(n!=0)
{
setcolor(YELLOW);
settextstyle(3,0,1);
outtextxy(5,8,"Enter The Number of Cities:");
gotoxy(34,2);
scanf("%d",&n);
delay(1000);
switch(n)
{
case 1:
{
cleardevice();
setcolor(RED);
settextstyle(3,0,1);
cleardevice();
outtextxy(10,10,"Enter the Cost Matrix Of 1st City");
gotoxy(2,4);
scanf("%d",&c1);
delay(1000);
setcolor(WHITE);
circle(200,200,50);
setfillstyle(9,GREEN);
floodfill(200,200,WHITE);
outtextxy(196,190,"1");
delay(1000);
circle(400,200,50);
setfillstyle(9,GREEN);
floodfill(400,200,WHITE);
outtextxy(396,190,"1");
for(i=0;i<=90;i+=2)
{
setcolor(RED);
outtextxy(250+i,190,"-");
delay(10);
}
gotoxy(37,12);
printf("%d",c1);
outtextxy(342,189,">");
delay(300);
settextstyle(3,0,1);
setcolor(GREEN);
outtextxy(10,296,"Since There are no other cities to travel the minimim cost is:");
gotoxy(73,20);
printf("%d",c1);
getch();
cleardevice();
break;
}
case 2:
{
cleardevice();
setcolor(YELLOW);
settextstyle(3,0,1);
cleardevice();
outtextxy(10,10,"Enter the Cost Matrix Of 1st & 2nd City");
outtextxy(20,60,"1\t\t\t2");
outtextxy(0,90,"1");
outtextxy(0,125,"2");
line(0,90,100,90);
line(13,60,13,150);
gotoxy(4,7);
scanf("%d",&c1);
gotoxy(4,9);
scanf("%d",&c2);
gotoxy(11,7);
scanf("%d",&c3);
gotoxy(11,9);
scanf("%d",&c4);
delay(1000);
setcolor(WHITE);

circle(100,200,50);
setfillstyle(9,GREEN);
floodfill(100,200,WHITE);
outtextxy(96,190,"1");
delay(1000);

circle(300,200,50);
setfillstyle(9,GREEN);
floodfill(300,200,WHITE);
outtextxy(296,190,"2");
delay(1000);

circle(500,200,50);
setfillstyle(9,GREEN);
floodfill(500,200,WHITE);
outtextxy(496,190,"1");
delay(300);

for(i=0;i<=90;i+=2)
{
setcolor(RED);
outtextxy(150+i,190,"-");
delay(10);
}
for(i=0;i<=90;i+=2)
{
setcolor(RED);
outtextxy(350+i,190,"-");
delay(10);
}
gotoxy(25,12);
printf("%d",c2);
gotoxy(50,12);
printf("%d",c3);
outtextxy(242,189,">");
outtextxy(442,189,">");
temp=c2+c3;
delay(300);
settextstyle(3,0,1);
setcolor(GREEN);
outtextxy(10,296,"Since there are only 2 cities first we start from city 1 and go to city 2");
outtextxy(10,316,"And travel back to city 1 and the minimum cost is :");
gotoxy(62,21);
printf("%d",temp);
getch();
cleardevice();
break;
}
case 3:
{
cleardevice();
setcolor(YELLOW);
settextstyle(3,0,1);
cleardevice();
outtextxy(10,10,"Enter the Cost Of 1st & 2nd City");
outtextxy(20,60,"1\t\t\t2\t\t\t3");
outtextxy(0,90,"1");
outtextxy(0,125,"2");
outtextxy(0,157,"3");
line(0,90,175,90);
line(13,60,13,190);
gotoxy(4,7);
scanf("%d",&c1);
gotoxy(4,9);
scanf("%d",&c2);
gotoxy(4,11);
scanf("%d",&c3);
gotoxy(11,7);
scanf("%d",&c4);
gotoxy(11,9);
scanf("%d",&c5);
gotoxy(11,11);
scanf("%d",&c6);
gotoxy(18,7);
scanf("%d",&c7);
gotoxy(18,9);
scanf("%d",&c8);
gotoxy(18,11);
scanf("%d",&c9);
delay(1000);
setcolor(WHITE);

circle(100,250,40);
setfillstyle(9,GREEN);
floodfill(100,250,WHITE);
delay(1000);

circle(250,250,40);
setfillstyle(9,GREEN);
floodfill(250,250,WHITE);
delay(1000);

circle(400,250,40);
setfillstyle(9,GREEN);
floodfill(400,250,WHITE);
delay(1000);

circle(550,250,40);
setfillstyle(9,GREEN);
floodfill(550,250,WHITE);
delay(300);

for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(140+i,235,"-");
delay(10);
}
for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(290+i,235,"-");
delay(10);
}
for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(440+i,235,"-");
delay(10);
}
outtextxy(200,235,">");
outtextxy(350,235,">");
outtextxy(500,235,">");
setcolor(WHITE);
if(c2<c3)
{
outtextxy(95,240,"1");
delay(100);
outtextxy(245,240,"2");
delay(100);
outtextxy(395,240,"3");
delay(100);
outtextxy(545,240,"1");
gotoxy(20,15);
printf("%d",c2);
gotoxy(40,15);
printf("%d",c8);
gotoxy(60,15);
printf("%d",c3);
temp=c3+c8+c4;
}
else
{
outtextxy(95,240,"1");
delay(100);
outtextxy(245,240,"3");
delay(100);
outtextxy(395,240,"2");
delay(100);
outtextxy(545,240,"1");
gotoxy(20,15);
printf("%d",c3);
gotoxy(40,15);
printf("%d",c8);
gotoxy(60,15);
printf("%d",c4);
temp=c3+c8+c4;
}
delay(300);
settextstyle(3,0,1);
setcolor(GREEN);
outtextxy(10,310,"The Minimum cost for travelling the three cities and returing to");
outtextxy(10,345,"the First city, the minimum cost is :");
gotoxy(45,23);
printf("%d",temp);
getch();
cleardevice();
break;
}
case 4:
{
cleardevice();
settextstyle(2,0,5);
outtextxy(0,10,"Consider 4 cities A B C D and give the cost for each city");
setcolor(RED);
settextstyle(2,0,6);
circle(20,70,20);circle(20,170,20);circle(150,70,20);circle(150,170,20);
setcolor(WHITE);
line(40,68,130,68);line(40,168,130,168);line(20,90,20,150);
line(150,90,150,150);line(35,83,140,153);line(35,155,140,86);
outtextxy(17,65,"A");outtextxy(145,65,"B");outtextxy(17,163,"C");outtextxy(145,163,"D");
gotoxy(10,4);
scanf("%d",&a1);
gotoxy(1,8);
scanf("%d",&a2);
gotoxy(21,8);
scanf("%d",&a3);
gotoxy(10,12);
scanf("%d",&a4);
gotoxy(8,10);
scanf("%d",&a5);
gotoxy(8,6);
scanf("%d",&a6);
delay(1000);
//cost matrix
outtextxy(240,60,"A");outtextxy(290,60,"B");outtextxy(338,60,"C");
outtextxy(388,60,"D");outtextxy(215,94,"A");outtextxy(215,127,"B");
outtextxy(215,159,"C");outtextxy(215,189,"D");
line(205,85,410,85);
line(230,60,230,210);
delay(1000);
gotoxy(31,7);
printf("0");
gotoxy(31,9);
printf("%d",a1);
gotoxy(31,11);
printf("%d",a2);
gotoxy(31,13);
printf("%d",a6);
gotoxy(37,7);
printf("%d",a1);
gotoxy(37,9);
printf("0");
gotoxy(37,11);
printf("%d",a5);
gotoxy(37,13);
printf("%d",a3);
gotoxy(43,7);
printf("%d",a2);
gotoxy(43,9);
printf("%d",a5);
gotoxy(43,11);
printf("0");
gotoxy(43,13);
printf("%d",a4);
gotoxy(49,7);
printf("%d",a6);
gotoxy(49,9);
printf("%d",a3);
gotoxy(49,11);
printf("%d",a4);
gotoxy(49,13);
printf("0");
getch();
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,230,"Now lets Consider City A as Starting Point");
setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(10,250,"From City A there are Three Possible ways :");
setcolor(WHITE);
outtextxy(10,284,"A -> B :");
gotoxy(13,19);
printf("%d",a1);
delay(200);
outtextxy(10,314,"A -> C :");
gotoxy(13,21);
printf("%d",a2);
delay(200);
outtextxy(10,347,"A -> D :");
gotoxy(13,23);
printf("%d",a6);
delay(500);
getch();
delay(1000);
setcolor(WHITE);
outtextxy(10,370,"Now the shortest path from A is:");
setcolor(GREEN);
settextstyle(1,0,2);
if((a1<=a2)&&(a1<=a6))
{
outtextxy(30,395,"A -> B");
o=a1;
}
else if((a2<=a1)&&(a2<=a6))
{
outtextxy(30,395,"A -> C");
o=a2;
}
else if((a6<=a1)&&(a6<=a2))
{
outtextxy(30,395,"A -> D");
o=a6;
}
else
{
outtextxy(700,700,".");
}
getch();
delay(1000);
cleardevice();
if(o==a1)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,10,"Now consider city B there are 2 possible ways :");
setcolor(WHITE);
delay(2000);
outtextxy(30,40,"B -> C");
gotoxy(20,5);
outtextxy(30,70,"B -> D");
gotoxy(20,5);
outtextxy(30,90,"And the best way is : ");
delay(2000);
if(a5<=a3)
{
setcolor(GREEN);
outtextxy(60,120,"B -> C");
settextstyle(1,0,1);
delay(1000);
outtextxy(40,150,"PATH : A -> B -> C");
delay(1000);
getch();
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,180,"Now consider the last city to travel and return back to city A :");
delay(1000);
outtextxy(30,210,"Since the left out city is D we travel to D");
settextstyle(1,0,1);
delay(2000);
setcolor(GREEN);
outtextxy(60,240,"PATH : A -> B -> C -> D -> A");
temp=a1+a5+a4+a6;
delay(2000);
circle(30,400,30);
setfillstyle(9,GREEN);
delay(1000);
circle(160,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(310,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(460,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(605,400,30);
setfillstyle(9,GREEN);
delay(300);
setcolor(WHITE);
outtextxy(30,390,"A");
delay(200);
outtextxy(160,390,"B");
delay(300);
outtextxy(310,390,"C");
delay(300);
outtextxy(460,390,"D");
delay(300);
outtextxy(605,390,"A");
delay(500);

for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(60+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(190+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(340+i,390,"-");
delay(10);
}
for(i=0;i<=75;i+=2)
{
setcolor(RED);
outtextxy(490+i,390,"-");
delay(10);
}
outtextxy(120,390,">");
outtextxy(270,390,">");
outtextxy(420,390,">");
outtextxy(565,390,">");
setcolor(WHITE);
delay(2000);
outtextxy(133,313,"Therefore the Minimum cost is :");
gotoxy(56,21);
printf("%d",temp);
}
else
{
setcolor(GREEN);
outtextxy(60,120,"B -> D");
settextstyle(1,0,1);
delay(2000);
outtextxy(40,150,"PATH : A -> B -> D");
delay(1000);
getch();
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,180,"Now consider the last city to travel and return back to city A :");
delay(1000);
outtextxy(30,210,"Since the left out city is C we travel to C");
settextstyle(1,0,1);
delay(2000);
setcolor(GREEN);
outtextxy(60,240,"PATH : A -> B -> D -> C -> A");
temp=a1+a3+a4+a2;
delay(2000);
circle(30,400,30);
setfillstyle(9,GREEN);
//floodfill(30,400,WHITE);
delay(1000);
circle(160,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(310,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(460,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(605,400,30);
setfillstyle(9,GREEN);
delay(300);
setcolor(WHITE);
outtextxy(30,390,"A");
delay(200);
outtextxy(160,390,"B");
delay(300);
outtextxy(310,390,"D");
delay(300);
outtextxy(460,390,"C");
delay(300);
outtextxy(605,390,"A");
delay(500);

for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(60+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(190+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(340+i,390,"-");
delay(10);
}
for(i=0;i<=75;i+=2)
{
setcolor(RED);
outtextxy(490+i,390,"-");
delay(10);
}
outtextxy(120,390,">");
outtextxy(270,390,">");
outtextxy(420,390,">");
outtextxy(565,390,">");
delay(2000);
setcolor(WHITE);
outtextxy(133,313,"Therefore the Minimum cost is :");
gotoxy(56,21);
printf("%d",temp);
}
}
else if(o==a2)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,10,"Now consider city C there are 2 possible ways :");
delay(1000);
setcolor(WHITE);
outtextxy(30,30,"C -> B");
outtextxy(30,50,"C -> D");
outtextxy(30,90,"But the best way is : ");

if(a5<=a4)
{
setcolor(GREEN);
delay(2000);
outtextxy(60,120,"C -> B");
settextstyle(1,0,1);
delay(2000);
outtextxy(40,150,"PATH : A -> C -> B");
delay(1000);
getch();
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,180,"Now consider the last city to travel and return back to city A :");
delay(1000);
outtextxy(30,210,"Since the left out city is D we travel to D");
settextstyle(1,0,1);
delay(2000);
setcolor(GREEN);
outtextxy(60,240,"PATH : A -> C -> B -> D -> A");
temp=a2+a6+a4+a5;
delay(2000);
circle(30,400,30);
setfillstyle(9,GREEN);
delay(1000);
circle(160,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(310,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(460,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(605,400,30);
setfillstyle(9,GREEN);
delay(300);
setcolor(WHITE);
outtextxy(30,390,"A");
delay(200);
outtextxy(160,390,"C");
delay(300);
outtextxy(310,390,"B");
delay(300);
outtextxy(460,390,"D");
delay(300);
outtextxy(605,390,"A");
delay(500);

for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(60+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(190+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(340+i,390,"-");
delay(10);
}
for(i=0;i<=75;i+=2)
{
setcolor(RED);
outtextxy(490+i,390,"-");
delay(10);
}
outtextxy(120,390,">");
outtextxy(270,390,">");
outtextxy(420,390,">");
outtextxy(565,390,">");
setcolor(WHITE);
delay(2000);
outtextxy(133,313,"Therefore the Minimum cost is :");
gotoxy(56,21);
printf("%d",temp);
}
else
{
setcolor(GREEN);
outtextxy(60,120,"C -> D");
settextstyle(1,0,1);
delay(2000);
outtextxy(40,150,"PATH : A -> C -> D");
delay(1000);
getch();
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,180,"Now consider the last city to travel and return back to city A :");
delay(1000);
outtextxy(30,210,"Since the left out city is B we travel to B");
settextstyle(1,0,1);
delay(2000);
setcolor(GREEN);
outtextxy(60,240,"PATH : A -> C -> D -> B -> A");
temp=a5+a4+a6+a1;
circle(30,400,30);
setfillstyle(9,GREEN);
delay(2000);
circle(160,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(310,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(460,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(605,400,30);
setfillstyle(9,GREEN);
delay(300);
setcolor(WHITE);
outtextxy(30,390,"A");
delay(200);
outtextxy(160,390,"C");
delay(300);
outtextxy(310,390,"D");
delay(300);
outtextxy(460,390,"B");
delay(300);
outtextxy(605,390,"A");
delay(500);

for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(60+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(190+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(340+i,390,"-");
delay(10);
}
for(i=0;i<=75;i+=2)
{
setcolor(RED);
outtextxy(490+i,390,"-");
delay(10);
}
outtextxy(120,390,">");
outtextxy(270,390,">");
outtextxy(420,390,">");
outtextxy(565,390,">");
setcolor(WHITE);
delay(2000);
outtextxy(133,313,"Therefore the Minimum cost is :");
gotoxy(56,21);
printf("%d",temp);
}
}
else if(o==a6)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,10,"Now consider city D there are 2 possible ways :");
delay(1000);
setcolor(WHITE);
outtextxy(30,30,"D -> B");
outtextxy(30,50,"D -> C");
outtextxy(30,90,"But the best way is : ");
if(a3<=a4)
{
setcolor(GREEN);
delay(1000);
outtextxy(60,120,"D -> B");
settextstyle(1,0,1);
delay(1000);
outtextxy(40,150,"PATH : A -> D -> B");
delay(1000);
getch();
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,180,"Now consider the last city to travel and return back to city A :");
delay(1000);
outtextxy(30,210,"Since the left out city is C we travel to C");
settextstyle(1,0,1);
delay(1000);
setcolor(GREEN);
delay(2000);
outtextxy(60,240,"PATH : A -> D -> B -> C -> A");
temp=a5+a3+a6+a2;
delay(2000);
circle(30,400,30);
setfillstyle(9,GREEN);
delay(1000);
circle(160,400,30);
setfillstyle(9,GREEN);
delay(1000);
circle(310,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(460,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(605,400,30);
setfillstyle(9,GREEN);
delay(300);
setcolor(WHITE);
outtextxy(30,390,"A");
delay(200);
outtextxy(160,390,"D");
delay(300);
outtextxy(310,390,"B");
delay(300);
outtextxy(460,390,"C");
delay(300);
outtextxy(605,390,"A");
delay(500);
for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(60+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(190+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(340+i,390,"-");
delay(10);
}
for(i=0;i<=75;i+=2)
{
setcolor(RED);
outtextxy(490+i,390,"-");
delay(10);
}
outtextxy(120,390,">");
outtextxy(270,390,">");
outtextxy(420,390,">");
outtextxy(565,390,">");
setcolor(WHITE);
delay(2000);
outtextxy(133,313,"Therefore the Minimum cost is :");
gotoxy(56,21);
printf("%d",temp);
}
else
{
setcolor(GREEN);
delay(1000);
outtextxy(60,120,"D -> C");
settextstyle(1,0,1);
delay(2000);
outtextxy(40,150,"PATH : A -> D -> C");
delay(1000);
getch();
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,180,"Now consider the last city to travel and return back to city A :");
delay(1000);
outtextxy(30,210,"Since the left out city is B we travel to B");
settextstyle(1,0,1);
delay(1000);
setcolor(GREEN);
delay(2000);
outtextxy(60,240,"PATH : A -> D -> C -> B -> A");
temp=a5+a4+a6+a1;
delay(2000);
circle(30,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(160,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(310,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(460,400,30);
setfillstyle(9,GREEN);
delay(1000);

circle(605,400,30);
setfillstyle(9,GREEN);
delay(300);
setcolor(WHITE);
outtextxy(30,390,"A");
delay(200);
outtextxy(160,390,"D");
delay(300);
outtextxy(310,390,"C");
delay(300);
outtextxy(460,390,"B");
delay(300);
outtextxy(605,390,"A");
delay(500);

for(i=0;i<=60;i+=2)
{
setcolor(RED);
outtextxy(60+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(190+i,390,"-");
delay(10);
}
for(i=0;i<=80;i+=2)
{
setcolor(RED);
outtextxy(340+i,390,"-");
delay(10);
}
for(i=0;i<=75;i+=2)
{
setcolor(RED);
outtextxy(490+i,390,"-");
delay(10);
}
outtextxy(120,390,">");
outtextxy(270,390,">");
outtextxy(420,390,">");
outtextxy(565,390,">");
setcolor(WHITE);
delay(2000);
outtextxy(133,313,"Therefore the Minimum cost is :");
gotoxy(56,21);
printf("%d",temp);
}
}
getch();
cleardevice();
break;
}
case 5:
{
cleardevice();
city5();
}
case 0:
{
cleardevice();
break;
}
default:
{
setcolor(MAGENTA);
outtextxy(130,100,"Maximum Number Of Cities Allowed Is 5!");
delay(2000);
cleardevice();
}
}
}
}