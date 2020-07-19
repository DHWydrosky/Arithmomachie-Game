#include<stdio.h>
#include<math.h>
#include<graphics.h>

 void triangle1(int xt, int yt)
 {
     int x1,y1,x2,y2,x3,y3;
     int mi= 20;

     x1= xt-mi-2;
     y1= yt-mi;
     x2= xt+mi+3;
     y2= yt;
     x3= xt-mi-2;
     y3= yt+mi;

     line(x1,y1,x2,y2);
     line(x1,y1,x3,y3);
     line(x2,y2,x3,y3);




 }

  void triangle2(int xt,int yt)
    {
        int x1,y1,x2,y2,x3,y3,mi;
        mi=20;
        x1=xt-mi;
        y1=yt;
        x2=xt+mi;
        y2=yt-mi;
        x3=xt+mi;
        y3=yt+mi;

        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);


    }


 void cercle1 (int xt,int yt)
 {
     int x,y,rayon;
     x=xt;
     y=yt;
     rayon=20;
     circle(x,y,rayon);

 }


 void cercle2 (int xt,int yt)
 {
     int x,y,rayon;
     x=xt;
     y=yt;
     rayon=20;
     circle(x,y,rayon);

 }



 void carre1 (int xt,int yt)
 {
     int x1,x2,y1,y2,micote=20;
     x1=xt-micote;
     x2=xt+micote;
     y1=yt-micote;
     y2=yt+micote;
     rectangle(x1,y1,x2,y2);

 }

 void carre2 (int xt,int yt)
 {
     int x1,x2,y1,y2,micote=20;
     x1=xt-micote;
     x2=xt+micote;
     y1=yt-micote;
     y2=yt+micote;
     rectangle(x1,y1,x2,y2);

 }




 void pyra1(int xt,int yt,int C)
 {
     int x1,x2,y1,y2,mi=20,rayon=13,x,y,P=50;
      x1=xt-mi;
     x2=xt+mi;
     y1=yt-mi;
     y2=yt+mi;
     rectangle(x1,y1,x2,y2);
     circle(xt,yt,rayon);
        setfillstyle(SOLID_FILL,COLOR(25,18,3));
        setfillstyle(SOLID_FILL,COLOR(67,188,103));
        floodfill( x1+2,yt+2,WHITE);

 }

 void pyra2(int xt,int yt)
 {
     int x1,x2,y1,y2,mi=20,rayon=13;
      x1=xt-mi;
     x2=xt+mi;
     y1=yt-mi;
     y2=yt+mi;
     rectangle(x1,y1,x2,y2);
     circle(xt,yt,rayon);
     setfillstyle(SOLID_FILL,COLOR(253,345,3));
        floodfill(xt,yt,WHITE);
    setfillstyle(SOLID_FILL,COLOR(67,188,3));
        floodfill(x1+2,yt+2,WHITE);

 }
//restrictions des pions
//void rest_carre (int A[i][j],)


