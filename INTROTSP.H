#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include"flow.h"
#include"a1.h"
#include"norwork.h"
#include"workin.h"
void intro();
void mainmenu();
void flow();
void a1();
void norwork();
void workin();

void introtsp()
{
int gd = DETECT, gm;
initgraph(&gd,&gm, "c://turboc3//bgi");
intro();
mainmenu();
}
void intro()
{
setcolor(RED);
rectangle(40,10,590,460);
setcolor(CYAN);
rectangle(30,20,580,470);
setcolor(CYAN);
settextstyle(1,0,3);
setcolor(CYAN);
delay(500);
outtextxy(190,30,"THE NATIONAL COLLEGE");
outtextxy(240,55,"AUTONOMOUS");
outtextxy(145,80,"BASAVANAGUDI,BENGALURU-04");
setcolor(YELLOW);
delay(500);
outtextxy(208,135,"SIMULATION PROJECT");
outtextxy(215,137,"__________________");
settextstyle(1,0,1);
setcolor(RED);
delay(500);
setcolor(YELLOW);
outtextxy(65,185,"Class :");
setcolor(RED);
outtextxy(130,185,"V sem BCA");
setcolor(YELLOW);
delay(500);
outtextxy(65,245,"Project guide : ");
setcolor(RED);
outtextxy(230,245,"Prof: JAGADEESHA B G ");
settextstyle(1,0,1);
outtextxy(210,270,"Dept. of Computer Science");
delay(500);
settextstyle(1,0,2);
setcolor(YELLOW);
outtextxy(65,310,"Team members : ");
setcolor(RED);
delay(500);
outtextxy(145,350,"CHANDAN G         20NCBC1006");
delay(500);
outtextxy(145,380,"RAVINDRA T         20NCBC1030");
delay(500);
outtextxy(145,410,"KUSHAL U           20NCBC1017");
delay(4000);
cleardevice();
setcolor(RED);
rectangle(20,80,600,400);
setcolor(CYAN);
rectangle(10,90,590,410);
delay(500);
setcolor(BROWN);
settextstyle(7,0,2);
outtextxy(183,125,"ABOUT THE PROJECT");
outtextxy(180,113,"--------------------");
outtextxy(180,137,"--------------------");
settextstyle(1,0,1);
setcolor(WHITE);
outtextxy(35,185,"The traveling sales Person problem is a classic problem in");
outtextxy(35,210,"combinatorial optimization. This problem is to find the");
outtextxy(35,235,"shortest path that a salesman should take to traverse");
outtextxy(35,260,"throght a list of cities and return to the origin city.");
outtextxy(35,285,"The list of cities and the distance between each");
outtextxy(35,310,"pair are provided. TSP is useful in various applications");
outtextxy(35,335,"in real life such as planning or logistics.");
delay(4000);
cleardevice();
}
void mainmenu()
{
int bb;
int i,j;
while(bb!=6)
{
cleardevice();
settextstyle(1,0,3);
setcolor(BROWN);
outtextxy(0,5,"********************************* MENU *******************************");
outtextxy(0,450,"************************************************************************");
settextstyle(1,0,2);
setcolor(CYAN);
outtextxy(0,55,"1. DESCRIPTION AND APPLICATIONS");
outtextxy(0,105,"2. ALGORITHM WITH SIMPLE EXAMPLE");
outtextxy(0,160,"3. FLOWCHART OF TSP");
outtextxy(0,210,"4. DEMONSTRATE TSP PROBLEM (Without Graphics)");
outtextxy(0,260,"5. DEMONSTRATE TSP PROBLEM (With Graphics)");
outtextxy(0,310,"6. EXIT");
setcolor(RED);
outtextxy(0,375,"Enter Your Choice:");
gotoxy(27,25);
scanf("%d",&bb);
switch(bb)
{
case 1:
{
cleardevice();
setcolor(RED);
rectangle(20,80,600,400);
setcolor(CYAN);
rectangle(10,90,590,410);
delay(500);
setcolor(BROWN);
settextstyle(7,0,2);
outtextxy(183,125,"ABOUT THE PROJECT");
outtextxy(180,113,"--------------------");
outtextxy(180,137,"--------------------");
settextstyle(1,0,1);
setcolor(WHITE);
outtextxy(35,185,"The traveling sales Person problem is a classic problem in");
outtextxy(35,210,"combinatorial optimization. This problem is to find the");
outtextxy(35,235,"shortest path that a salesman should take to traverse");
outtextxy(35,260,"throght a list of cities and return to the origin city.");
outtextxy(35,285,"The list of cities and the distance between each");
outtextxy(35,310,"pair are provided. TSP is useful in various applications");
outtextxy(35,335,"in real life such as planning or logistics.");
getch();
cleardevice();
setcolor(GREEN);
outtextxy(100,110,"TRAVELLING SALESMAN PROBLEM APPLICATION");
delay(500);
setcolor(YELLOW);
outtextxy(80,150,"1. Vehicle Routing Problems");
outtextxy(80,190,"2. Logistics Planning");
outtextxy(80,230,"3. Scheduling");
outtextxy(80,270,"4. Computer Wiring");
outtextxy(80,310,"5. Clustering and Job-Shop Scheduling");
outtextxy(80,350,"6. X-Ray Crystallography ");
outtextxy(80,390,"7. Order Picking Problems In Warehouses");
delay(2000);
setcolor(WHITE);
settextstyle(2,0,5);
outtextxy(280,450,"Press Enter To View Application Demo...");
getch();
a1();
break;
}
case 2:
{
cleardevice();
setcolor(RED);
rectangle(0,0,638,475);
setcolor(WHITE);
line(0,60,638,60);
//algorithm
setcolor(CYAN);
settextstyle(6,0,3);
outtextxy(60,10,"Travelling Sales Person Algorithm And Simple Example");
setcolor(WHITE);
settextstyle(8,0,2);
outtextxy(20,85,"Step 1: Start");
outtextxy(20,125,"Step 2: Consider City One As The Staring And");
outtextxy(113,150,"Ending Point");
outtextxy(20,190,"Step 3: Generate All (n-1)! Permutations Of Cities");
outtextxy(20,230,"Step 4: Calculate The Cost Of Every Permutations & Keep");
outtextxy(113,255,"Track Of The Minimun Cost Permutations");
outtextxy(20,295,"Step 5: Return The Permutation With Minimun Cost");
outtextxy(20,335,"Step 6: Exit");
delay(2000);
settextstyle(2,0,5);
outtextxy(410,450,"Press Enter To Continue...");
getch();
cleardevice();
setcolor(RED);
settextstyle(3,0,3);
outtextxy(230,60,"Program Algorithm");
settextstyle(1,0,1);
setcolor(WHITE);
delay(300);
outtextxy(10,120,"C ({1}, 1) = 0");
delay(400);
outtextxy(10,160,"for s = 2 to n do");
delay(1000);
outtextxy(10,200,"for all subsets S E {1, 2, 3, ..., n} of size s and containing 1");
delay(1000);
outtextxy(10,240,"C (S, 1) = infinity");
delay(1000);
outtextxy(10,280,"for all j E S and j != 1");
delay(1000);
outtextxy(10,320,"C (S, j) = min {C (S - {j}, i) + d(i, j) for i E S and i != j}");
delay(1000);
outtextxy(10,360,"Return min j C ({1, 2, 3, ..., n}, j) + d(j, i)");
delay(2000);
settextstyle(2,0,5);
outtextxy(370,450,"Press Enter to View A Example...");
getch();
//example
cleardevice();
setcolor(RED);
circle(20,70,20);circle(20,170,20);
circle(150,70,20);circle(150,170,20);
setcolor(WHITE);
line(40,68,130,68);line(40,168,130,168);line(20,90,20,150);
line(150,90,150,150);line(35,83,140,153);line(35,155,140,86);
outtextxy(17,65,"A");outtextxy(145,65,"B");outtextxy(17,163,"C");
outtextxy(145,163,"D");outtextxy(80,50,"4");outtextxy(80,170,"5");
outtextxy(2,115,"3");outtextxy(160,115,"2");outtextxy(100,93,"1");
outtextxy(65,135,"1");
delay(2000);
setcolor(YELLOW);
settextstyle(2,0,5);
outtextxy(5,220,"So From The Given Diagram First ");
outtextxy(5,235,"Draw A Cost Adjecent Matrix.");
delay(3000);
setcolor(WHITE);
settextstyle(2,0,7);
outtextxy(30,260,"1   2   3   4");
outtextxy(7,290,"1");outtextxy(7,330,"2");
outtextxy(7,370,"3");outtextxy(7,410,"4");
line(7,285,200,285);line(20,260,20,440);
outtextxy(30,290,"0   4   1   3");outtextxy(30,330,"4   0   2   1");
outtextxy(30,370,"1   2   0   5");outtextxy(30,410,"3   1   5   0");
delay(1000);
settextstyle(2,0,5);
outtextxy(270,60,"Consider A,B,C,D As Four Cities, And The ");
outtextxy(270,75,"Cost From One City To Another City Is Given.");
delay(1500);
outtextxy(270,110,"Consider City A As Starting And Ending Points.");
delay(1500);
outtextxy(270,145,"Now Calculate Each And Every Shortest Way From");
outtextxy(270,160,"A To Other Cities And Then Reach A.");
outtextxy(270,195,"By Using The General Equation.");
delay(2000);
settextstyle(1,0,1);
outtextxy(270,225,"g(1,j) = min { c(i,j) + g (j,s-{ i }) }");
settextstyle(2,0,5);
outtextxy(270,260,"We Get,");
delay(2500);
setcolor(RED);
circle(270,350,15);circle(340,350,15);circle(410,350,15);
circle(480,350,15);circle(550,350,15);
setcolor(WHITE);
outtextxy(268,343,"A");outtextxy(338,343,"D");
outtextxy(408,343,"B");outtextxy(478,343,"C");
outtextxy(548,343,"A");delay(800);
outtextxy(285,343,"---->");outtextxy(355,343,"---->");
outtextxy(425,343,"---->");outtextxy(495,343,"---->");
delay(500);
outtextxy(300,327,"1        2        1       3        = 7");
delay(2000);
outtextxy(270,400,"Therefore The Minimum Cost For Travelling");
outtextxy(270,415,"From All The Cities Is : ");
settextstyle(1,0,1);
setcolor(RED);
outtextxy(460,415,"7");
delay(2000);
setcolor(WHITE);
settextstyle(2,0,5);
outtextxy(460,450,"Press Any Key To Exit...");
getch();
break;
}
case 3:
{
flow();
break;
}
case 4:
{
norwork();
break;
}
case 5:
{
workin();
break;
}
case 6:
{
cleardevice();
setcolor(RED);
settextstyle(1,0,7);
outtextxy(140,200,"THANK YOU");
delay(100);
for(i=0;i<345;i++)
{
setcolor(RED);
settextstyle(1,0,2);
outtextxy(140+i,265,"^");
delay(4);
}
delay(1000);
exit(1);
break;
}
default:
{
settextstyle(2,0,6);
setcolor(RED);
rectangle(240,365,500,420);
outtextxy(275,370,"Invalid choice Please");
setcolor(WHITE);
outtextxy(250,395,"Enter any Number from 1-6");
delay(2000);
}
}
}
}