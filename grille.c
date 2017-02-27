
#include "project.h"

void    putpoint(Cases **grille)
{
  int x;
  int y;

  x = 0;
  y = 0;

  while(y < 19)
  {
    while(x < 19)
    {
      *(*(grille+20*y)+x).values = '@';
      *(*(grille+20*y)+x).etat = 0;
      x++;
    }
    x = 0;
    y++;
  }
}


int   main()
{
  Cases grille[20][20];


  putpoint(grille);
  return 0;
}
