#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midxf, midyf,midxb,midyb;
   int midxn,midyn;
   int lefth,toph,righth,bottomh,xmaxh,ymaxh;
   int leftb,topb,rightb,bottomb;
   int left1,top1,right1,bottom1;
   int left2,top2,right2,bottom2;



   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midxn = getmaxx() / 2;
   midyn = getmaxy() / 4;

   midxf = getmaxx() / 2;
   midyf = getmaxy() / 4;

    midxb = getmaxx() / 2;
   midyb = getmaxy() / 2;


   leftb = getmaxx() / 2 - 25;
   topb = getmaxy() / 2 - 75;
   rightb = getmaxx() / 2+25;
   bottomb = getmaxy() / 2+75;


   left1 = getmaxx() / 2 - 5;
   top1 = getmaxy() / 2 - 7;
   right1= getmaxx() / 2+5;
   bottom1 = getmaxy() / 2+7;

   left2 = getmaxx() / 2 - 5;
   top2 = getmaxy() / 2 - 7;
   right2 = getmaxx() / 2+5;
   bottom2 = getmaxy() / 2+7;
   setcolor(getmaxcolor());

   /* draw the face */
   ellipse(midxf, midyf,0,360,25,25);

   /*draw eye*/
   setcolor(LIGHTCYAN);
   circle(310,110,3);
   setfillstyle(SOLID_FILL,LIGHTCYAN);
   floodfill(310,110,LIGHTCYAN);
   circle(327,110,3);
   setfillstyle(SOLID_FILL,LIGHTCYAN);
   floodfill(327,110,LIGHTCYAN);

   /*draw nose*/
   setcolor(RED);
   setfillstyle(EMPTY_FILL,getmaxcolor());
   pieslice(midxn,midyn,230,315,7);
   setfillstyle(SOLID_FILL,RED);
   floodfill(midxn,midyn,RED);

   /*draw mouth*/
   setcolor(YELLOW);
   arc(319,123,230,315,15);

   /*draw body*/
   setcolor(BROWN);
   rectangle(leftb,topb,rightb,bottomb);

   /*draw hands*/
   setcolor(LIGHTGREEN);
   line(375,215,345,165);
   line(264,215,294,165);
   line(375,215,390,180);
   line(264,215,249,180);

   /*draw hat*/
   line(midxf-26,midyf-2,midxf,midyf-55);
   line(midxf+26,midyf-2,midxf,midyf-55);
   setcolor(RED);
   {
   circle(midxf,midyf-61,7);
   setfillstyle(SOLID_FILL,RED);
   floodfill(midxf,midyf-61,RED);
   }

   /*draw neck*/
   setcolor(LIGHTGREEN);
   line(325,143,325,163);
   line(313,143,313,163);

   /*draw legs*/
   setcolor(LIGHTGREEN);
   line(332,315,332,415);
   line(308,315,308,415);

   /*draw foot*/
   setcolor(LIGHTBLUE);
   rectangle(left1-16,top1+175,right1-16,bottom1+175);
   rectangle(left2+18,top2+175,right2+18,bottom2+175);

   /*draw buttons*/
   circle(midxb,midyb,3);
   circle(midxb,midyb-40,3);
   circle(midxb,midyb+40,3);

   /*code for balls*/
   setcolor(MAGENTA);
   circle(397,170,10);
   setfillstyle(SOLID_FILL,MAGENTA);
   floodfill(397,170,MAGENTA);
   setcolor(CYAN);
   circle(242,170,10);
   setfillstyle(SOLID_FILL,CYAN);
   floodfill(242,170,CYAN);
   setcolor(YELLOW);
   circle(347,50,10);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(347,50,YELLOW);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
