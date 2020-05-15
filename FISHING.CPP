#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int a=0,b=0,c=0,d=0,e=0,f=0;
int g,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0;
int p=0,q=0,r=0,s=0,t=0,u=0;
void man();
void land();
void sea();
void fish();
void thrd();
void stick();
void fish2();
void fish3();


void main()
{


int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");


land();
sea();
man();
stick();
thrd();


delay(2000);
b=0;
//thrd down
for(g=0;g<17;g++)
{
thrd();
delay(100);
cleardevice();
sea();
man();
stick();
land();

b=b+3;
}

thrd();
delay(1000);
fish();

h=0;
//fish move
for(g=0;g<53;g++)
{
fish();
delay(100);
cleardevice();
sea();
man();
land();
stick();
thrd();
h=h+5;
}
fish();

//fish with thrd down
for(g=0;g<17;g++)
{
thrd();
fish();
delay(100);
cleardevice();
sea();
land();
man();
stick();
b=b+1;
i=i+1;
}
fish();
thrd();


fish2();
delay(100);
//thrd fish2 up
for(g=0;g<30;g++)
{
thrd();
fish2();
delay(50);
cleardevice();
land();
man();
sea();
stick();
b=b-3;
j=j+3;
}

thrd();
fish2();

for(g=0;g<18;g++)
{
stick();
fish2();
thrd();
delay(100);
cleardevice();
land();
man();
sea();
k=k+4;
n=n+4;
l=l+4;
m=m+2;
o=o+2;
}
stick();
fish2();
thrd();
delay(200);

cleardevice();
fish3();
stick();
thrd();
sea();
man();
land();

// up and down
for(u=0;u<10;u++)
{
//tail up
for(g=0;g<5;g++)
{
fish3();
delay(50);
cleardevice();
land();
sea();
man();
thrd();
stick();
r=r+2;
s=s+2;
t=t+2;
}
fish3();
delay(100);
//tail down
for(g=0;g<10;g++)
{
fish3();
delay(50);
cleardevice();
land();
sea();
man();
stick();
thrd();
r=r-1;
s=s-1;
t=t-1;
}
fish3();
}
fish3();
getch();

}


void land()
{
//land
line(0,400,300,400);
line(300,400,300,470);
rectangle(150,377,190,400);

}
void sea()
{
//sea
d=0;
for(c=0;c<4;c++)
{
e=0;
for(a=0;a<10;a++)
{
ellipse(310+e,410+d,0,180,10,2);
ellipse(330+e,410+d,180,360,10,2);
e=e+40;
}
d=d+20;
}


}

void man()
{
//man
circle(170,300,10);
circle(174,297,1);
line(174,303,180,303);
line(168,310,168,317);
line(172,310,172,317);
rectangle(164,317,176,340);
//leg
line(164,340,166,370);
line(176,340,172,370);
rectangle(166,370,175,375);
floodfill(167,371,WHITE);
line(175,370,178,375);
//hand
line(170,325,178,335);
line(172,322,178,330);
line(178,335,188,330);
line(178,330,185,328);
rectangle(186,328,190,332);

}
void fish()
{
//fish
ellipse(620-h,440+i,0,360,10,4);
rectangle(610-h,440+i,616-h,440+i);
line(638-h,435+i,638-h,445+i);
line(638-h,435+i,630-h,440+i);
line(638-h,445+i,630-h,440+i);

}
void stick()
{
//stick
line(190,328,340-l,250-m);
line(190,330,340-l,252-m);
circle(341-l,252-m,5);

}

void thrd()
{

//thrd
line(346-n,254-o,346-n,390+b);
circle(346-n,350+b,4);
circle(346-n,390+b,2);
rectangle(342-n,390+b,350-n,392+b);

}
void fish2()
{
ellipse(347-k,467-j,0,360,4,10);
line(342-k,484-j,353-k,484-j);
line(342-k,484-j,347-k,477-j);
line(353-k,484-j,347-k,477-j);
line(347-k,457-j,347-k,463-j);

}
void fish3()
{
//fish
p=34;
q=5;
ellipse(240+p,390+q,0,360,10,4);
rectangle(232+p,390+q,236+p,390+q);
line(258+p-r,385+q-t,258+p-s,394+q-t);
line(258+p-r,385+q-t,250+p,390+q);
line(258+p-s,394+q-t,250+p,390+q);

}