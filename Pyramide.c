
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include "ok.h"

void Afficher_PyramideC(int C[6])

{   int left, top, right, bottom;
    left = getmaxx() / 2 - 400;
    top = getmaxy() / 2 - 200;
    right = getmaxx() / 2 + 400;
    bottom = getmaxy() / 2 + 200;



    int i=0,j,P=50;

//readimagefile("echiquier_3ee.jpg",left,top-70,left+300,top-20);
 //  readimagefile("echiquier_3e.jpg",left,top-70);
  rectangle(left,top-70,left+300,top-20) ;
  for(i= left; i<=left+300; i+=50)
    {


            line(i, top-70, i, top-20);


    }



    for (j=0;j<7;j++)
    {



            switch(C[j])
            {
                case 1:

                    cercle1(getmaxx()/2 - 8*P+P/2,getmaxy() / 2 - 200-45);
                    settextstyle(2,VERT_DIR,4);
                        outtextxy(getmaxx()/2 - 8*P+P/2,getmaxy() / 2 - 200-45,"1");
                        setfillstyle(SOLID_FILL,COLOR(164,0,28));
                        floodfill(getmaxx()/2 - 8*P+P/2,getmaxy() / 2 - 200-45,WHITE);


                break;


                case 4 :


                    cercle1(getmaxx()/2 - 8*P+P/2+50,getmaxy() / 2 - 200-45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx()/2 - 8*P+P/2+50,getmaxy() / 2 - 200-45,"4");
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+50,getmaxy() / 2 - 200-45,WHITE);

                    break;

                case 9:
                    triangle1(getmaxx()/2 - 8*P+P/2+100,getmaxy() / 2 - 200-45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx()/2 - 8*P+P/2+95,getmaxy() / 2 - 200-50,"9");
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+100,getmaxy() / 2 - 200-45,WHITE);
                    break;

                case 16 :

                    triangle1(getmaxx()/2 - 8*P+P/2+150,getmaxy() / 2 - 200-45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx()/2 - 8*P+P/2+145,getmaxy() / 2 - 200-50,"16");
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+150,getmaxy() / 2 - 200-50,WHITE);
                    break;


                case 25:



                    carre1(getmaxx()/2 - 8*P+P/2+200,getmaxy() / 2 - 200-45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx()/2 - 8*P+P/2+200,getmaxy() / 2 - 200-45,"25");
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+200,getmaxy() / 2 - 200-45,WHITE);
                    break;

                case 36:


                    carre1(getmaxx()/2 - 8*P+P/2+250,getmaxy() / 2 - 200-45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx()/2 - 8*P+P/2+250,getmaxy() / 2 - 200-45,"36");
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+250,getmaxy() / 2 - 200-45,WHITE);
                    break;
            }

            }
}


void Afficher_PyramideD(int D[5])

{   int left, top, right, bottom;

    left = getmaxx() / 2 - 400;
    top = getmaxy() / 2 - 200;
    right = getmaxx() / 2 + 400;
    bottom = getmaxy() / 2 + 200;



    int i,j;


 rectangle(right-250,bottom+20,right,bottom+70) ;
  for(i= right-250; i<=right; i+=50)
    {


            line(i, bottom+70, i, bottom+20);


    }



    for (j=0;j<7;j++)
    {




            switch(D[j])
            {
                case 16:

                    cercle2(getmaxx() / 2 + 400-225,getmaxy() / 2 + 200+45);
                    settextstyle(2,VERT_DIR,4);
                        outtextxy(getmaxx() / 2 + 400-225,getmaxy() / 2 + 200+45,"16");
                        setfillstyle(SOLID_FILL,COLOR(79,79,79));
                        floodfill(getmaxx() / 2 + 400-225,getmaxy() / 2 + 200+45,WHITE);
                        blocage_cercle1(A,B,i,j);


                break;
                case 25 :

                    triangle2(getmaxx() / 2 + 400-175,getmaxy() / 2 + 200+45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx() / 2 + 400-170,getmaxy() / 2 + 200+45,"25");
                    setfillstyle(SOLID_FILL,COLOR(79,79,79));
                    floodfill(getmaxx() / 2 + 400-170,getmaxy() / 2 + 200+50,WHITE);


                    break;

                case 36:

                    triangle2(getmaxx() / 2 + 400-125,getmaxy() / 2 + 200+45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx() / 2 + 400-120,getmaxy() / 2 + 200+45,"36");
                    setfillstyle(SOLID_FILL,COLOR(79,79,79));
                    floodfill(getmaxx() / 2 + 400-120,getmaxy() / 2 + 200+45,WHITE);
                    break;

                case 49 :

                    carre2(getmaxx() / 2 + 400-75,getmaxy() / 2 + 200+45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx() / 2 + 400-75,getmaxy() / 2 + 200+45,"49");
                    setfillstyle(SOLID_FILL,COLOR(79,79,79));
                    floodfill(getmaxx() / 2 + 400-75,getmaxy() / 2 + 200+45,WHITE);
                    break;


                case 64:



                    carre2(getmaxx() / 2 + 400-25,getmaxy() / 2 + 200+45);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx() / 2 + 400-25,getmaxy() / 2 + 200+45,"64");
                    setfillstyle(SOLID_FILL,COLOR(79,79,79));
                    floodfill(getmaxx() / 2 + 400-25,getmaxy() / 2 + 200+45,WHITE);
                    break;




            }
    }

}




