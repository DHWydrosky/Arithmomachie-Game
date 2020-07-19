#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#define CARRE 1
#define TRIANGLE 2
#define CERCLE 3
#define PYRAMIDE 4
extern int A[][16];
extern int B[][16];
extern int C[6];
extern int D[5];
void triangle1(int xt, int yt);
void triangle2 (int xt,int yt);
void rectangle(int left, int top, int right, int bottom);
void cercle1(int xt, int yt);
void cercle2(int xt, int yt);
void carre1 (int xt,int yt);
void carre2 (int xt,int yt);
void pyra1(int xt,int yt);
void pyra2(int xt,int yt);
void board ();
void menu(int A[][16],int B[][16],int C[6],int D[5]);
void sortir(int A[][16],int B[][16],int C[6],int D[5]);
void controle(int A[][16],int B[][16],int C[6],int D[5]);
void instruction(int A[][16],int B[][16],int C[6],int D[5]);
void restri_carre1(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16]);
void restri_triangle1(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16]);
void restri_cercle1(int A[][16],int vali1,int valj1, int vali2,int valj2, int B[][16]);
void restri_carre2(int A[][16],int vali1,int valj1, int vali2,int valj2);
void restri_triangle2(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16]);
void restri_cercle2(int A[][16],int vali1,int valj1, int vali2,int valj2);
void restri_pyramide1(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16],int C[6]);
void restri_pyramide2(int A[][16],int vali1,int valj1, int vali2,int valj2,int B[][16],int D[5]);
void deplace_pion(int A[][16],int B[][16],int C[6],int D[5]);
void place_pion(int A[][16],int B[][16]);
void matrice_initial(int A[][16],int B[][16],int C[6],int D[5]);
void restriction(int A[][16], int vali1,int valj1, int vali2, int valj2,int B[][16],int C[6],int D[5]);
void blocage_cercle1( int A[][16],int B[][16],int vali1,int valj1);
void blocage_cercle2( int A[][16],int B[][16],int vali1,int valj1);
void blocage_triangle1( int A[][16],int B[][16],int vali1,int valj1);
void blocage_triangle2( int A[][16],int B[][16],int vali1,int valj1);
void blocage_carre1( int A[][16],int B[][16],int vali1,int valj1);
void blocage_carre2( int A[][16],int B[][16],int vali1,int valj1);
int bloke( int A[][16],int B[][16],int vali2,int valj2);
void Afficher_PyramideC(int C[6]);
void Afficher_PyramideD(int D[5]);
void apparition_pyramide(int A[][16], int B[][16],int C[6],int D[5],int i,int j);
void principe (int A[][16],int B[][16],int C[6],int D[5]);
int foo (int A[][16],int B[][16],int C[6],int D[5]);
void entre();
void prise (int A[][16],int B[][16],int C[6],int D[5]);
void dessin (int pou);
void tri (int A[][16],int B[][16],int C[6],int D[5]) ;
void ce(int A[][16],int B[][16],int C[6],int D[5]);
void ca (int A[][16],int B[][16],int C[6],int D[5]);
void py (int A[][16],int B[][16],int C[6],int D[5]);
void BLOCAGE(int A[][16],int B[][16],int C[6],int D[5]);
void Game_Over1();

