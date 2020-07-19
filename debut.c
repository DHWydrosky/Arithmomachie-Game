#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include"ok.h"




void matrice_initial(int A[][16],int B[][16], int C[6],int D[5])
{ int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<16; j++)
        {
            A[i][j]=0;
            B[i][j]=0;
        }
    }

    A[0][2]=289; A[0][3]=153; A[0][4]=81; A[0][5]=0; A[1][2]=169; A[1][3]=300; A[1][4]=72; A[1][5]=0;
    A[2][2]=0;   A[2][3]=49;  A[2][4]=64; A[2][5]=8; A[3][2]=0;   A[3][3]=42;  A[3][4]=36; A[3][5]=6;
    A[4][2]=0;   A[4][3]=20;  A[4][4]=16; A[4][5]=4; A[5][2]=0;   A[5][3]=25;  A[5][4]=4;  A[5][5]=2;
    A[6][2]=81;  A[6][3]=45;  A[6][4]=6;  A[6][5]=0; A[7][2]=25;  A[7][3]=15;  A[7][4]=9;  A[7][5]=0;
    A[0][5]=0;   A[1][5]=0;   A[6][5]=0;  A[7][5]=0;

    /*for(i=0;i<8;i++)
    {
        for(j=6;j<10;j++)
        {
            A[i][j]=0;
            B[i][j]=0;

        }
    }*/

    A[0][10]=0; A[0][11]=-16; A[0][12]=-28;    A[0][13]=-49;  A[1][10]=0; A[1][11]=-12;  A[1][12]=-66;  A[1][13]=-121;
    A[2][10]=-3; A[2][11]=-90;  A[2][12]=-36;  A[2][13]=0;   A[3][10]=-5; A[3][11]=-25;  A[3][12]=-30;   A[3][13]=0;
    A[4][10]=-7; A[4][11]=-49; A[4][12]=-56;  A[4][13]=0;   A[5][10]=-9; A[5][11]=-81;  A[5][12]=-64;   A[5][13]=0;
    A[6][10]=0; A[6][11]=-90;  A[6][12]=-120; A[6][13]=-225; A[7][10]=0; A[7][11]=-100; A[7][12]=-301; A[7][13]=-361;
    A[1][10]=0; A[0][10]=0;

  /*  for(i=0; i<8; i++)
    {
        for(j=14; j<16; j++)
        {
            A[i][j]=0;
            B[i][j]=0;
        }

   }
   B[2][2]=0;
   B[3][2]=0;
   B[4][2]=0;
   B[5][2]=0;
   B[0][5]=0;
   B[1][5]=0;
   B[6][5]=0;
   B[7][5]=0;
   B[2][13]=0;
   B[3][13]=0;
   B[4][13]=0;
   B[5][13]=0;
   B[0][10]=0;
   B[1][10]=0;
   B[6][10]=0;
   B[7][10]=0;
*/




   for(i=0;i<8;i++)
   {
       if(i<2||i>5)
       {
       B[i][2]=CARRE;
       B[i][13]=CARRE;
       }
       if(i<2||i>5)
       {
       B[i][3]=CARRE;
       B[i][12]=CARRE;
       }
       else
       {
       B[i][3]=TRIANGLE;
       B[i][12]=TRIANGLE;
       }
       if(i<2||i>5)
       {
       B[i][4]=TRIANGLE;
       B[i][11]=TRIANGLE;
       }
       else
       {
       B[i][4]=CERCLE;
       B[i][11]=CERCLE;
       }
       if(i>1&&i<6)
       {
       B[i][5]=CERCLE;
       B[i][10]=CERCLE;
       }
       }
       B[1][3]=PYRAMIDE;
       B[7][12]=PYRAMIDE;

       C[0]=1;C[1]=4;
       C[2]=9;C[3]= 16;
       C[4]=25;C[5]=36;

       D[0]=16;
       D[1]=25;D[2]=36;
       D[3]=49;D[4]=64;


}





void place_pion(int A[][16],int B[][16])
{
   int i,j,P=50;
char carac[4]="";
   for(i=0; i<8; i++)
    {
        for(j=0; j<16; j++)
        {
            switch(B[i][j])
            {
                case CERCLE:
                    sprintf(carac,"%d",abs(A[i][j]));
                    if (A[i][j]>0)
                       {
                        cercle1(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                        settextstyle(2,VERT_DIR,4);
                        outtextxy(getmaxx()/2 - 8*P+P/2+j*P-5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                        setfillstyle(SOLID_FILL,COLOR(164,0,28));
                        floodfill(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P+12,WHITE);
                        blocage_cercle2(A,B,i,j);

                       }
                        else
                        {
                        cercle1(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                        settextstyle(2,VERT_DIR,4);
                        outtextxy(getmaxx()/2 - 8*P+P/2+j*P-5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                        setfillstyle(SOLID_FILL,COLOR(79,79,79));
                        floodfill(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P+12,WHITE);
                        blocage_cercle1(A,B,i,j);
                        }


                break;
                case TRIANGLE :
                    sprintf(carac,"%d",abs(A[i][j]));
                    if (A[i][j]>0)
                    {
                    triangle1(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx()/2 - 8*P+P/2+j*P-5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+j*P-19,getmaxy()/2 - 4*P+P/2+i*P+10,WHITE);
                    //settextstyle(3,VERT_DIR,1);
                    blocage_triangle2(A,B,i,j);
                    }
                    else
                    {
                        triangle2(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                        settextstyle(2,VERT_DIR,4);
                        outtextxy(getmaxx()/2 - 8*P+P/2+j*P+5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                        setfillstyle(SOLID_FILL,COLOR(79,79,79));
                        floodfill(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P,WHITE);
                       // outtextxy(getmaxx()/2 - 8*P+P/2+j*P+3,getmaxy()/2 - 4*P+P/2+i*P-13,carac);
                       blocage_triangle1(A,B,i,j);
                    }

                    break;

                case CARRE:
                    sprintf(carac,"%d",abs(A[i][j]));
                    if (A[i][j]>0)
                    {

                    carre1(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                    settextstyle(2,VERT_DIR,4);
                    outtextxy(getmaxx()/2 - 8*P+P/2+j*P-5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P+13,WHITE);
                    blocage_carre2(A,B,i,j);

                    }
                    else
                    {
                        carre1(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                        settextstyle(2,VERT_DIR,4);
                        outtextxy(getmaxx()/2 - 8*P+P/2+j*P-5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                        setfillstyle(SOLID_FILL,COLOR(79,79,79));
                        floodfill(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P+12,WHITE);
                        blocage_carre1(A,B,i,j);

                    }
                    break;

                case PYRAMIDE :
                     sprintf(carac,"%d",abs(A[i][j]));
                     if (A[i][j]>0)
                     {

                    carre1(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                    settextstyle(2,VERT_DIR,4);
                    //outtextxy(getmaxx()/2 - 8*P+P/2+j*P-5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                    setfillstyle(SOLID_FILL,COLOR(164,0,28));
                    floodfill(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P+12,WHITE);

                     }

                    else
                    {
                        carre1(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P);
                        settextstyle(2,VERT_DIR,4);
                        //outtextxy(getmaxx()/2 - 8*P+P/2+j*P-5,getmaxy()/2 - 4*P+P/2+i*P-5,carac);
                        setfillstyle(SOLID_FILL,COLOR(79,79,79));
                        floodfill(getmaxx()/2 - 8*P+P/2+j*P,getmaxy()/2 - 4*P+P/2+i*P+12,WHITE);                 }
                    break;
            }
        }
    }
}


   /* void Game_Over1 (int A[][16], int B[][16],int C[6],int D[5] )

    { int a, b,i,j;
        for(a=0; a<8; a++)
        {
        for(b=0; b<16; b++)
           { if (A[a][b]>0 && B[a][b]==PYRAMIDE)
             {
               i=a;
               j=b;

             }
           }
        }*/






       //if()

      /*  if ( ((B[i][j]==PYRAMIDE) &&  (A[i][j]>0) && (C[0]!=0) && (C[1]!=0) && (C[2]!=0 )&& (C[3]!=0) && (C[4]!=0)&& (C[5]!=0 )&&
         (A[i-1][j]<0) && (A[i+1][j]<0) && (A[i-1][j-1]<0) && (A[i][j-1]<0) && (A[i+1][j-1]<0) && (A[i+1][j+1]<0) && (A[i][j+1]<0) && (A[i-1][j+1]<0))
        ||
        ((i==0)&&(j==15)&& B[i][j]==PYRAMIDE &&  A[i][j]>0 && C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
         && (A[i][j-1]<0) && (A[i+1][j-1]<0) && (A[i+1][j]<0))
         ||
         ((i==0)&& (j==0)&& B[i][j]==PYRAMIDE &&  A[i][j]>0&& C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
          && A[i][j+1]<0 && A[i+1][j+1]<0 && (A[i+1][j]<0))
         ||
         ((i==7)&& (j==0)&& B[i][j]==PYRAMIDE &&  A[i][j]>0&& C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
          && (A[i-1][j]<0) && A[i-1][j+1]<0 &&( A[i][j+1]<0))

         ||
         ((i==7)&& (j==15)&& B[i][j]==PYRAMIDE &&  A[i][j]>0&& C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
          && (A[i-1][j]<0) && A[i-1][j-1]<0 && (A[i][j-1]<0))
         ||
         ((i==0)&& (j>=1)&& B[i][j]==PYRAMIDE &&  A[i][j]>0&& C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
          && (A[i][j-1]<0) && (A[i][j+1]<0) && (A[i+1][j-1]<0) && (A[i+1][j]<0) && (A[i+1][j+1]<0))
         ||
          ((i==7)&& (j>=1)&& B[i][j]==PYRAMIDE &&  A[i][j]>0&& C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
          && (A[i][j-1]<0) && (A[i][j+1]<0) && A[i-1][j-1]<0 && (A[i-1][j]<0) && A[i-1][j+1]<0)
         ||
         ((i>=1)&& (j=0)&& B[i][j]==PYRAMIDE &&  A[i][j]>0&& C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
          && (A[i-1][j]<0) && A[i-1][j+1]<0 && (A[i][j+1]<0) && A[i+1][j+1]<0 && (A[i+1][j]<0))
         ||
         ((i>=1)&& (j=15)&& B[i][j]==PYRAMIDE &&  A[i][j]>0&& C[0]!=0 && C[1]!=0 && C[2]!=0 && C[3]!=0 && C[4]!=0&& C[5]!=0
          && (A[i-1][j]<0 )&& A[i-1][j-1]<0 && (A[i][j-1]<0) && A[i+1][j-1]<0 && (A[i+1][j]<0))
          )*/

           /* {
                  settextstyle(45,VERT_DIR,2);
                  outtextxy(0,getmaxy() / 2 - 100,"GAME OVER");

            }


    }*/



    void Game_Over1( )
        {
            readimagefile("Loading_page12.jpg",0,0,getmaxx(),getmaxy());

        }







void apparition_pyramide(int A[][16], int B[][16],int C[6],int D[5],int i,int j)
{   int x,y,P=50;


   while(!ismouseclick(WM_RBUTTONDOWN ))
       {

        getmouseclick(WM_RBUTTONDOWN ,x,y);
  /*  if((x> getmaxx()/2 - 8*P)&&(x< getmaxx()/2 + 8*P)&&(y > getmaxy()/2 - 4*P)&&(y < getmaxy()/2 + 4*P))//pr limiter le click sur le board
        {

        for(j=0;j<16;j++) // convert.pix.en coord. matric.
          {
            if((x > getmaxx()/2 - 8*P+j*P)&&(x < getmaxx()/2 - 8*P+(j+1)*P))
               break;
          }

        for(i=0;i<8;i++)
          {
            if((y > getmaxy()/2 - 4*P+i*P)&&(y < getmaxy()/2 - 4*P+(i+1)*P))
               break;
          }

          if(A[i][j]>0 && B[i][j]==PYRAMIDE)
          {
              Afficher_PyramideC(C);
              printf("iii=%d   jjj=%d",i,j);
              printf("x=%d  y=%d",x,y);
          }

          if(A[i][j]<0 && B[i][j]==PYRAMIDE)
          {
              Afficher_PyramideD(D);
                            printf("iii=%d   jjj=%d",i,j);
              printf("x=%d  y=%d",x,y);

          }

        }*/
        if (A[i][j]>0 && B[i][j]==PYRAMIDE && ((y > getmaxy()/2 - 4*P+i*P)&&(y < getmaxy()/2 - 4*P+(i+1)*P))
             &&((x > getmaxy()/2 - 4*P+i*P)&&(x < getmaxy()/2 - 4*P+(i+1)*P))
            )
        {
            Afficher_PyramideC(C);

        }

        }
   }





void deplace_pion(int A[][16],int B[][16],int C[6],int D[5])
{


    int i,j,x,y,tem=0,vali1,valj1,P=50,k=0,vali2=0,valj2=0,blo1=0,v,b;

   while(1)
        {

   while(!ismouseclick(WM_LBUTTONDOWN));
        getmouseclick(WM_LBUTTONDOWN,x,y);
        v=getmaxx();
        b=getmaxy();
        printf("x=%d y=%d ",x,y);
        if ((x > 1120 && x <1253 )&&(y> 556 && y< 667 ))
        {
           menu(A,B,C,D);
        }

    if((x> getmaxx()/2 - 8*P)&&(x< getmaxx()/2 + 8*P)&&(y > getmaxy()/2 - 4*P)&&(y < getmaxy()/2 + 4*P))
        //pr limiter le click sur le board
    {

        for(j=0;j<16;j++) // convert.pix.en coord. matric.
          {
            if((x > getmaxx()/2 - 8*P+j*P)&&(x < getmaxx()/2 - 8*P+(j+1)*P))
               break;
          }

        for(i=0;i<8;i++)
          {
            if((y > getmaxy()/2 - 4*P+i*P)&&(y < getmaxy()/2 - 4*P+(i+1)*P))
               break;
          }

              blo1=bloke(A,B,i,j);
            if (tem==0 && A[i][j]!=0 && k==0 && blo1!=1)
            {tem=tem+1;
                   if(A[i][j]>0 && B[i][j]==PYRAMIDE)
                    Afficher_PyramideC(C);
                  if(A[i][j]<0 && B[i][j]==PYRAMIDE)
                    Afficher_PyramideD(D);
            }
             if (tem==0 && A[i][j]!=0 && k==0 )
            tem=tem+1;




            if (tem==1 && A[i][j]==0 && k==1)
            {
            tem++;
            printf("vali2=%d et valj2=%d",vali2,valj2);
            }

            if(tem==1 && A[i][j]!=0 && k==1)
            {

                printf("vali2=%d et valj2=%d",vali2,valj2);
                tem++;

            }

    }



    else // valeur click en dehors du board
       {
           i=-1;j=-1;
       }

        printf("i=%d ,j=%d \t",i,j);



        if(tem==1 &&(i!=-1)&&(j!=-1)&& blo1!=1)
        {
             vali1=i; valj1=j;
             k=1;
             setfillstyle(SOLID_FILL,RGB(255,255,255));
             floodfill(getmaxx()/2 - 8*P+P/2+j*P-15+31,getmaxy()/2 - 4*P+P/2+i*P-10+31,WHITE);


        }

        if(tem==2)

        {
            tem=0;
            k=0;
            restriction(A,vali1,valj1,i,j,B,C,D);
            //Game_Over1(A,B,C,D);
            outtextxy(0,0,"jhuohurfhjhbrflh");



            if(getactivepage()==0)

        {
                setactivepage(1);

            //tem=0;
            //restriction(A,vali1_ap,valj1_ap,i,j);
            cleardevice();
            board();
            place_pion(A,B);


            setvisualpage(1);
            }

            if(getactivepage()==1)

            {
                setactivepage(0);

            //tem=0;
            //restriction(A,vali1_ap,valj1_ap,i,j);
            cleardevice();
            board();
            place_pion(A,B);

            setvisualpage(0);
            }
        }


   }
}


void restriction(int A[][16], int vali1,int valj1, int vali2, int valj2,int B[][16], int C[6],int D[5])
{

    switch(B[vali1][valj1])
    {

        case CERCLE:
            restri_cercle1(A, vali1,valj1, vali2, valj2,B);
            break;
        case TRIANGLE:
            restri_triangle1(A, vali1,valj1, vali2, valj2,B);
            break;
        case CARRE:
            restri_carre1( A, vali1,valj1, vali2, valj2,B);
            break;
        case PYRAMIDE:
            if(A[vali1][valj1]>0)
           restri_pyramide1( A, vali1,valj1, vali2, valj2,B,C);
           else if(A[vali1][valj1]<0)
            restri_pyramide2(A, vali1,valj1, vali2, valj2,B,D);
           break;

    }
    }







