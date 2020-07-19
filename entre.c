#include "ok.h"

void entre()
{ int X,Y,i;
    readimagefile("Arithmomachie_main4353.jpg",0,0,getmaxx(),getmaxy());

        delay(80);
        readimagefile("Loading_page1.jpg",0,0,getmaxx(),getmaxy());
        delay(20);



    readimagefile("Loading_page12.jpg",0,0,getmaxx(),getmaxy());


            // rectangle(799,642,1189,686);
          for(i=800;i<=1189;i++)
          {
              rectangle(799,642,i,686);
              setfillstyle(SOLID_FILL,COLOR(125,191,9));
            floodfill(800,642,WHITE);
            delay(10);
          }
              readimagefile("Loading_page123.jpg",0,0,getmaxx(),getmaxy());



          getch();




}
