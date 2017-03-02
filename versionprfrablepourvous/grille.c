#include "project.h"
Cases *    putpoint(int sizex, int sizey)
{
  int x;
  int y;

  x = 0;
  y = 0;


  Cases *grille = (Cases*) calloc( sizex*sizey, sizeof (Cases) );
  while(y < 19)
  {
    while(x < 19)
    {
      (*(grille+20*y+x)).values = '#';
      (*(grille+20*y+x)).etat = 0;
	//	printf("case %d %d = %c \t",y,x,(*(grille+20*y+x)).values);
      x++;
    }
 //   putchar('\n');
    x = 0;
    y++;
  }
    return grille; //renvoi grille (adresse)
}


Cases * putbomber(Cases * grille, int NumberOfBomber)
{
  int x;
  int y;
  int count;

  x = 0;
  y = 0;
  count = 0;

  srand(time(NULL));

  while(count <= NumberOfBomber)
  {

    x =  rand() % 20 + 1;
    y =  rand() % 20 + 1;
    if((*(grille+20*y+x)).values != '@')
    {
      (*(grille+20*y+x)).values = '@';
      count++;
    }
  }
  return grille;
}


void printgrille(Cases *grille)
{
  int x;
  int y;

  x = 0;
  y = 0;

  while(y < 19)
  {
    while(x < 19)
    {
      if((*(grille+20*y+x)).etat == 0)
        printf("%c", (*(grille+20*y+x)).values );
      putchar('#');
      x++;
    }
    x = 0;
    y++;
    putchar ('\n');
  }
}



 /* int   main()
{
  Cases *g = NULL;
  g = putpoint( 20, 20);

  if(g != NULL){
        g = putbomber(g, 9);
         printf("adresse plateau %4X\n",(int )g);
	for( int j=0;j < 19; j++)
	{
		for( int i=0;i < 19; i++)
		printf("case %d %d = %c \t",j,i,(*(g+20*j+i)).values);

		printf("\n");
	}
  free(g);
  }
 return 0;
}
*/
