#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void c5();
void city5()
{
cleardevice();
c5();
}
void c5()
{
int o,o1,o2,o3,o4,temp;
int a1,a2,a3,a4,a5,a6,a7,a8,a9,a0;
cleardevice();
setcolor(WHITE);
settextstyle(2,0,6);
outtextxy(0,5,"Enter the cost for each city :");
setcolor(RED);
circle(120,60,20);
circle(20,120,20);circle(220,120,20);
circle(70,200,20);circle(180,200,20);
setcolor(WHITE);
outtextxy(118,50,"A");
outtextxy(18,110,"B");outtextxy(218,110,"C");
outtextxy(68,190,"D");outtextxy(178,190,"E");
line(102,70,35,108);line(138,70,205,105);
line(25,140,55,185);line(220,140,192,185);
line(90,200,160,200);line(40,120,200,120);
line(115,80,70,180);line(120,80,170,182);
line(40,125,165,185);line(75,180,200,125);
gotoxy(8,5);scanf("%d",&a0);
gotoxy(22,5);scanf("%d",&a1);
gotoxy(3,11);scanf("%d",&a2);
gotoxy(15,14);scanf("%d",&a3);
gotoxy(28,11);scanf("%d",&a4);
gotoxy(11,7);scanf("%d",&a5);
gotoxy(19,7);scanf("%d",&a6);
gotoxy(7,10);scanf("%d",&a7);
gotoxy(15,9);scanf("%d",&a8);
gotoxy(23,10);scanf("%d",&a9);
delay(1000);
setcolor(RED);
//cost adjecent matrix
line(400,30,400,210);
line(385,50,600,50);
setcolor(WHITE);
outtextxy(408,30,"A   B   C   D   E");
gotoxy(52,5);printf("0");
gotoxy(52,7);printf("%d",a0);
gotoxy(52,9);printf("%d",a1);
gotoxy(52,11);printf("%d",a5);
gotoxy(52,13);printf("%d",a6);

gotoxy(57,5);printf("%d",a0);
gotoxy(57,7);printf("0");
gotoxy(57,9);printf("%d",a8);
gotoxy(57,11);printf("%d",a2);
gotoxy(57,13);printf("%d",a7);

gotoxy(62,5);printf("%d",a1);
gotoxy(62,7);printf("%d",a8);
gotoxy(62,9);printf("0");
gotoxy(62,11);printf("%d",a9);
gotoxy(62,13);printf("%d",a4);

gotoxy(67,5);printf("%d",a5);
gotoxy(67,7);printf("%d",a2);
gotoxy(67,9);printf("%d",a9);
gotoxy(67,11);printf("0");
gotoxy(67,13);printf("%d",a3);

gotoxy(72,5);printf("%d",a6);
gotoxy(72,7);printf("%d",a7);
gotoxy(72,9);printf("%d",a4);
gotoxy(72,11);printf("%d",a3);
gotoxy(72,13);printf("0");

outtextxy(385,60,"A");
outtextxy(385,93,"B");
outtextxy(385,125,"C");
outtextxy(385,155,"D");
outtextxy(385,190,"E");
getch();
setcolor(YELLOW);
outtextxy(10,230,"Now let's consider A as starting and Ending point, We get!");
getch();
setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(30,250,"The possible ways from city A is:");
setcolor(BROWN);
outtextxy(70,270,"A --> B ="); gotoxy(21,18);printf("%d",a0);
outtextxy(70,300,"A --> C ="); gotoxy(21,20);printf("%d",a1);
outtextxy(70,330,"A --> D ="); gotoxy(21,22);printf("%d",a5);
outtextxy(70,363,"A --> E ="); gotoxy(21,24);printf("%d",a6);
getch();
if((a0<=a1)&&(a0<=a5)&&(a0<=a6))
{
outtextxy(300,310,"The best path is: A --> B");
o=a0;
setcolor(GREEN);
settextstyle(1,0,2);
delay(1000);
outtextxy(30,400,"PATH : A --> B");
}
else if((a1<=a0)&&(a0<=a5)&&(a0<=a6))
{
outtextxy(300,310,"The best path is: A --> C");
o=a1;
setcolor(GREEN);
settextstyle(1,0,2);
delay(1000);
outtextxy(30,400,"PATH : A --> C");
}
else if((a5<=a0)&&(a5<=a6)&&(a5<=a1))
{
outtextxy(300,310,"The best path is: A --> D");
o=a5;
setcolor(GREEN);
settextstyle(1,0,2);
delay(1000);
outtextxy(30,400,"PATH : A --> D");
}
else if((a6<=a0)&&(a6<=a5)&&(a6<=a1))
{
outtextxy(300,310,"The best path is: A --> E");
o=a6;
setcolor(GREEN);
settextstyle(1,0,2);
delay(1000);
outtextxy(30,400,"PATH : A --> E");
}
else
{
outtextxy(700,700,".");
}
getch();
delay(1000);
cleardevice();

if(o==a0)
{
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,5,"Now consider the best path from city B, we get");
outtextxy(30,28,"B --> C :");gotoxy(16,3);printf("%d",a8);
outtextxy(30,60,"B --> D :");gotoxy(16,5);printf("%d",a2);
outtextxy(30,90,"B --> E :");gotoxy(16,7);printf("%d",a7);
delay(800);
if((a8<=a2)&&(a8<=a7))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : C");
settextstyle(1,0,2);
outtextxy(20,130,"PATH : A --> B --> C");
o1=a8;
}
else if((a2<=a8)&&(a2<=a7))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : D");
settextstyle(1,0,2);
outtextxy(20,130,"PATH : A --> B --> D");
o1=a2;
}
else if((a7<=a8)&&(a7<=a2))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : E");
settextstyle(1,0,2);
outtextxy(20,130,"PATH : A --> B --> E");
o1=a7;
}
else
{
outtextxy(700,700,".");
}
getch();
}
delay(800);
if(o1==a8)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city C is:");
outtextxy(30,188,"C --> D :");gotoxy(16,13);printf("%d",a9);
outtextxy(30,220,"C --> E :");gotoxy(16,15);printf("%d",a4);
if(a9<=a4)
{
delay(800);
setcolor(GREEN);
outtextxy(300,200,"Best path is : D");
settextstyle(1,0,2);
outtextxy(20,250,"PATH : A --> B --> C --> D");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);
delay(800);
outtextxy(20,310,"PATH : A --> B --> C --> D --> E --> A");
temp=a0+a8+a9+a3+a6;
setcolor(RED);
delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a1);
gotoxy(24,25);printf("%d",a8);
gotoxy(39,25);printf("%d",a9);
gotoxy(53,25);printf("%d",a3);
gotoxy(67,25);printf("%d",a6);
outtextxy(20,385,"A");outtextxy(135,385,"B");outtextxy(250,385,"C");
outtextxy(365,385,"D");outtextxy(480,385,"E");outtextxy(595,385,"A");
setcolor(GREEN);
delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);
delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : E");
settextstyle(1,0,2);
delay(800);
outtextxy(20,250,"PATH : A --> B --> C --> E");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);
delay(800);
outtextxy(20,310,"PATH : A --> B --> C --> E --> D --> A");
temp=a0+a8+a4+a3+a5;
setcolor(RED);
delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a0);
gotoxy(24,25);printf("%d",a8);
gotoxy(39,25);printf("%d",a4);
gotoxy(53,25);printf("%d",a3);
gotoxy(67,25);printf("%d",a5);
outtextxy(20,385,"A");outtextxy(135,385,"B");outtextxy(250,385,"C");
outtextxy(365,385,"E");outtextxy(480,385,"D");outtextxy(595,385,"A");
setcolor(GREEN);delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}

if(o1==a2)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city D is:");
outtextxy(30,188,"D --> C :");gotoxy(16,13);printf("%d",a9);
outtextxy(30,220,"D --> E :");gotoxy(16,15);printf("%d",a3);
if(a9<=a3)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : C");
settextstyle(1,0,2);
delay(800);
outtextxy(20,250,"PATH : A --> B --> D --> C");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);
delay(800);
outtextxy(20,310,"PATH : A --> B --> D --> C --> E --> A");
temp=a0+a2+a9+a4+a6;
setcolor(RED);
delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a0);
gotoxy(24,25);printf("%d",a2);
gotoxy(39,25);printf("%d",a9);
gotoxy(53,25);printf("%d",a4);
gotoxy(67,25);printf("%d",a6);
outtextxy(20,385,"A");outtextxy(135,385,"B");outtextxy(250,385,"D");
outtextxy(365,385,"C");outtextxy(480,385,"E");outtextxy(595,385,"A");
setcolor(GREEN);
delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : E");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> B --> D --> E");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> B --> D --> E --> C --> A");
temp=a0+a2+a3+a4+a1;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a0);
gotoxy(24,25);printf("%d",a2);
gotoxy(39,25);printf("%d",a3);
gotoxy(53,25);printf("%d",a4);
gotoxy(67,25);printf("%d",a1);
outtextxy(20,385,"A");outtextxy(135,385,"B");outtextxy(250,385,"D");
outtextxy(365,385,"E");outtextxy(480,385,"C");outtextxy(595,385,"A");
setcolor(GREEN);    delay(800);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);    delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}

if(o1==a7)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city E is:");
outtextxy(30,188,"E --> D :");gotoxy(16,13);printf("%d",a3);
outtextxy(30,220,"E --> C :");gotoxy(16,15);printf("%d",a4);
if(a3<=a4)
{
setcolor(GREEN);    delay(800);
outtextxy(300,200,"Best path is : D");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> B --> E --> D");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> B --> E --> D --> C --> A");
temp=a0+a7+a3+a9+a1;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a0);
gotoxy(24,25);printf("%d",a7);
gotoxy(39,25);printf("%d",a3);
gotoxy(53,25);printf("%d",a9);
gotoxy(67,25);printf("%d",a1);
outtextxy(20,385,"A");outtextxy(135,385,"B");outtextxy(250,385,"E");
outtextxy(365,385,"D");outtextxy(480,385,"C");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);    delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : C");
settextstyle(1,0,2);       delay(800);
outtextxy(20,250,"PATH : A --> B --> E --> C");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);       delay(800);
outtextxy(20,310,"PATH : A --> B --> E --> C --> D --> A");
temp=a0+a7+a4+a9+a5;
setcolor(RED);             delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a0);
gotoxy(24,25);printf("%d",a7);
gotoxy(39,25);printf("%d",a4);
gotoxy(53,25);printf("%d",a9);
gotoxy(67,25);printf("%d",a5);
outtextxy(20,385,"A");outtextxy(135,385,"B");outtextxy(250,385,"E");
outtextxy(365,385,"C");outtextxy(480,385,"D");outtextxy(595,385,"A");
setcolor(GREEN);           delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);    delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else if(o==a1)
{
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,5,"Now consider the best path from city C, we get");
outtextxy(30,28,"C --> B :");gotoxy(16,3);printf("%d",a8);
outtextxy(30,60,"C --> D :");gotoxy(16,5);printf("%d",a9);
outtextxy(30,90,"C --> E :");gotoxy(16,7);printf("%d",a4);
if((a8<=a9)&&(a8<=a4))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : B");
settextstyle(1,0,2); delay(800);
outtextxy(20,130,"PATH : A --> C --> B");
o2=a8;
}
else if((a9<=a8)&&(a9<=a4))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : D");
settextstyle(1,0,2); delay(800);
outtextxy(20,130,"PATH : A --> C --> D");
o2=a9;
}
else if((a4<=a8)&&(a4<=a9))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : E");
settextstyle(1,0,2); delay(800);
outtextxy(20,130,"PATH : A --> C --> E");
o2=a4;
}
else
{
outtextxy(700,700,".");
}
getch();
}
if(o2==a8)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city B is:");
outtextxy(30,188,"B --> D :");gotoxy(16,13);printf("%d",a2);
outtextxy(30,220,"B --> E :");gotoxy(16,15);printf("%d",a7);
if(a2<=a7)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : D");
settextstyle(1,0,2); delay(800);
outtextxy(20,250,"PATH : A --> C --> B --> D");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2); delay(800);
outtextxy(20,310,"PATH : A --> C --> B --> D --> E --> A");
temp=a1+a8+a2+a3+a6;
setcolor(RED);       delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a1);
gotoxy(24,25);printf("%d",a8);
gotoxy(39,25);printf("%d",a2);
gotoxy(53,25);printf("%d",a3);
gotoxy(67,25);printf("%d",a6);
outtextxy(20,385,"A");outtextxy(135,385,"C");outtextxy(250,385,"B");
outtextxy(365,385,"D");outtextxy(480,385,"E");outtextxy(595,385,"A");
setcolor(GREEN);     delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);     delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : E");
settextstyle(1,0,2); delay(800);
outtextxy(20,250,"PATH : A --> C --> B --> E");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2); delay(800);
outtextxy(20,310,"PATH : A --> C --> B --> E --> D --> A");
temp=a1+a8+a7+a3+a5;
setcolor(RED);       delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a1);
gotoxy(24,25);printf("%d",a8);
gotoxy(39,25);printf("%d",a7);
gotoxy(53,25);printf("%d",a3);
gotoxy(67,25);printf("%d",a5);
outtextxy(20,385,"A");outtextxy(135,385,"C");outtextxy(250,385,"B");
outtextxy(365,385,"E");outtextxy(480,385,"D");outtextxy(595,385,"A");
setcolor(GREEN);     delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);   delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}

if (o2==a9)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city D is:");
outtextxy(30,188,"D --> B :");gotoxy(16,13);printf("%d",a2);
outtextxy(30,220,"D --> E :");gotoxy(16,15);printf("%d",a3);
if(a2<=a3)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : B");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> C --> D --> B");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> C --> D --> B --> E --> A");
temp=a1+a9+a2+a7+a6;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a1);
gotoxy(24,25);printf("%d",a9);
gotoxy(39,25);printf("%d",a2);
gotoxy(53,25);printf("%d",a7);
gotoxy(67,25);printf("%d",a6);
outtextxy(20,385,"A");outtextxy(135,385,"C");outtextxy(250,385,"D");
outtextxy(365,385,"B");outtextxy(480,385,"E");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);   delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : E");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> C --> D --> E");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> C --> D --> E --> B --> A");
temp=a1+a9+a3+a7+a0;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a1);
gotoxy(24,25);printf("%d",a9);
gotoxy(39,25);printf("%d",a3);
gotoxy(53,25);printf("%d",a7);
gotoxy(67,25);printf("%d",a0);
outtextxy(20,385,"A");outtextxy(135,385,"C");outtextxy(250,385,"D");
outtextxy(365,385,"E");outtextxy(480,385,"B");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);  delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}

if(o2==a4)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city E is:");
outtextxy(30,188,"E --> B :");gotoxy(16,13);printf("%d",a7);
outtextxy(30,220,"E --> D :");gotoxy(16,15);printf("%d",a3);
if(a7<=a3)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : B");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> C --> E --> B");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> C --> E --> B --> D --> A");
temp=a1+a4+a7+a2+a5;
setcolor(RED);    delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a1);
gotoxy(24,25);printf("%d",a4);
gotoxy(39,25);printf("%d",a7);
gotoxy(53,25);printf("%d",a2);
gotoxy(67,25);printf("%d",a5);
outtextxy(20,385,"A");outtextxy(135,385,"C");outtextxy(250,385,"E");
outtextxy(365,385,"B");outtextxy(480,385,"D");outtextxy(595,385,"A");
setcolor(GREEN);  delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);  delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : D");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> C --> E --> D");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> C --> E --> D --> B --> A");
temp=a1+a4+a3+a2+a0;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a1);
gotoxy(24,25);printf("%d",a4);
gotoxy(39,25);printf("%d",a3);
gotoxy(53,25);printf("%d",a2);
gotoxy(67,25);printf("%d",a0);
outtextxy(20,385,"A");outtextxy(135,385,"C");outtextxy(250,385,"E");
outtextxy(365,385,"D");outtextxy(480,385,"B");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE); delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else if(o==a5)
{
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,5,"Now consider the best path from city D, we get");
outtextxy(30,28,"D --> B :");gotoxy(16,3);printf("%d",a2);
outtextxy(30,60,"D --> C :");gotoxy(16,5);printf("%d",a9);
outtextxy(30,90,"D --> E :");gotoxy(16,7);printf("%d",a3);
if ((a2<=a9)&&(a2<=a3))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : B");
settextstyle(1,0,2);delay(800);
outtextxy(20,130,"PATH : A --> D --> B");
o3=a2;
}
else if((a9<=a2)&&(a9<=a3))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : C");
settextstyle(1,0,2);delay(800);
outtextxy(20,130,"PATH : A --> D --> C");
o3=a9;
}
else if((a3<=a2)&&(a3<=a9))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : E");
settextstyle(1,0,2);delay(800);
outtextxy(20,130,"PATH : A --> D --> E");
o3=a3;
}
else
{
outtextxy(700,700,".");
}
getch();
}

if(o3==a2)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city B is:");
outtextxy(30,188,"B --> C :");gotoxy(16,13);printf("%d",a8);
outtextxy(30,220,"B --> E :");gotoxy(16,15);printf("%d",a7);
if(a8<=a7)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : C");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> D --> B --> C");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> D --> B --> C --> E --> A");
temp=a5+a2+a8+a4+a6;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a5);
gotoxy(24,25);printf("%d",a2);
gotoxy(39,25);printf("%d",a8);
gotoxy(53,25);printf("%d",a4);
gotoxy(67,25);printf("%d",a6);
outtextxy(20,385,"A");outtextxy(135,385,"D");outtextxy(250,385,"B");
outtextxy(365,385,"C");outtextxy(480,385,"E");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);  delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : E");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> D --> B --> E");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> D --> B --> E --> C --> A");
temp=a5+a2+a7+a4+a1;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a5);
gotoxy(24,25);printf("%d",a2);
gotoxy(39,25);printf("%d",a7);
gotoxy(53,25);printf("%d",a4);
gotoxy(67,25);printf("%d",a1);
outtextxy(20,385,"A");outtextxy(135,385,"D");outtextxy(250,385,"B");
outtextxy(365,385,"E");outtextxy(480,385,"C");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);  delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}

if(o3==a9)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city C is:");
outtextxy(30,188,"C --> B :");gotoxy(16,13);printf("%d",a8);
outtextxy(30,220,"C --> E :");gotoxy(16,15);printf("%d",a4);
if(a8<=a4)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : B");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> D --> C --> B");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> D --> C --> B --> E --> A");
temp=a5+a9+a8+a7+a6;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a5);
gotoxy(24,25);printf("%d",a9);
gotoxy(39,25);printf("%d",a8);
gotoxy(53,25);printf("%d",a7);
gotoxy(67,25);printf("%d",a6);
outtextxy(20,385,"A");outtextxy(135,385,"D");outtextxy(250,385,"C");
outtextxy(365,385,"B");outtextxy(480,385,"E");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);    delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : E");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> D --> C --> E");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> D --> C --> E --> B --> A");
temp=a5+a9+a4+a7+a0;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a5);
gotoxy(24,25);printf("%d",a9);
gotoxy(39,25);printf("%d",a4);
gotoxy(53,25);printf("%d",a7);
gotoxy(67,25);printf("%d",a0);
outtextxy(20,385,"A");outtextxy(135,385,"D");outtextxy(250,385,"C");
outtextxy(365,385,"E");outtextxy(480,385,"B");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE); delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}

if(o3==a3)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city E is:");
outtextxy(30,188,"E --> B :");gotoxy(16,13);printf("%d",a7);
outtextxy(30,220,"E --> C :");gotoxy(16,15);printf("%d",a4);
if(a7<=a4)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : B");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> D --> E --> B");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> D --> E --> B --> C --> A");
temp=a5+a3+a7+a8+a1;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a5);
gotoxy(24,25);printf("%d",a3);
gotoxy(39,25);printf("%d",a7);
gotoxy(53,25);printf("%d",a8);
gotoxy(67,25);printf("%d",a1);
outtextxy(20,385,"A");outtextxy(135,385,"D");outtextxy(250,385,"E");
outtextxy(365,385,"B");outtextxy(480,385,"C");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE); delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : C");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> D --> E --> C");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> D --> E --> C --> B --> A");
temp=a5+a3+a4+a8+a0;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a5);
gotoxy(24,25);printf("%d",a3);
gotoxy(39,25);printf("%d",a4);
gotoxy(53,25);printf("%d",a8);
gotoxy(67,25);printf("%d",a0);
outtextxy(20,385,"A");outtextxy(135,385,"D");outtextxy(250,385,"E");
outtextxy(365,385,"C");outtextxy(480,385,"B");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);  delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else if(o==a6)
{
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,5,"Now consider the best path from city E, we get");
outtextxy(30,28,"E --> B :");gotoxy(16,3);printf("%d",a7);
outtextxy(30,60,"E --> C :");gotoxy(16,5);printf("%d",a4);
outtextxy(30,90,"E --> D :");gotoxy(16,7);printf("%d",a3);
if((a7<=a4)&&(a7<=a3))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : B");
settextstyle(1,0,2);  delay(800);
outtextxy(20,130,"PATH : A --> E --> B");
o4=a7;
}
else if((a4<=a7)&&(a4<=a3))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : C");
settextstyle(1,0,2);  delay(800);
outtextxy(20,130,"PATH : A --> E --> C");
o4=a4;
}
else if((a3<=a7)&&(a3<=a4))
{
setcolor(GREEN);
outtextxy(300,60,"Best path is : D");
settextstyle(1,0,2);  delay(800);
outtextxy(20,130,"PATH : A --> E --> D");
o4=a3;
}
else
{
outtextxy(700,700,".");
}
getch();
}

if(o4==a7)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city B is:");
outtextxy(30,188,"B --> C :");gotoxy(16,13);printf("%d",a8);
outtextxy(30,220,"B --> D :");gotoxy(16,15);printf("%d",a2);
if(a8<=a2)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : C");
settextstyle(1,0,2);  delay(800);
outtextxy(20,250,"PATH : A --> E --> B --> C");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);  delay(800);
outtextxy(20,310,"PATH : A --> E --> B --> C --> D --> A");
temp=a6+a7+a8+a3+a5;
setcolor(RED);        delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a6);
gotoxy(24,25);printf("%d",a7);
gotoxy(39,25);printf("%d",a8);
gotoxy(53,25);printf("%d",a3);
gotoxy(67,25);printf("%d",a5);
outtextxy(20,385,"A");outtextxy(135,385,"E");outtextxy(250,385,"B");
outtextxy(365,385,"C");outtextxy(480,385,"D");outtextxy(595,385,"A");
setcolor(GREEN);      delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE); delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : D");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> E --> B --> D");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> E --> B --> D --> C --> A");
temp=a6+a7+a2+a9+a1;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a6);
gotoxy(24,25);printf("%d",a7);
gotoxy(39,25);printf("%d",a2);
gotoxy(53,25);printf("%d",a9);
gotoxy(67,25);printf("%d",a1);
outtextxy(20,385,"A");outtextxy(135,385,"E");outtextxy(250,385,"B");
outtextxy(365,385,"D");outtextxy(480,385,"C");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);  delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}

if(o4==a4)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city C is:");
outtextxy(30,188,"C --> B :");gotoxy(16,13);printf("%d",a8);
outtextxy(30,220,"C --> D :");gotoxy(16,15);printf("%d",a9);
if(a8<=a9)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : B");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> E --> C --> B");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> E --> C --> B --> D --> A");
temp=a6+a4+a8+a2+a5;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a6);
gotoxy(24,25);printf("%d",a4);
gotoxy(39,25);printf("%d",a8);
gotoxy(53,25);printf("%d",a2);
gotoxy(67,25);printf("%d",a5);
outtextxy(20,385,"A");outtextxy(135,385,"E");outtextxy(250,385,"C");
outtextxy(365,385,"B");outtextxy(480,385,"D");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);   delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : D");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> E --> C --> D");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> E --> C --> D --> B --> A");
temp=a6+a4+a9+a2+a1;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a6);
gotoxy(24,25);printf("%d",a4);
gotoxy(39,25);printf("%d",a9);
gotoxy(53,25);printf("%d",a2);
gotoxy(67,25);printf("%d",a1);
outtextxy(20,385,"A");outtextxy(135,385,"E");outtextxy(250,385,"C");
outtextxy(365,385,"D");outtextxy(480,385,"B");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);    delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}
if(o4==a3)
{
settextstyle(2,0,6);
setcolor(YELLOW);
outtextxy(10,160,"Now the best path from city D is:");
outtextxy(30,188,"D --> B :");gotoxy(16,13);printf("%d",a2);
outtextxy(30,220,"D --> C :");gotoxy(16,15);printf("%d",a9);
if(a2<=a9)
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : B");
settextstyle(1,0,2);delay(800);
outtextxy(20,250,"PATH : A --> E --> D --> B");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(20,310,"PATH : A --> E --> D --> B --> C --> A");
temp=a6+a3+a2+a8+a1;
setcolor(RED);      delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a6);
gotoxy(24,25);printf("%d",a3);
gotoxy(39,25);printf("%d",a2);
gotoxy(53,25);printf("%d",a8);
gotoxy(67,25);printf("%d",a1);
outtextxy(20,385,"A");outtextxy(135,385,"E");outtextxy(250,385,"D");
outtextxy(365,385,"B");outtextxy(480,385,"C");outtextxy(595,385,"A");
setcolor(GREEN);    delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);   delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
else
{
setcolor(GREEN);
outtextxy(300,200,"Best path is : C");
settextstyle(1,0,2); delay(800);
outtextxy(20,250,"PATH : A --> E --> D --> C");
setcolor(YELLOW);
settextstyle(2,0,6);
outtextxy(10,280,"Now travel to the last city left and go back to the origin city A");
setcolor(GREEN);
settextstyle(1,0,2); delay(800);
outtextxy(20,310,"PATH : A --> E --> D --> C --> B --> A");
temp=a6+a3+a9+a8+a0;
setcolor(RED);       delay(800);
circle(25,400,23);circle(140,400,23);circle(255,400,23);
circle(370,400,23);circle(485,400,23);circle(600,400,23);
setcolor(WHITE);
gotoxy(9,25);printf("%d",a6);
gotoxy(24,25);printf("%d",a3);
gotoxy(39,25);printf("%d",a9);
gotoxy(53,25);printf("%d",a8);
gotoxy(67,25);printf("%d",a0);
outtextxy(20,385,"A");outtextxy(135,385,"E");outtextxy(250,385,"D");
outtextxy(365,385,"C");outtextxy(480,385,"B");outtextxy(595,385,"A");
setcolor(GREEN);     delay(300);
outtextxy(50,385,"---->");outtextxy(165,385,"---->");
outtextxy(280,385,"---->");outtextxy(395,385,"---->");
outtextxy(510,385,"---->");
setcolor(WHITE);    delay(800);
outtextxy(200,440,"Minimum Cost : ");
gotoxy(10,25);printf("\n\n\n\n	             		              %d",temp);
outtextxy(200,440,"Minimum Cost : ");
getch();
}
}
else
{
outtextxy(900,900,".");
}
}
