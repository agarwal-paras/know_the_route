#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>


int m[68][68],path[68][68];
struct graph
{
  int x;
  char c[2];
}map[68][68];

void welcome()
{
   setbkcolor(BLUE);
   setcolor(BLACK);
   setlinestyle(8,0,5);
   outtextxy(270,75,"WELCOME");
   delay(500);
   outtextxy(290,125,"TO");
   delay(500);
   outtextxy(130,175,"ALGORITHMS AND PROBLEM SOLVING LAB PROJECT-15B17CI471");
   delay(500);
   outtextxy(255,225,"PRESENTATION");
   delay(2000);
   cleardevice();

   setbkcolor(BLACK);
   setcolor(RED);
   setlinestyle(8,0,5);
   outtextxy(10,75,"TOPIC NAME :");
   delay(500);
   outtextxy(400,75,"FIND YOUR WAY!");
   delay(500);
   setlinestyle(6,0,3);
   setcolor(GREEN);
   outtextxy(10,275,"SUBMITTED TO:");
   delay(500);
   outtextxy(10,295,"Dr. NEERAJ JAIN");
   outtextxy(10,315,"Mr. RAJU PAL");
   setcolor(BLUE);
   delay(1000);
   outtextxy(250,275,"SUBMITTED BY:");
   delay(500);
   setlinestyle(6,0,3);
   outtextxy(250,295,"PARAS AGARWAL \t          (9917103162)");
   delay(500);
   outtextxy(250,320,"DHIRAJ KUMAR WADHWA\t   (9917103154)");
   delay(500);
   outtextxy(250,345,"SHUBHAM DUBEY\t           (9917103147)");
   delay(500);
   delay(1000);
   cleardevice();
   setbkcolor(RED);
   setcolor(BLACK);
   setlinestyle(6,0,5);
   delay(200);
   outtextxy(250,10,"DESCRIPTION");
   setlinestyle(8,0,3);
   outtextxy(150,60,"The JIIT Navigator is just a mini version of");
   outtextxy(150,90,"google maps.The diffrence is just the area");
   outtextxy(150,120,"covered by both of them.The user just need");
   outtextxy(150,150,"to enter his location and his destination in");
   outtextxy(150,180,"the college.The navigator will tell shortest ");
   outtextxy(150,210,"path in the college to his destination.");
   setcolor(WHITE);
   line(270,380,300,320);
   line(270,380,300,350);
   line(300,320,330,380);
   line(300,350,330,380);
   floodfill(300,350,2);

   delay(1000);
}

void instruction()
{
  cleardevice();
  setbkcolor(GREEN);
  setcolor(RED);
  setlinestyle(8,0,5);
  outtextxy(250,75,"NEXT PAGE");
  delay(500);
  outtextxy(250,150,"SHOWS");
  delay(500);
  outtextxy(250,225,"THE COMPLETE");
  delay(500); 
  outtextxy(250,300,"MAP OF JIIT 128");
  delay(1000);
}
void map1()
{
   cleardevice();
   setlinestyle(8,0,5);
   outtextxy(150,225,"GROUND FLOOR");
   delay(1000);
   cleardevice();
   //--------------//
   line(10,10,260,10);
   line(340,10,625,10);
   setlinestyle(11,1,1);
   outtextxy(265,25,"TO GROUND");
   line(260,10,260,0);
   line(340,10,340,0);
   //--------------//
   line(10,10,10,200);
   line(10,200,0,200);
   line(10,250,10,400);
   line(0,250,10,250);
   line(0,400,10,400);
   setlinestyle(11,0,1);
   outtextxy(0,220,"<-TO STAIRS");
   line(10,430,10,460);
   outtextxy(2,260,"T");
   outtextxy(2,285,"E");
   outtextxy(0,310,"M");
   outtextxy(2,335,"P");
   outtextxy(2,355,"L");
   outtextxy(2,380,"E");
   line(10,430,0,430);
   outtextxy(0,410,"<-TO WASH ROOM");
   //--------------//
  line(10,460,180,460);
  line(220,460,340,460);
  line(390,460,500,460);
  line(540,460,625,460);

  line(180,460,180,500);
  line(220,460,220,500);
  setlinestyle(11,0,1);
  outtextxy(160,435,"FACULTY E.");
  line(340,460,340,500);
  outtextxy(340,430,"MAIN E.");
  line(390,460,390,500);
  line(500,460,500,500);
  outtextxy(490,430,"EXIT" );
  line(540,460,540,500);
  //------------//
  line(260,10,260,100);
  line(260,100,200,100);
  setlinestyle(11,0,1);
  outtextxy(202,60,"PHY LAB");
  line(200,100,200,10);
  outtextxy(85,40,"CL-1");
  line(50,10,50,120);
  line(10,120,50,120);
  outtextxy(160,40,"CL-2");
  line(50,70,200,70);

  line(150,10,150,70);
  line(50,460,50,430);
  line(50,430,150,430);
  line(150,460,150,430);

  line(325,460,325,430);
  line(250,430,250,460);
  line(250,430,325,430);

  line(400,430,475,430);
  line(400,430,400,460);
  line(475,430,475,460);

  line(625,10,625,200);
  line(625,460,625,250);

  line(540,460,540,430);
  line(540,430,625,430);


  line(350,10,350,100);
  line(450,10,450,100);
  line(500,10,500,100);
  line(600,10,600,100);
  line(625,10,625,100);
  line(350,100,450,100);
  line(600,100,500,100);
  line(600,100,625,100);
  outtextxy(360,40,"ANAPURNA");
  outtextxy(15,50,"VLSI");
  outtextxy(520,45,"CAFE-1");
  outtextxy(605,40,"WC");
  outtextxy(100,440,"MPH");
  outtextxy(255,440,"REGISTRY");
  outtextxy(550,440,"CAFE-2");
  outtextxy(550,230,"TO STAIRS->");
  outtextxy(410,440,"LIBRARY");
  setlinestyle(11,1,1);
  outtextxy(160,405,"<-STAIRS");
  outtextxy(490,405,"<-STAIRS");
   delay(2000);
}

void map2()
{
   cleardevice();
   setlinestyle(8,0,5);
   outtextxy(200,225,"FLOOR 1A");
   delay(1000);
   cleardevice();
   setlinestyle(11,0,1);
   rectangle(50,125,10,10);
   rectangle(50,175,10,10);
   rectangle(50,225,10,10);
   line(10,325,50,325);
   line(10,350,50,350);
   line(10,225,10,325);
   line(0,400,10,400);
   line(0,460,250,460);
   line(10,350,10,400);

   line(250,400,250,460);
   line(275,400,275,460);
   line(275,460,350,460);
   line(350,460,350,325);
   line(450,325,450,460);
   line(450,325,625,325);
   line(625,325,625,460);

    line(175,10,175,0);
    line(200,10,200,0);
    rectangle(275,50,200,10);
    rectangle(350,50,275,10);
    rectangle(150,125,100,75);
    rectangle(300,125,250,75);
    rectangle(350,125,300,75);
    line(350,125,350,250);
    rectangle(100,50,50,10);
    rectangle(175,50,100,10);

   line(250,325,350,325);
   line(250,250,350,250);
   line(450,10,450,250);
   line(625,10,625,250);
   line(450,250,625,250);
   line(450,150,625,150);
   line(150,125,250,125);
   line(275,400,350,400);
   outtextxy(60,20,"TR-1");
   outtextxy(120,20,"LT-2");
   outtextxy(220,20,"LT-1");
   outtextxy(300,20,"CL-4");
   outtextxy(15,130,"CR-2");
   outtextxy(15,180,"CR-1");
   outtextxy(30,335,"<-TO STAIRS");
   outtextxy(115,90,"TR-2");
   outtextxy(265,90,"TR-3");
   outtextxy(305,90,"CABIN");
   outtextxy(520,200,"CABIN");
   outtextxy(500,280,"TO BLOCK B->");
   outtextxy(260,280,"TO STAIRS->");
   outtextxy(350,450,"FACULTY BLOCK");
   outtextxy(300,450,"LIFT");
   setlinestyle(11,1,0);
   outtextxy(260,390,"<-TO STAIRS");
   delay(2000);

}

void map3()
{
  cleardevice();
  setlinestyle(8,0,5);
  outtextxy(200,225,"FLOOR 2A");
  delay(1000);
  cleardevice();
  setlinestyle(11,0,1);
  rectangle(50,125,10,10);
  rectangle(50,175,10,10);
  rectangle(50,225,10,10);
  line(10,325,50,325);
  line(10,350,50,350);
  line(10,225,10,325);
  line(0,400,10,400);
  line(0,460,250,460);
  line(10,350,10,400);

  line(250,400,250,460);
  line(275,400,275,460);
  line(275,460,350,460);
  line(350,460,350,325);
  line(450,325,450,460);
  line(450,325,625,325);
  line(625,325,625,460);

  line(175,10,175,0);
  line(200,10,200,0);
  rectangle(275,50,200,10);
  rectangle(350,50,275,10);
  rectangle(150,125,100,75);
  rectangle(300,125,250,75);
  rectangle(350,125,300,75);
  line(350,125,350,250);
  rectangle(100,50,50,10);
  rectangle(175,50,100,10);

  line(250,325,350,325);
  line(250,250,350,250);
  line(450,10,450,250);
  line(625,10,625,250);
  line(450,250,625,250);
  line(450,150,625,150);
  line(150,125,250,125);
  line(275,400,350,400);
  outtextxy(60,20,"ADE");
  outtextxy(60,30,"LAB");
  outtextxy(120,20,"CR-4");
  outtextxy(220,20,"CR-5");
  outtextxy(300,20,"CR-6");
  outtextxy(17,130,"HRS");
  outtextxy(17,150,"CS");
  outtextxy(17,200,"CR-3");
  outtextxy(30,335,"<-TO STAIRS");
  outtextxy(115,100,"TR-4");
  outtextxy(265,100,"TR-5");
  outtextxy(310,100,"CABIN");
  outtextxy(520,200,"BEDC LAB");
  outtextxy(500,280,"TO BLOCK B->");
  outtextxy(300,280,"TO STAIRS");
  outtextxy(350,450,"FACULTY BLOCK");
  outtextxy(300,450,"LIFT");
  outtextxy(8,425,"TO WC");
  setlinestyle(11,1,0);
  outtextxy(260,370,"<-TO STAIRS");
  delay(2000);
}

void map3b()
{
   cleardevice();
   setlinestyle(8,0,5);
   outtextxy(200,225,"FLOOR 1B");
   delay(1000);
   cleardevice();
   setlinestyle(11,0,1);
   outtextxy(20,55,"COM. LAB");
   rectangle(100,100,10,10);   //(c lab)
   outtextxy(125,55,"DSP LAB");
   rectangle(200,100,100,10);  //(dsp lab)
   line(300,10,200,10);
   outtextxy(325,55,"TUT 10");
   rectangle(300,10,400,100);  //(tut 10)
   outtextxy(425,55,"TUT 11");
   rectangle(400,10,500,100);  //tut 11
   outtextxy(520,100,"CIC LAB");
   rectangle(500,10,600,200);   //cir lab
   outtextxy(520,250,"PRO. LAB2");
   rectangle(500,200,600,300);  //pro lab(ece)
   line(500,300,650,300);
   outtextxy(605,275,"WR");
   rectangle(600,300,630,250);  //wc


   outtextxy(125,170,"PRO LAB1");
   rectangle(100,150,200,200);  //pro lab 1
   line(10,10,10,350);
   setlinestyle(11,1,2);
   outtextxy(20,280,"ECE");
   outtextxy(20,320,"LAB");
   rectangle(10,250,50,350);    //ece lab
   line(100,200,100,350);
   outtextxy(100,390,"<-FACULTY B");
   setlinestyle(11,0,0);
   outtextxy(10,370,"<- WAY TO BLOCK A");
   line(10,400,100,400);       // way to block a
   line(100,400,100,470);
   line(150,400,150,470);
   outtextxy(240,370,"<-STAIRS");
   line(150,400,250,400);      //starirs
   line(100,350,250,350);
   line(200,200,300,200);
   outtextxy(325,175,"VLSI LAB");
   rectangle(300,200,400,150); //vsli lab
   line(400,200,400,350);
   line(400,350,500,350);
   line(500,350,500,375);
   line(630,350,550,350);       //starirs
   line(550,350,550,375);
   outtextxy(500,400,"LT(8,7)");
   outtextxy(500,425,"CL(3,4)");
   rectangle(400,375,600,475);  //lt's

}
void map2b()
{
 cleardevice();
 setlinestyle(8,0,5);
 outtextxy(200,225,"FLOOR 2B");
 delay(1000);
 cleardevice();
 setlinestyle(11,0,1);
 outtextxy(20,55,"COM. LAB");
 rectangle(100,100,10,10);   //(c lab)
 outtextxy(125,55,"DSP LAB");
 rectangle(200,100,100,10);  //(dsp lab)
 line(300,10,200,10);
 outtextxy(325,55,"TUT 10");
 rectangle(300,10,400,100);  //(tut 10)
 outtextxy(425,55,"TUT 11");
 rectangle(400,10,500,100);  //tut 11
 outtextxy(520,100,"CIC LAB");
 rectangle(500,10,600,200);   //cir lab
 outtextxy(520,250,"PRO. LAB2");
 rectangle(500,200,600,300);  //pro lab(ece)
 line(500,300,650,300);
 outtextxy(605,275,"WR");
 rectangle(600,300,630,250);  //wc


 outtextxy(125,170,"PRO LAB1");
 rectangle(100,150,200,200);  //pro lab 1
 line(10,10,10,350);
 setlinestyle(11,1,2);
 outtextxy(20,280,"ECE");
 outtextxy(20,320,"LAB");
 rectangle(10,250,50,350);    //ece lab
 line(100,200,100,350);
 outtextxy(100,390,"<-FACULTY B");
 setlinestyle(11,0,0);
 outtextxy(10,370,"<- WAY TO BLOCK A");
 line(10,400,100,400);       // way to block a
 line(100,400,100,470);
 line(150,400,150,470);
 outtextxy(200,370,"STAIRS->");
 line(150,400,250,400);      //starirs
 line(100,350,250,350);
 line(200,200,300,200);
 outtextxy(325,175,"VLSI LAB");
 rectangle(300,200,400,150); //vsli lab
 line(400,200,400,350);
 line(400,350,500,350);
 line(500,350,500,375);
 line(630,350,550,350);       //starirs
 line(550,350,550,375);
 outtextxy(500,400,"LT(3,4)");
 outtextxy(500,425,"LT(5,6)");
 rectangle(400,375,600,475);  //lt's
}

void mapprint()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
   
   setcolor(RED);
   welcome();
   getch();
   instruction();
   getch();
   map1();
   getch();
   map2();
   getch();
   map3b();
   getch();
   map3();
   getch();
   map2b();
   getch();
   cleardevice();
}
void warshall()
{
 int i,j,k;
 for(k=0;k<68;k++)
 {
  for(i=0;i<68;i++)
  {
   for(j=0;j<68;j++)
   {
    if(m[i][j]>(m[i][k]+m[k][j]))
    {
     m[i][j]=m[i][k]+m[k][j];
     path[i][j]=path[k][j];
    }
   }
  }
 }
}
int main()
{

   FILE *q;
   int i,j,t,n=0,p[68],k;
   char d[2],r[50],c[2];
   mapprint();
   cleardevice();
   setbkcolor(GREEN);
   q=fopen("Matrix.txt","r");
   for(i=0;i<68;i++)
   {
    for(j=0;j<68;j++)
    {
     if(i==j)
     map[i][j].x=1;
     else
     map[i][j].x=0;

     map[i][j].c[0]='X';
    }
   }

   while(fscanf(q,"%d%d%s",&i,&j,d)==3)
   {
    map[i][j].x=1;
    map[i][j].c[0]=d[0];
   }
   fclose(q);
   cleardevice();
   setbkcolor(BLUE);
   outtextxy(0,0," ");
   for(i=0;i<68;i++)
   {
    for(j=0;j<68;j++)
    {
     if(map[i][j].x==0) 
     m[i][j]=100;
     else
     m[i][j]=map[i][j].x;
     if(m[i][j]==1)
     path[i][j]=i;
     else
     path[i][j]=-1;
    }
   }
   warshall();
   c[0]='y';
   do
   {
     
     cleardevice();
     q=fopen("Rooms.txt","r");
     printf("The list of all rooms:\n");
     while(fscanf(q, "%d%s", &n, r)==2)
     {
      printf("%d. %s\n\n",n,r);
     }
   
     fclose(q);
     getch();
     cleardevice();
     setbkcolor(BLUE);
     printf("Enter your current location and your destination number:\n");
     scanf("%d%d",&t,&n);
     cleardevice();
     setbkcolor(RED);
     printf("Start->\n");
     p[0]=n;
     k=1;
     i=t;
     j=n;
     while(path[i][j]!=i)
     {
      if((path[i][j]==-1)||(i<0 || j<0)||(i>67||j>67))
      {
       k=70;
       printf("No path exists\n");
       break;
      }
      else
      {
       p[k]=path[i][j];
       k++;
       j=path[i][j];
      }
     }
     if(k!=70)
     { 
      k--;
      while(k>=0)
      { 
       q=fopen("Rooms.txt","r");
       while(fscanf(q,"%d%s",&t,r)==2)
       {
        if(p[k]==t)
        break;
       }
       if(map[i][p[k]].c[0]=='L')
       printf("Move Left to %s\n",r);
       else if(map[i][p[k]].c[0]=='R')
       printf("Move Right to %s\n",r);
       else if(map[i][p[k]].c[0]=='F')
       printf("Move Front to %s\n",r);
       fclose(q);
       i=p[k];
       getch();
       k--;
      }
    }
     if(t>0 && n>0 && t<68 && n<68)
     printf("You have reached your destination\n");
     else 
     printf("Enter the valid location to search\n");
     getch();
     cleardevice();
     setbkcolor(8);
     printf("Does your friend also want to find path to his destination(y/n)??\n");
     scanf("%s",c);
     }
     while(c[0]=='y');
     cleardevice();
     closegraph();
     return 0;    
}