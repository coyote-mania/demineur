
#include "project.h"

int    putpoint(Cases *grille, int sizex, int sizey)
{
  int x;
  int y;

  x = 0;
  y = 0;

  grille = calloc( sizex*sizey, sizeof Cases);

  while(y < 19)
  {
    while(x < 19)
    {
      (*(grille+20*y))+x.values = '@';
      (*(grille+20*y))+x.etat = 0;
      x++;
    }
    x = 0;
    y++;
  }
  if(grille != NULL)
    return 1;
  else
  {
    return 0;
  }
}


int   main()
{
  Cases *grille;


  printf("%d",putpoint(grille, 20, 20));

  free(grille);
  return 0;
}
