#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include"ok.h"

void board()

{   int C[6],D[5];
  cleardevice();
   setcolor(RGB(255,255,255));
    setlinestyle(0,1,1);
    readimagefile("deye.jpg",0,0,getmaxx(),getmaxy());

    readimagefile ("echiquier_3e.jpg",getmaxx() / 2 - 400,getmaxy() / 2 - 200,getmaxx() / 2 + 400,getmaxy() / 2 + 200);
    int left, top, right, bottom;
    int gauche, haut, droite, bas;
    int i,j;
    readimagefile ("echiquier_3e.jpg",getmaxx() / 2 - 400,getmaxy() / 2 - 200,getmaxx() / 2 + 400,getmaxy() / 2 + 200);
    //readimagefile ("GEDC0339.jpg",0,0,getmaxwidth(),getmaxheight());
    left = getmaxx() / 2 - 400;
    top = getmaxy() / 2 - 200;
    right = getmaxx() / 2 + 400;
    bottom = getmaxy() / 2 + 200;
    rectangle(left, top, right, bottom); //rect. int
      rectangle(left,top-140,left+80,top-20);
      //kas1
          settextstyle(1,HORIZ_DIR,2);

      outtextxy(left+85,top-110,"Joueur 1");
            outtextxy(right-200,top-60,"Joueur 2");

      readimagefile("kas1.jpg",left,top-140,left+80,top-20);
      //kas2
      readimagefile("kas2.jpg",right-80,top-140,right,top-20);
                 //settextstyle(0,HORIZ_DIR,0);
      readimagefile("feu10.jpg",getmaxx()-250,getmaxy()-200,getmaxx()-100,getmaxy()-50);





    gauche = getmaxx() / 2 - 410;
    haut = getmaxy() / 2 - 210;
    droite = getmaxx() / 2 + 410;
    bas = getmaxy() / 2 + 210;
    rectangle(gauche, haut, droite, bas); //rect. ext

    line(gauche, haut, left, top);
    line(gauche, bas, left, bottom);
    line(droite, haut, right, top);
    line(droite, bas, right, bottom); // traits reliant rect ext. & int.



    for(i= left; i<= right; i+=50)
    {
        for(j= top; j<= bottom; j+=50)
        {
            line(i, top, i, bottom);
            line(left, j, right, j);
        }
    }










    // pour quadriller le board

    /*for(i= left+1; i<= right; i+=100)
    {
        for(j= top+1; j<= bottom; j+=100)
        {
            setfillstyle(SOLID_FILL,COLOR(128,64,0));
            floodfill(i,j,WHITE);
            setfillstyle(SOLID_FILL,COLOR(0,128,64));
            floodfill(i+50,j,WHITE);

            setfillstyle(SOLID_FILL,COLOR(128,64,0));
            floodfill(i+50,j+50,WHITE);
            setfillstyle(SOLID_FILL,COLOR(0,128,64));
            floodfill(i,j+50,WHITE);
        }
    }*/// pour colorier le board
     /*rectangle(left-245, top+45,left-45,top+70);
     setfillstyle(SOLID_FILL,COLOR(6,678,54));
            floodfill(left-195,top+47,WHITE);

             circle(left-145,top-60,100);
             setfillstyle(SOLID_FILL,COLOR(78,168,646));
            floodfill(left-145,top-60,WHITE);*/
}

