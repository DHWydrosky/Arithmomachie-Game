#include "ok.h"
//int pou=1, vali1,valj1,vali2,valj2;
//int B[8][16],A[8][16];
/*((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )

                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2+3]==PYRAMIDE)&&(B[vali2-2][valj2+3]==0)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-3][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))*/

/*

                //CARRRRRREEEEEEEEEEEEEE PPPPPYYYYYYYYRRRRRRRAMMMMIDE
  if ((B[vali1][valj1]==CARRE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
     (((vali2==vali1-3)&&(valj2==valj1)&&(B[vali1-2][valj1]==0)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )



                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-3][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+2][valj2+2]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))

           ||((vali2==vali1+3)&&(valj2==valj1)&&(B[vali1+2][valj1]==0)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&& (
                                                                      ((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )




                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )

                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+2][valj2+2]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2-3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-3)&&(B[vali1][valj2-1]==0)&&(B[vali1][valj1-2]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )



                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )



                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )


                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+2][valj2+2]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))
               ||((vali2==vali1)&&(valj2==valj1+3)&&(B[vali1][valj1+2]==0)&&(B[vali1][valj1+1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )



                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )




                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )

                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+2][valj2+2]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))
        )
        )



          {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2;  dessin(pou);
        }


//TRIAAAANNNNNGLLLLEEE PPPPPPYYYYYRAAAAAMIDE
 //arithm triangle positif et cercle
   if((B[vali1][valj1]==TRIANGLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
         (((vali2==vali1-2)&&(valj2==valj1)&&(B[vali1-1][valj1]==0)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )



                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2+3]==PYRAMIDE)&&(B[vali2-2][valj2+3]==0)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-3][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))

           ||((vali2==vali1+2)&&(valj2==valj1)&&(B[vali1+1][valj1]==0)&&(A[vali2][valj2]<0)&& (
                                                                      ((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )




                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )

                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+2][valj2+2]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2-3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))
           ||((vali2==vali1)&&(valj2==valj1-2)&&(B[vali1][valj1-1]==0)&&(A[vali2][valj2]<0)&&  (((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )



                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )



                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )


                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2+3]==PYRAMIDE)&&(B[vali2-2][valj2+3]==0)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-3][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      )))
               ||((vali2==vali1)&&(valj2==valj1+2)&&(B[vali1][valj1+1]==0)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )



                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )




                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )

                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2-2][valj2+2]==0)(B[vali2-1][valj2+1]==0)&&(A[vali2-3][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+2][valj2+3]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2+3])==abs(A[vali2][valj2]))) )


                                                                      ))
        )

     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou==2;
     }

     //CERCLE PYAMIDUE
        if ((B[vali1][valj1]==CERCLE)&&(A[vali1][valj1]>0) &&(pou==1)
         &&
         (((vali2==vali1-1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&&(((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )

                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )




                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-1][valj2+1]==PYRAMIDE)&&(A[vali2-1][valj2+1]>0)&&
                                                                     ((abs(A[vali2-1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2+1])==abs(A[vali2][valj2]))) )

                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )




                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-2][valj2+2]==PYRAMIDE)&&(B[vali2-1][valj2+1]==0)&&(A[vali2-2][valj2+2]>0)&&
                                                                     ((abs(A[vali2-2][valj2+2])+abs(A[vali1[vali2-3][valj2-3]][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2+2])==abs(A[vali2][valj2]))) )

                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2-3][valj2+3]==PYRAMIDE)&&&&(B[vali2+2][valj2+2]==0)(B[vali2+1][valj2+1]==0)&&(A[vali2-2][valj2+3]>0)&&
                                                                     ((abs(A[vali2-3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+2][valj2+2]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2+3])==abs(A[vali2][valj2]))) )


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
           ||((vali2==vali1+1)&&(valj2==valj1-1)&&(A[vali2][valj2]<0)&& (((B[vali2-2][valj2]==PYRAMIDE)&&(B[vali2-1][valj2]==0)&&(A[vali2-2][valj2]>0)&&
                                                                     ((abs(A[vali2-2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      PYRADIME||(abs(abs(A[vali2-2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-2]==PYRADIME)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-2]>0)&&
                                                                     ((abs(A[vali2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-2])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+2]==PYRADIME)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2]>0)&&
                                                                     ((abs(A[vali2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+2][valj2]==PYRADIME)&&(B[vali2+1][valj2]==0)&&(A[vali2+2][valj2]>0)&&
                                                                     ((abs(A[vali2+2][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2-1][valj2]==PYRAMIDE)&&(A[vali2-1][valj2]>0)&&
                                                                     ((abs(A[vali2-1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2][valj2-1]==PYRADIME)&&(A[vali2][valj2-1]>0)&&
                                                                     ((abs(A[vali2][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-1])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+1]==PYRADIME)&&(A[vali2][valj2+1]>0)&&
                                                                     ((abs(A[vali2][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+1])==abs(A[vali2][valj2]))) )

                                                    ||((B[vali2+1][valj2]==PYRADIME)&&(A[vali2+1][valj2]>0)&&
                                                                     ((abs(A[vali2+1][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2-3][valj2]==PYRAMIDE)&&(B[vali2-2][valj2]==0)&&(B[vali2-1][valj2]==0)&&(A[vali2-3][valj2]>0)&&
                                                                     ((abs(A[vali2-3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2])==abs(A[vali2][valj2]))) )


                                                                      ||((B[vali2][valj2-3]==PYRAMIDE)&&(B[vali2][valj2-2]==0)&&(B[vali2][valj2-1]==0)&&(A[vali2][valj2-3]>0)&&
                                                                     ((abs(A[vali2][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2-3])==abs(A[vali2][valj2]))) )

                                                                     ||((B[vali2][valj2+3]==PYRAMIDE)&&(B[vali2][valj2+2]==0)&&(B[vali2][valj2+1]==0)&&(A[vali2][valj2+3]>0)&&
                                                                     ((abs(A[vali2][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2][valj2+3])==abs(A[vali2][valj2]))) )

                                                            ||((B[vali2+3][valj2]==PYRAMIDE)&&(B[vali2+2][valj2]==0)&&(B[vali2+1][valj2]==0)&&(A[vali2+3][valj2]>0)&&
                                                                      ((abs(A[vali2+3][valj2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2])==abs(A[vali2][valj2]))) )

                                                                      ||(B[vali2-1][valj2-1]==PYRAMIDE)&&(A[vali2-1][valj2-1]>0)&&
                                                                     ((abs(A[vali2-1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-1][valj2-1])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-1][valj2-1])==0)) )

                                                                    ||((B[vali2+1][valj2+1]==PYRAMIDE)&&(A[vali2+1][valj2+1]>0)&&
                                                                     ((abs(A[vali2+1][valj2+1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2+1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2+1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2+1])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+1][valj2-1]==PYRAMIDE)&&(A[vali2+1][valj2-1]>0)&&
                                                                     ((abs(A[vali2+1][valj2-1])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+1][valj2-1])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+1][valj2-1])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+1][valj2-1])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+1][valj2-1])==abs(A[vali2][valj2]))) )



                                                                    || (B[vali2-2][valj2-2]==PYRAMIDE)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-2][valj2-2]>0)&&
                                                                     ((abs(A[vali2-2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-2][valj2-2])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                    ||((B[vali2+2][valj2+2]==PYRAMIDE)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+2][valj2+2]>0)&&
                                                                     ((abs(A[vali2+2][valj2+2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2+2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])*ab[vali2+2][valj2-2]s(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2+2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2+2])==abs(A[vali2][valj2]))) )



                                                                      ||((B[vali2+2][valj2-2]==PYRAMIDE)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+2][valj2-2]>0)&&
                                                                     ((abs(A[vali2+2][valj2-2])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+2][valj2-2])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+2][valj2-2])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+2][valj2-2])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+2][valj2-2])==abs(A[vali2][valj2]))) )



                                                                || (B[vali2-3][valj2-3]==PYRAMIDE)&&(B[vali2-2][valj2-2]==0)&&(B[vali2-1][valj2-1]==0)&&(A[vali2-3][valj2-3]>0)&&
                                                                     ((abs(A[vali2-3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2-3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2-3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2-3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2])&&(abs(A[vali2-3][valj2-3])%abs(A[vali1][valj1])==0))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2-3][valj2-3])==abs(A[vali2][valj2])&&(abs(A[vali1][valj1])/abs(A[vali2-2][valj2-2])==0)) )

                                                                      ||((B[vali2+3][valj2-3]==PYRAMIDE)&&(B[vali2+2][valj2-2]==0)&&(B[vali2+1][valj2-1]==0)&&(A[vali2+3][valj2-3]>0)&&
                                                                     ((abs(A[vali2+3][valj2-3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2-3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2-3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2-3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2-3])==abs(A[vali2][valj2]))) )

                                                                      ||((B[vali2+3][valj2+3]==PYRAMIDE)&&(B[vali2+3][valj2+3]==0)&&(B[vali2+1][valj2+1]==0)&&(A[vali2+3][valj2+3]>0)&&
                                                                     ((abs(A[vali2+3][valj2+3])+abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(abs(A[vali2+3][valj2+3])-abs(A[vali1][valj1]))==abs(A[vali2][valj2]))
                                                                       ||(abs(A[vali2+3][valj2+3])*abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali2+3][valj2+3])/abs(A[vali1][valj1])==abs(A[vali2][valj2]))
                                                                      ||(abs(A[vali1][valj1])/abs(A[vali2+3][valj2+3])==abs(A[vali2][valj2]))) ))



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
        )))

     {
         A[vali2][valj2]=A[vali1][valj1];
        A[vali1][valj1]=0;
        B[vali2][valj2]=B[vali1][valj1];
        B[vali1][valj1]=0;
        pou=2;  dessin(pou);
     }

*/
