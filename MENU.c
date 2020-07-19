#include "ok.h"




void menu (int A[][16],int B[][16],int C[6],int D[5])
{
     int X,Y,gauche,droite,haut,bas,i;

    // cleardevice();
      //readimagefile("Loading_page1.jpg",0,0,getmaxx(),getmaxy());

     gauche=getmaxx()/2-150;
     droite=getmaxx()/2+150;
     haut=getmaxy()/2-250;
     bas=getmaxy()/2+100;

    readimagefile("menu.jpg",0,0,getmaxx(),getmaxy());
    /*
    readimagefile("ANBA.jpg",gauche,bas,droite,bas+80);


    setcolor(RGB(255,169,83));
    setlinestyle(0,2,3);
    //rectangle(gauche,haut,droite,bas);
     for(i=haut+75;i<=bas;i+=75)
     {
         line(gauche,i,droite,i);
     }
     settextstyle(2,HORIZ_DIR,10);
     setcolor(RGB(255,128,64));
     outtextxy(gauche+40,haut+90,"Instruction");
     outtextxy(gauche+40,haut+165,"Controle");
     outtextxy(gauche+40,haut+240,"Sortir");
     outtextxy(gauche+40,haut+15,"Jouer"); */
      while(1)
     {


      while(!ismouseclick(WM_LBUTTONDOWN));
      getmouseclick(WM_LBUTTONDOWN,X,Y);
      printf("x=%d y=%d  ",X,Y);
      if((X>=573)&&(X<=805)&&(Y>=192)&&(Y<=241))
      {   //cleardevice();


                     board();
                     matrice_initial(A,B,C,D);
                      place_pion(A,B);
                       deplace_pion(A,B,C,D);
      }

      if((X>=406)&&(X<=953)&&(Y>=322)&&(Y<=373))
      {
         instruction(A,B,C,D);
      }
       if((X>=488)&&(X<=870)&&(Y>=463)&&(Y<=513))
      {
           controle(A,B,C,D);
      }
       if((X>=548)&&(X<=820)&&(Y>=590)&&(Y<=635))
      {
          sortir(A,B,C,D);
      }

    }

       getch();


}

    void instruction (int A[][16],int B[][16],int C[6],int D[5])
    {   int X,Y;
             //readimagefile("jwet (3).jpg",0,0,getmaxx(),getmaxy());
         readimagefile("PAGE ENTREE SINT.jpg",0,0,getmaxx(),getmaxy());
         while(1)
         {


          while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=0 && X<=60)
         {
             menu(A,B,C,D);

         }
            if ((X>=478 &&X<=798)&&(Y>=172 && Y<=235))
            {
                principe(A,B,C,D);
            }


              if ((X>=478 &&X<=798)&&(Y>=318 && Y<=370))
            {
                ce(A,B,C,D);
            }

            if ((X>=478 &&X<=798)&&(Y>=497 && Y<=556))
            {
                prise(A,B,C,D);
            }

         }
    }
    void controle (int A[][16],int B[][16],int C[6],int D[5])
    {int i,j,X,Y;
    readimagefile("controll.jpg",0,0,getmaxx(),getmaxy());
    while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
             menu(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {
             menu(A,B,C,D);

         }
          }

    }
    void sortir (int A[][16],int B[][16],int C[6],int D[5])
    {  int X,Y;
         readimagefile("sans titre.jpg",getmaxx()/2-386,getmaxy()/2-157,getmaxx()/2+386,getmaxy()/2+157 );
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
         printf("x=%d G=%d h=%d n%d ",X,Y,getmaxx(),getmaxy());
         if(X>=getmaxx()/2-255 && X<=getmaxx()/2 -160 && Y>=getmaxy()/2-29 && Y<=getmaxy()/2)
            closegraph();
            if(X>=getmaxx()/2+140 && X<=getmaxx()/2 + 394 && Y>=getmaxy()/2-59 && Y<=getmaxy()/2-30)
                menu(A,B,C,D);

    }
void principe (int A[][16],int B[][16],int C[6],int D[5])
{ int i,j,X,Y;
      for(i=1;i<=2;i++)
      {
          if (i==1)
          {
                     readimagefile("PRINCIPE PBAS.jpg",0,0,getmaxx(),getmaxy());
                     while(1)
                     {


                      while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=0 && X<=60)
         {
             instruction(A,B,C,D);

         }
          if(X>=getmaxx()-60 && X<=getmaxx())
         {
             i==2;
             foo(A,B,C,D);

         }

         }
          }
          if(i==2)
          {
          readimagefile("PRINCIPE PBASggg.jpg",0,0,getmaxx(),getmaxy());
          while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
             menu(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {               i==1;

         }
          }
          }

      }

}
int foo (int A[][16],int B[][16],int C[6],int D[5])
{ int i,j,X,Y;

          readimagefile("PRINCIPE PBASggg.jpg",0,0,getmaxx(),getmaxy());
          while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {  cleardevice();
             instruction(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {
             i==1;
             principe(A,B,C,D);

         }
          }

}
void deplacement (int A[][16],int B[][16],int C[6],int D[5])
{
    int i,j,X,Y;





}
void prise (int A[][16],int B[][16],int C[6],int D[5])
{
    int i,j,X,Y;
    readimagefile("arithmmeti.jpg",0,0,getmaxx(),getmaxy());
    while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
                          BLOCAGE(A,B,C,D);
         }
         if(X>=0 && X<=60)
         {instruction(A,B,C,D);
         }
          }




}

void tri (int A[][16],int B[][16],int C[6],int D[5])
{
    int i,j,X,Y;
    readimagefile("tri.jpg",0,0,getmaxx(),getmaxy());
    while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
             instruction(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {
             ca(A,B,C,D);

         }
          }




}
void ca(int A[][16],int B[][16],int C[6],int D[5])
{
    int i,j,X,Y;
    readimagefile("ca.jpg",0,0,getmaxx(),getmaxy());
    while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
             tri(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {
             py(A,B,C,D);

         }
          }




}
void ce (int A[][16],int B[][16],int C[6],int D[5])
{
    int i,j,X,Y;
    readimagefile("ce.jpg",0,0,getmaxx(),getmaxy());
    while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
             py(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {
             instruction(A,B,C,D);

         }
          }




}
void py (int A[][16],int B[][16],int C[6],int D[5])
{
    int i,j,X,Y;
    readimagefile("py.jpg",0,0,getmaxx(),getmaxy());
    while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
             ca(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {
             ce(A,B,C,D);

         }
          }




}
void BLOCAGE(int A[][16],int B[][16],int C[6],int D[5])
{
    int i,j,X,Y;
    readimagefile("BLOCAGE INTRUCRIO.jpg",0,0,getmaxx(),getmaxy());
    while(1)
          {
           while(!ismouseclick(WM_LBUTTONDOWN));
          getmouseclick(WM_LBUTTONDOWN,X,Y);
          printf("x=%d  y=%d",X,Y);
         if(X>=getmaxx()-60 && X<=getmaxx())
         {
             instruction(A,B,C,D);

         }
         if(X>=0 && X<=60)
         {
             prise(A,B,C,D);

         }
          }




}




