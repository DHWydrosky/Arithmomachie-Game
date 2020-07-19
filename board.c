
#include"ok.h"
int main()

{
    initwindow(getmaxwidth( ), getmaxheight( ));

    cleardevice();
    int A[8][16];
    int B[8][16];
    int C[6];
    int D[5];
    int i,j;
     entre();
    menu(A,B,C,D);
   setcolor(RGB(255,255,255));
    setlinestyle(0,0,1);







    board();
    matrice_initial(A,B,C,D);
    place_pion(A,B);
    deplace_pion(A,B,C,D);
    apparition_pyramide(A,B,C,D,i,j);
    Game_Over1();

    getch();
    closegraph();

}



