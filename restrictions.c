#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include "ok.h"

   int pou=1;
 void restri_carre1(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16])
 {  int i,j,k,l,blo=0,x,y;
    i=vali2;
    j=valj2;
    k=vali1;
    l=valj1;


    blo=bloke(A,B,vali2,valj2);


     if((pou==1) && (A[vali2][valj2]==0)&& (A[vali1][valj1]>0) &&


         (((((i==k)&& (j==(l+3))) && (A[k][(l+1)]==0)   &&( A[k][l+2]==0))
         ||(((i==k)      &&(j==(l-3)))  && (A[k][l-1]==0)   && (A[k][l-2]==0))
         || (((i==(k+3)) && (j==l))     && (A[(k+1)][l]==0) && (A[k+2][l]==0))
         ||(((i==(k-3))  &&(j==l))      && (A[(k-1)][l]==0) && (A[k-2][l]==0)))
         ||

         (
          ((i==(k+1))    && (j==(l+3)))
         ||((i==(k+1))   &&(j==(l-3)))
         || (((i==(k-1))  && (j==(l+3))))
         ||((i==(k-1))   &&(j==(l-3)))
         || ((i==(k-3))  && (j==(l+1)))
         ||((i==(k-3))   &&(j==(l-1)))
         || ((i==(k+3))  && (j==(l+1)))
         ||((i==(k+3))   &&(j==(l-1)))
          )
          )
          )



    {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=2; dessin(pou);
    }

if((pou==2) && (A[vali2][valj2]==0)&& (A[vali1][valj1]<0) &&


         (((((i==k)&& (j==(l+3))) && (A[k][(l+1)]==0)   &&( A[k][l+2]==0))
         ||(((i==k)      &&(j==(l-3)))  && (A[k][l-1]==0)   && (A[k][l-2]==0))
         || (((i==(k+3)) && (j==l))     && (A[(k+1)][l]==0) && (A[k+2][l]==0))
         ||(((i==(k-3))  &&(j==l))      && (A[(k-1)][l]==0) && (A[k-2][l]==0)))
         ||

         (
          ((i==(k+1))    && (j==(l+3)))
         ||((i==(k+1))   &&(j==(l-3)))
         || (((i==(k-1))  && (j==(l+3))))
         ||((i==(k-1))   &&(j==(l-3)))
         || ((i==(k-3))  && (j==(l+1)))
         ||((i==(k-3))   &&(j==(l-1)))
         || ((i==(k+3))  && (j==(l+1)))
         ||((i==(k+3))   &&(j==(l-1)))
          )
          )
          )



    {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=1; dessin(pou);
    }

    if((pou==2) && (A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&

         ((((i==k)&& (j==(l+3))) && (A[k][(l+1)]==0)   &&( A[k][l+2]==0))
         ||(((i==k)      &&(j==(l-3)))  && (A[k][l-1]==0)   && (A[k][l-2]==0))
         || (((i==(k+3)) && (j==l))     && (A[(k+1)][l]==0) && (A[k+2][l]==0))
         ||(((i==(k-3))  &&(j==l))      && (A[(k-1)][l]==0) && (A[k-2][l]==0)))
      )
        {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=1; dessin(pou);
        }



        if((pou==2) && (A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]==PYRAMIDE)&&

         ((((i==k)&& (j==(l+3))) && (A[k][(l+1)]==0)   &&( A[k][l+2]==0))
         ||(((i==k)      &&(j==(l-3)))  && (A[k][l-1]==0)   && (A[k][l-2]==0))
         || (((i==(k+3)) && (j==l))     && (A[(k+1)][l]==0) && (A[k+2][l]==0))
         ||(((i==(k-3))  &&(j==l))      && (A[(k-1)][l]==0) && (A[k-2][l]==0)))
      )
        {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=1; dessin(pou);
        settextstyle(2,HORIZ_DIR,5);
        outtextxy(getmaxx() / 2 - 400,getmaxy() / 2 - 200,"GAME OVER");

        }


      if ((pou==1)&&(A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali2][valj2]!=0)&&

         ((((i==k)&&     (j==(l+3))) && (A[k][(l+1)]==0)   &&( A[k][l+2]==0))
         ||(((i==k)      &&(j==(l-3)))  && (A[k][l-1]==0)   && (A[k][l-2]==0))
         || (((i==(k+3)) && (j==l))     && (A[(k+1)][l]==0) && (A[k+2][l]==0))
         ||(((i==(k-3))  &&(j==l))      && (A[(k-1)][l]==0) && (A[k-2][l]==0)))
          )
        {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=2; dessin(pou);
        }

         if ((pou==1)&&(A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali2][valj2]==PYRAMIDE)&&

         ((((i==k)&&     (j==(l+3))) && (A[k][(l+1)]==0)   &&( A[k][l+2]==0))
         ||(((i==k)      &&(j==(l-3)))  && (A[k][l-1]==0)   && (A[k][l-2]==0))
         || (((i==(k+3)) && (j==l))     && (A[(k+1)][l]==0) && (A[k+2][l]==0))
         ||(((i==(k-3))  &&(j==l))      && (A[(k-1)][l]==0) && (A[k-2][l]==0)))
          )
        {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=2; dessin(pou);
        settextstyle(2,HORIZ_DIR,5);
        outtextxy(getmaxx() / 2 - 400,getmaxy() / 2 - 200,"GAME OVER");
        }

        //manger par egalite
       if (
           (pou==2)&& (B[vali1][valj1]==CARRE)&&(A[vali1][valj1]<0)&&(A[vali2][valj2]>0)&&(abs(A[vali1][valj1])==abs(A[vali2][valj2]))
            &&(((vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1+1]==0)&&(B[vali1][valj1+2]==0))
               ||((vali2==vali1)&&(valj2==vali1-3)&&(B[vali1][valj1-1]==0)&&(B[vali1][valj1-2]==0))
               ||((vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+1][valj1]==0)&&(B[vali1+2][valj1]==0))
               ||((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(B[vali1-2][valj1]==0)))
            )
         {
          A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
        }
        if (
            (pou==1)&&(B[vali1][valj1]==CARRE)&&(A[vali1][valj1]>0)&&(A[vali2][valj2]<0)&&(abs(A[vali1][valj1])==abs(A[vali2][valj2]))
            &&(((vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1+1]==0)&&(B[vali1][valj1+2]==0))
               ||((vali2==vali1)&&(valj2==vali1-3)&&(B[vali1][valj1-1]==0)&&(B[vali1][valj1-2]==0))
               ||((vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+1][valj1]==0)&&(B[vali1+2][valj1]==0))
               ||((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(B[vali1-2][valj1]==0)))
            )
        {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
        }
        //arithm CARRE positif et cercle
   if((B[vali1][valj1]==CARRE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
         (((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+2][valj1]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-3)&&(B[vali1][valj1-2]==0)&&(B[vali1][valj1-2]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1+2]==0)&&(B[vali1][valj1+1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )
     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }

              //arithm CARRE NEGATIF et cercle
   if((B[vali1][valj1]==CARRE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
         (((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+2][valj1]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-3)&&(B[vali1][valj1-2]==0)&&(B[vali1][valj1-2]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )
     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }



     //arith CARRE positif et triangle
     if((B[vali1][valj1]==CARRE)&&(A[vali1][valj1]>0)&&(pou==1)
         &&
     (((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||(vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+2][valj1]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2]-2)+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      )
           ||(vali2==vali1)&&(valj2==valj1-3)&&(B[vali1][valj1-2]==0)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]<0)&&  (((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )
                                                                       ))


               ||(vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1+2]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==TRIANGLE)&&
                                                                                                  (B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )



                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))





          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }

          //arith CARRE NEGATIF et triangle
     if((B[vali1][valj1]==CARRE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
     (((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||(vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+2][valj1]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2]-2)+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      )
           ||(vali2==vali1)&&(valj2==valj1-3)&&(B[vali1][valj1-2]==0)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]>0)&&  (((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )
                                                                       ))


               ||(vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1+2]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-2][valj2]==TRIANGLE)&&
                                                                                                  (B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )



                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))





          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }

     //arithm CARRE positif et carre

       if ((B[vali1][valj1]==CARRE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
     (((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+2][valj1]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-3)&&(B[vali1][valj2-1]==0)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1-2]==0)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }

          //arithm CARRE NEGATIF et carre

       if ((B[vali1][valj1]==CARRE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
     (((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+2][valj1]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-3)&&(B[vali1][valj1-2]==0)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1-2]==0)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }



 }


void restri_triangle1(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16])
 {  int i,j,k,l,blo=0;
    i=vali2;
    j=valj2;
    k=vali1;
    l=valj1;

    blo=bloke(A,B,vali2,valj2);



     if((pou==1)&&(B[vali2][valj2]==0)&&(A[vali1][valj1]>0)&& (A[vali2][valj2]==0) &&

        (
         (((i==k)        && (j==(l+2))) && B[k][(l+1)]==0 )
         ||(((i==k)      &&(j==(l-2)))  && B[k][l-1]==0   )
         || (((i==(k+2)) && (j==l))     && B[(k+1)][l]==0 )
         ||(((i==(k-2))  &&(j==l))      && B[(k-1)][l]==0 ))
         ||

         ((B[vali2][valj2]==0)&& (pou==1)&&(A[vali1][valj1]>0)&&(A[vali2][valj2]==0)&&
          (((i==(k+1))    && (j==(l+2)))
         ||((i==(k+1))   &&(j==(l-2)))
         || ((i==(k-1))  && (j==(l+2)))
         ||((i==(k-1))   &&(j==(l-2)))
         || ((i==(k-2))  && (j==(l+1)))
         ||((i==(k-2))   &&(j==(l-1)))
         || ((i==(k+2))  && (j==(l+1)))
         ||((i==(k+2))   &&(j==(l-1)))
          ))
          )

    {



        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;

        pou=2; dessin(pou);




    }

    if((pou==2)&&(B[vali2][valj2]==0)&&(A[vali1][valj1]<0)&& (A[vali2][valj2]==0) &&

        (
         (((i==k)        && (j==(l+2))) && B[k][(l+1)]==0 )
         ||(((i==k)      &&(j==(l-2)))  && B[k][l-1]==0   )
         || (((i==(k+2)) && (j==l))     && B[(k+1)][l]==0 )
         ||(((i==(k-2))  &&(j==l))      && B[(k-1)][l]==0 ))
         ||

         ((B[vali2][valj2]==0)&& (pou==2)&&(A[vali1][valj1]<0)&&(A[vali2][valj2]==0)&&
          (((i==(k+1))    && (j==(l+2)))
         ||((i==(k+1))   &&(j==(l-2)))
         || ((i==(k-1))  && (j==(l+2)))
         ||((i==(k-1))   &&(j==(l-2)))
         || ((i==(k-2))  && (j==(l+1)))
         ||((i==(k-2))   &&(j==(l-1)))
         || ((i==(k+2))  && (j==(l+1)))
         ||((i==(k+2))   &&(j==(l-1)))
          ))
          )

    {



        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=1; dessin(pou);


    }


    if


     ( (pou==2)&& (A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&

         ((((i==k)        && (j==(l+2))) && B[k][(l+1)]==0 )
         ||(((i==k)      &&(j==(l-2)))  && B[k][l-1]==0   )
         || (((i==(k+2)) && (j==l))     && B[(k+1)][l]==0 )
         ||(((i==(k-2))  &&(j==l))      && B[(k-1)][l]==0 ))
             )

        {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=1; dessin(pou);
        }
     if


     ((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali2][valj2]!=0)&& (pou==1)&&

         ((((i==k)        && (j==(l+2))) && B[k][(l+1)]==0 )
         ||(((i==k)      &&(j==(l-2)))  && B[k][l-1]==0   )
         || (((i==(k+2)) && (j==l))     && B[(k+1)][l]==0 )
         ||(((i==(k-2))  &&(j==l))      && B[(k-1)][l]==0 ))
             )
        {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;
        pou=2; dessin(pou);
        }




           //MANGER PAR EGALITE

        if( (pou==1)&&
           (B[vali1][valj1]==TRIANGLE)&&(A[vali1][valj1]>0)&&(A[vali2][valj2]<0)&&(abs(A[vali1][valj1])==abs(A[vali2][valj2]))
           &&(((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1][valj1+1]==0))
              ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1][valj1-1]==0))
              ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1+1][valj1]==0))
              ||((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)))
           )
        {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
        }

        if( (pou==2)&&
           (B[vali1][valj1]==TRIANGLE)&&(A[vali1][valj1]<0)&&(A[vali2][valj2]>0)&&(abs(A[vali1][valj1])==abs(A[vali2][valj2]))
           &&(((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1][valj1+1]==0))
              ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1][valj1-1]==0))
              ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1+1][valj1]==0))
              ||((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)))
           )
        {
          A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
        }
   //arithm triangle positif et cercle
   if((B[vali1][valj1]==TRIANGLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
         (((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+2)&&(valj2==valj1+2)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1][valj1+1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )
     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }

      //arithm triangle NEGATIF et cercle
   if((B[vali1][valj1]==TRIANGLE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
         (((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&& (((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1][valj1+1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                    ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )
     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }

     //arith triangle positif et triangle
     if((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
     (((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2]-2)+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )
                                                                        ))



               ||((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==TRIANGLE)&&
                                                                                                  (B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )



                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }

          //arith triangle NEGATIF et triangle
     if((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
     (((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2])&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1])&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1])&&(A[vali2][valj2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2])&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1])&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2]-2)+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1])&&(A[vali2][valj2+2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2])&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2])&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1])&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )
                                                                        ))



               ||((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-2][valj2]==TRIANGLE)&&
                                                                                                  (B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )



                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }

     //arithm triangle positif et carre

       if ((B[vali1][valj1]==TRIANGLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
     (((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }

   //arithm triangle NEGATIF et carre

       if ((B[vali1][valj1]==TRIANGLE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
     (((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]>0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }





 }

 void restri_cercle1(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16])
 {
   int blo=0;
   blo=0;
     blo=bloke(A,B,vali2,valj2);
     printf("blo=%d",blo);

    if(( (pou==1) && (B[vali2][valj2]==0)&& A[vali2][valj2]==0 && A[vali1][valj1]>0) &&
    (((vali2==vali1+1)&&(valj2==valj1+1))
     ||((vali2==vali1-1)&&(valj2==valj1-1))
     ||((vali2==vali1-1)&&(valj2==valj1+1))
     ||((vali2==vali1+1)&&(valj2==valj1-1))))

     {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
       // Game_Over1 ( A,B,C,D );


     }
 if(( (pou==2) && (B[vali2][valj2]==0)&& A[vali2][valj2]==0 && A[vali1][valj1]<0) &&
    (((vali2==vali1+1)&&(valj2==valj1+1))
     ||((vali2==vali1-1)&&(valj2==valj1-1))
     ||((vali2==vali1-1)&&(valj2==valj1+1))
     ||((vali2==vali1+1)&&(valj2==valj1-1))))

     {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }


    if
    ((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&& (pou==2)&&
    (((vali2==vali1+1)&&(valj2==valj1+1))
     ||((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&
      (vali2==vali1-1)&&(valj2==valj1-1))
     ||((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&(vali2==vali1-1)&&
     (valj2==valj1+1))
     ||((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&(vali2==vali1+1)&&
     (valj2==valj1-1))))
  {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        printf("blo=%d",blo);
        pou=1; dessin(pou);

  }
      if
    ((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]==PYRAMIDE)&& (pou==2)&&
    (((vali2==vali1+1)&&(valj2==valj1+1))
     ||((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&
      (vali2==vali1-1)&&(valj2==valj1-1))
     ||((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&(vali2==vali1-1)&&
     (valj2==valj1+1))
     ||((A[vali2][valj2]>0)&&(blo==1)&&(A[vali1][valj1]<0)&&(B[vali2][valj2]!=0)&&(vali2==vali1+1)&&
     (valj2==valj1-1))))
  {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        printf("blo=%d",blo);
        pou=1; dessin(pou);
        settextstyle(2,HORIZ_DIR,5);
        outtextxy(getmaxx() / 2 - 400,getmaxy() / 2 - 200,"GAME OVER");

  }

  if
  ((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali1][valj1]==CERCLE)&& (pou==1)&&
    (((vali2==vali1+1)&&(valj2==valj1+1))
     ||((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali1][valj1]==CERCLE)&&(vali2==vali1-1)&&
     (valj2==valj1-1))
     ||((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali1][valj1]==CERCLE)&&(vali2==vali1-1)&&
     (valj2==valj1+1))
     ||((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali1][valj1]==CERCLE)&&(vali2==vali1+1)&&
     (valj2==valj1-1))))
  {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        printf("blo=%d",blo);
        pou=2; dessin(pou);

  }

  if
  ((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali2][valj2]==PYRAMIDE)&& (pou==1)&&
    (((vali2==vali1+1)&&(valj2==valj1+1))
     ||((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali1][valj1]==CERCLE)&&(vali2==vali1-1)&&
     (valj2==valj1-1)&& (B[vali2][valj2]==PYRAMIDE) )
     ||((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali1][valj1]==CERCLE)&&(vali2==vali1-1)&&
     (valj2==valj1+1) && (B[vali2][valj2]==PYRAMIDE))
     ||((A[vali2][valj2]<0)&&(blo==1)&&(A[vali1][valj1]>0)&&(B[vali1][valj1]==CERCLE)&&(vali2==vali1+1)&&
     (valj2==valj1-1)&& (B[vali2][valj2]==PYRAMIDE))))
  {
        A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        printf("blo=%d",blo);
        pou=0;  //J'AI AJOUTE UN TRUC
        settextstyle(2,HORIZ_DIR,5);
        //outtextxy(getmaxx() / 2 - 400,getmaxy() / 2 - 200,"GAME OVER");
        //outtextxy(getmaxx() / 2, getmaxy() / 2 + 225,"GAME OVER");
        cleardevice();
        Game_Over1();


  }
 if (
     (B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]>0)&&(A[vali2][valj2]<0)&&(abs(A[vali1][valj1])==abs(A[vali2][valj2])) &&(pou==1)
     &&(((vali2==vali1-1)&&(valj2==valj1-1))
        ||((vali2==vali1+1)&&(valj2==valj1-1))
        ||((vali2==vali1-1)&&(valj2==valj1+1))
        ||((vali2==vali1+1)&&(valj2==valj1+1)))
     )

     {
          A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }
   if (
     (B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]<0)&&(A[vali2][valj2]>0)&&(abs(A[vali1][valj1])==abs(A[vali2][valj2])) &&(pou==2)
     &&(((vali2==vali1-1)&&(valj2==valj1-1))
        ||((vali2==vali1+1)&&(valj2==valj1-1))
        ||((vali2==vali1-1)&&(valj2==valj1+1))
        ||((vali2==vali1+1)&&(valj2==valj1+1)))
     )

     {
          A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }
     //arithmetique cercle positif et cercle positif
     if((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
         (((vali2==vali1-1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+1)&&(valj2==valj1+1)&&(A[vali2][valj2]<0)&&(((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1+1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&&(((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1-1)&&(valj2==valj1+1)&&(A[vali2][valj2]<0)&&(((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )
     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }
     //arithmetique cercle NEGATIF et cercle NEGAT
     if((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
         (((vali2==vali1-1)&&(valj2==valj1-1)&&(A[vali2][valj2]>0)&&(((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+1)&&(valj2==valj1+1)&&(A[vali2][valj2]>0)&&(((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1+1)&&(valj2==valj1-1)&&(A[vali2][valj2]>0)&&(((B[vali2+1][valj2-1]==CERCLE)&&(A[vali2+1][valj2-1]<0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1-1)&&(valj2==valj1+1)&&(A[vali2][valj2]>0)&&(((B[vali2-1][valj2+1]==CERCLE)&&(A[vali2-1][valj2+1]<0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+1][valj2+1]==CERCLE)&&(A[vali2+1][valj2+1]<0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2-1]==CERCLE)&&(A[vali2-1][valj2-1]<0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )
     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }
        //arithm cercle POSITIF et un triangle
     if ((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
     (((vali2==vali1-1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                      ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+1)&&(valj2==valj1+1)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2]-2)+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1+1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1-1)&&(valj2==valj1+1)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }
//arithm cercle NEGATIF et un triangle
     if ((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]<0) &&(pou==2)
         &&
     (((vali2==vali1-1)&&(valj2==valj1-1)&&(A[vali2][valj2]>0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                      ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+1)&&(valj2==valj1+1)&&(A[vali2][valj2]>0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2]-2)+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1+1)&&(valj2==valj1-1)&&(A[vali2][valj2]>0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1-1)&&(valj2==valj1+1)&&(A[vali2][valj2]>0)&&(((B[vali2-2][valj2]==TRIANGLE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]<0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+2][valj2]==TRIANGLE)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]<0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==TRIANGLE)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]<0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==TRIANGLE)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+2]<0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }
      //cercle positif par carre positif
       if ((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
     (((vali2==vali1-1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+1)&&(valj2==valj1+1)&&(A[vali2][valj2]<0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1+1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1-1)&&(valj2==valj1+1)&&(A[vali2][valj2]<0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2; dessin(pou);
     }
//cercle NEGATIF par carre NEGATIF
       if ((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]<0) && (pou==2)
         &&
     (((vali2==vali1-1)&&(valj2==valj1-1)&&(A[vali2][valj2]>0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))

           ||((vali2==vali1+1)&&(valj2==valj1+1)&&(A[vali2][valj2]>0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
           ||((vali2==vali1+1)&&(valj2==valj1-1)&&(A[vali2][valj2]>0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
               ||((vali2==vali1-1)&&(valj2==valj1+1)&&(A[vali2][valj2]>0)&&(((B[vali2-3][valj2]==CARRE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]<0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2]==CARRE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]<0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-3]==CARRE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]<0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==CARRE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]<0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )
                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=1; dessin(pou);
     }



 }
 void dessin (int pou)
 { int left, top, right, bottom;
     left = getmaxx() / 2 - 400;
    top = getmaxy() / 2 - 200;
    right = getmaxx() / 2 + 400;
    bottom = getmaxy() / 2 + 200;

     if(pou==1)
     {

     rectangle(left,top-140,left+80,top-20);
     rectangle(left-7,top-147,left+87,top-13);
         setfillstyle(SOLID_FILL,COLOR(234,226,77));
          floodfill(left-6,top-139,WHITE);

     }
     if (pou==2)
     {
       rectangle(right-87,top-147,right+7,top-13) ;
       rectangle(right-80,top-140,right,top-20);
       setfillstyle(SOLID_FILL,COLOR(204,0,0));
            floodfill(right-81,top-139,WHITE);
     }

 }


 /*void restri_carre2(int A[][16],int vali1,int valj1, int vali2,int valj2)
 {  int i,j,k,l;
    i=vali2;
    j=valj2;
    k=vali1;
    l=valj1;



     if(A[vali2][valj2]==0 &&

        (
         (((i==k)        && (j==(l+3))) && A[i==k][j==(l+1)]==0    && A[i==k][j==l+2]==0)
         ||(((i==k)      &&(j==(l-3)))  && A[i==k][j==l-1]==0    && A[i==k][j==l-2]==0)
         || (((i==(k+3)) && (j==l))     && A[i==(k+1)][j==l]==0 && A[i==k+2][j==l]==0)
         ||(((i==(k-3))  &&(j==l))      && A[i==(k-1)][j==l]==0 && A[i==k-2][j==l]==0))
         ||

         (((i==(k+1))    && (j==(l+3)))
         ||((i==(k+1))   &&(j==(l-3)))
         || ((i==(k-1))  && (j==(l+3)))
         ||((i==(k-1))   &&(j==(l-3)))
         || ((i==(k-3))  && (j==(l+1)))
         ||((i==(k-3))   &&(j==(l-1)))
         || ((i==(k+3))  && (j==(l+1)))
         ||((i==(k+3))   &&(j==(l-1)))
          )
          )

    {

        A[i][j]=A[k][l];
        A[k][l]=0;
    }

 }*/

/*void restri_cercle2(int A[][16],int vali1,int valj1, int vali2,int valj2)
 {



 if((A[vali2][valj2]==0)&&
    (((vali2==vali1+1)&&(valj2==valj1+1))
     ||((vali2==vali1-1)&&(valj2==valj1-1))
     ||((vali2==vali1-1)&&(valj2==valj1+1))
     ||((vali2==vali1+1)&&(valj2==valj1-1))))

     {
        A[i][j]=A[k][l];
        A[k][l]=0;
     }
 }*/

 /*void restri_triangle2(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16])
 {  int i,j,k,l;
    i=vali2;
    j=valj2;
    k=vali1;
    l=valj1;



     if(A[vali2][valj2]==0 &&

        (
         (((i==k)        && (j==(l+2))) && A[k][(l+1)]==0 )
         ||(((i==k)      &&(j==(l-2)))  && A[k][l-1]==0   )
         || (((i==(k+2)) && (j==l))     && A[(k+1)][l]==0 )
         ||(((i==(k-2))  &&(j==l))      && A[(k-1)][l]==0 ))
         ||

         (((i==(k+1))    && (j==(l+2)))
         ||((i==(k+1))   &&(j==(l-2)))
         || ((i==(k-1))  && (j==(l+2)))
         ||((i==(k-1))   &&(j==(l-2)))
         || ((i==(k-2))  && (j==(l+1)))
         ||((i==(k-2))   &&(j==(l-1)))
         || ((i==(k+2))  && (j==(l+1)))
         ||((i==(k+2))   &&(j==(l-1)))
          )
          )

    {
        A[i][j]=A[k][l];
        A[k][l]=0;
        B[i][j]=B[k][l];
        B[k][l]=0;

    }

 }*/


 void restri_pyramide1(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16],int C[6])
 {
    int i,j,k,l;
    i=vali2;
    j=valj2;
    k=vali1;
    l=valj1;



      if((C[0]!=0)&&(C[1]!=0)&&(C[2]!=0)&&(C[3]!=0)&&(C[4]!=0)&&(C[5]!=0)&&(A[vali2][valj2]==0) && pou==1 &&

        ((( (i==k-1) && (j==l))||((i==k+1)&&(j==l))
         || ((i==k) && (j==l-1))|| ((i==k )&& (j==l+1))
         )
         ||


         (((i==k)        && (j==(l+2))) && (A[k][(l+1)]==0))
         ||(((i==k)      &&(j==(l-2)))  && (A[k][l-1]==0  ) )
         ||(((i==(k+2))  && (j==l))     && (A[(k+1)][l]==0) )
         ||(((i==(k-2))  &&(j==l))      && (A[(k-1)][l]==0 ))

         ||


         ((((i==k)        && (j==(l+3))) && A[k][(l+1)]==0    && A[k][l+2]==0)
         ||(((i==k)      &&(j==(l-3)))  && A[k][l-1]==0    && A[k][l-2]==0)
         || (((i==(k+3)) && (j==l))     && A[(k+1)][l]==0 && A[k+2][l]==0)
         ||(((i==(k-3))  &&(j==l))      && A[(k-1)][l]==0 && A[k-2][l]==0))

         ||

         (((i==k-1) && (j==l-1))||((i==k+1)&&(j==l-1))
         ||((i==k+1) && (j==l+1))||((i==k-1 )&& (j==l+1)))

         ||



         (
         (((i==k-2)        && (j==(l+2))) && A[k-1][(l+1)]==0 )
         ||(((i==k+2)      &&(j==(l-2)))  && A[k+1][l-1]==0   )
         || (((i==(k-2)) && (j==l-2))     && A[(k-1)][l-1]==0 )
         ||(((i==(k+2))  &&(j==l+2))      && A[(k+1)][l+1]==0 )
          )
         ||
         ((((i==k-3)        && (j==(l-3))) && A[k-2][(l-2)]==0    && A[k-1][l-1]==0)
         ||(((i==k-3)      &&(j==(l+3)))  && A[k-2][l+2]==0    && A[k-1][l+1]==0)
         || (((i==(k+3)) && (j==l-3))     && A[(k+2)][l-2]==0 && A[k+1][l-1]==0)
         ||(((i==(k+3))  &&(j==l+3))      && A[(k+2)][l+2]==0 && A[k+1][l+1]==0))
        )
        )




         {
          A[vali2][valj2]=A[vali1][valj1];
          A[vali1][valj1]=0;
          B[vali2][valj2]=B[vali1][valj1];
          B[vali1][valj1]=0;
          pou=2;
          dessin(pou);
         }




        if((C[0]==0)&&(C[1]==0)&& (C[2]!=0)&&(C[3]!=0) &&(C[4]!=0)&&(C[5]!=0))
        {
            restri_triangle1(A, vali1,valj1, vali2, valj2,B);
            restri_carre1(A, vali1,valj1, vali2, valj2,B);


        }

        if((C[2]==0)&&(C[3]==0)&&(C[0]!=0)&&(C[1]!=0) &&(C[4]!=0)&&(C[5]!=0))
        {
            restri_cercle1(A, vali1,valj1, vali2, valj2,B);
            restri_carre1(A, vali1,valj1, vali2, valj2,B);

        }

        if ((C[4]==0)&&(C[5]==0)&&(C[2]!=0)&&(C[3]!=0) &&(C[0]!=0)&&(C[1]!=0))
        {
            restri_cercle1(A, vali1,valj1, vali2, valj2,B);
            restri_triangle1(A, vali1,valj1,vali2, valj2,B);

        }

        if ((C[0]==0 )&&(C[1]==0)&&(C[2]==0)&&(C[3]==0)&&(C[4]!=0)&&(C[5]=0))
        {
            restri_carre1(A, vali1,valj1, vali2, valj2,B);

        }

        if ((C[0]==0)&&(C[1]==0)&&(C[4]==0)&&(C[5]==0)&& (C[2]!=0)&&(C[3]!=0))
        {
            restri_triangle1(A, vali1,valj1, vali2, valj2,B);



        }

        if ((C[2]==0)&&(C[3]==0)&&(C[4]==0)&&(C[5]==0)&& (C[0]!=0)&&(C[1]!=0))

        {
            restri_cercle1(A, vali1,valj1, vali2, valj2,B);


        }

        else if (
                 ((C[0]==0)&&(C[1]!=0)&&(C[2]!=0)&&(C[3]!=0)&&(C[4]!=0)&&(C[5]!=0))||
                ((C[1]==0)&&(C[0]!=0)&&(C[2]!=0)&&(C[3]!=0)&&(C[4]!=0)&&(C[5]!=0))||
                ((C[2]==0)&&(C[0]!=0)&&(C[1]!=0)&&(C[3]!=0)&&(C[4]!=0)&&(C[5]!=0))||
                 ((C[3]==0)&&(C[0]!=0)&&(C[1]!=0)&&(C[2]!=0)&&(C[4]!=0)&&(C[5]!=0))||
                 ((C[4]==0)&&(C[0]!=0)&&(C[1]!=0)&&(C[2]!=0)&&(C[3]!=0)&&(C[5]!=0))||
                 ((C[5]==0)&&(C[0]!=0)&&(C[1]!=0)&&(C[2]!=0)&&(C[3]!=0)&&(C[4]!=0))
                 )


         {
             restri_carre1(A, vali1,valj1, vali2, valj2,B);
             restri_triangle1(A, vali1,valj1, vali2, valj2,B);
             restri_cercle1(A, vali1,valj1, vali2, valj2,B);

         }



 }



void restri_pyramide2(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16],int D[5])
 {
    int i,j,k,l;
    i=vali2;
    j=valj2;
    k=vali1;
    l=valj1;



     if(
        (D[0]!=0)&&(D[1]!=0)&&(D[2]!=0)&&(D[3]!=0)&&(D[4]!=0)&&(A[vali2][valj2]==0) && pou==2 &&

        ((( (i==k-1) && (j==l))||((i==k+1)&&(j==l))
         || ((i==k) && (j==l-1))|| ((i==k )&& (j==l+1))
         )
         ||


         (((i==k)        && (j==(l+2))) && (A[k][(l+1)]==0))
         ||(((i==k)      &&(j==(l-2)))  && (A[k][l-1]==0  ) )
         ||(((i==(k+2))  && (j==l))     && (A[(k+1)][l]==0) )
         ||(((i==(k-2))  &&(j==l))      && (A[(k-1)][l]==0 ))

         ||


         ((((i==k)        && (j==(l+3))) && A[k][(l+1)]==0    && A[k][l+2]==0)
         ||(((i==k)      &&(j==(l-3)))  && A[k][l-1]==0    && A[k][l-2]==0)
         || (((i==(k+3)) && (j==l))     && A[(k+1)][l]==0 && A[k+2][l]==0)
         ||(((i==(k-3))  &&(j==l))      && A[(k-1)][l]==0 && A[k-2][l]==0))

         ||

         (((i==k-1) && (j==l-1))||((i==k+1)&&(j==l-1))
         ||((i==k+1) && (j==l+1))||((i==k-1 )&& (j==l+1)))

         ||



         (
         (((i==k-2)        && (j==(l+2))) && A[k-1][(l+1)]==0 )
         ||(((i==k+2)      &&(j==(l-2)))  && A[k+1][l-1]==0   )
         || (((i==(k-2)) && (j==l-2))     && A[(k-1)][l-1]==0 )
         ||(((i==(k+2))  &&(j==l+2))      && A[(k+1)][l+1]==0 )
          )
         ||
         ((((i==k-3)        && (j==(l-3))) && A[k-2][(l-2)]==0    && A[k-1][l-1]==0)
         ||(((i==k-3)      &&(j==(l+3)))  && A[k-2][l+2]==0    && A[k-1][l+1]==0)
         || (((i==(k+3)) && (j==l-3))     && A[(k+2)][l-2]==0 && A[k+1][l-1]==0)
         ||(((i==(k+3))  &&(j==l+3))      && A[(k+2)][l+2]==0 && A[k+1][l+1]==0))
        )
        )




         {
          A[vali2][valj2]=A[vali1][valj1];
          A[vali1][valj1]=0;
          B[vali2][valj2]=B[vali1][valj1];
          B[vali1][valj1]=0;
          pou=1;
          dessin(pou);
         }




        else if((D[0]==0)&&(D[1]!=0)&&(D[2]!=0)&&(D[3]!=0)&&(D[4]!=0))
        {
            restri_triangle1(A, vali1,valj1, vali2, valj2,B);
            restri_carre1(A, vali1,valj1, vali2, valj2,B);

        }

        else if((D[1]==0)&&(D[2]==0))
        {
            restri_cercle1(A, vali1,valj1, vali2, valj2,B);
            restri_carre1(A, vali1,valj1, vali2, valj2,B);

        }

        if ((D[4]==0)&&(D[5]==0))
        {
            restri_cercle1(A, vali1,valj1, vali2, valj2,B);
            restri_triangle1(A, vali1,valj1, vali2, valj2,B);

        }

        if ((D[0]==0)&&(D[1]==0)&&(D[2]==0))
        {
            restri_carre1(A, vali1,valj1, vali2, valj2,B);


        }

        else if ((D[0]==0)&&(D[3]==0)&&(D[4]==0))
        {
            restri_triangle1(A, vali1,valj1, vali2, valj2,B);



        }

        else if ((D[1]==0)&&(D[2]==0)&&(D[3]==0)&&(D[4]==0))

        {
            restri_cercle1(A, vali1,valj1, vali2, valj2,B);

        }

        else if (

                ((D[1]==0)&&(D[0]!=0)&&(D[2]!=0)&&(D[3]!=0)&&(D[4]!=0))||
                ((D[2]==0)&&(D[0]!=0)&&(D[1]!=0)&&(D[3]!=0)&&(D[4]!=0))||
                ((D[3]==0)&&(D[0]!=0)&&(D[1]!=0)&&(D[2]!=0)&&(D[4]!=0))||
                ((D[4]==0)&&(D[0]!=0)&&(D[1]!=0)&&(D[2]!=0)&&(D[3]!=0))
                 )


               {
                restri_carre1(A, vali1,valj1, vali2, valj2,B);
                restri_triangle1(A, vali1,valj1, vali2, valj2,B);
                restri_cercle1(A, vali1,valj1, vali2, valj2,B);

               }


 }
