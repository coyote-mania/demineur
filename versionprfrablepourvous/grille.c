#include "project.h"
Cases *    putpoint(int sizex, int sizey)
{
  int x;
  int y;

  x = 0;
  y = 0;


  Cases *grille = (Cases*) calloc( sizex*sizey, sizeof (Cases) );
  while(y <= 20)
  {
    while(x <= 20)
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
  int yprint;

  yprint= 1;
  x = 0;
  y = 0;

printf(" 0 1 2 3 4 5 6 7 8 9 1011121314151617181920\n");
  while(y < 20)
  {
    printf("%2d ", yprint);
    while(x < 20)
    {
      if((*(grille+20*y+x)).etat == 0)
        printf("%c ", (*(grille+20*y+x)).values );
      else
        printf("# ");
      x++;
    }
    x = 0;
    y++;
    yprint++;
    putchar ('\n');
  }
}

Cases * choosepoint(Cases *grille)
{
  int x;
  int y;
  char xget[3];
  char yget[3];
  int verif;
  verif = 1;

  while(verif == 1)
  {
    printf("Choisir la case x : ");
    scanf("%d", &x);
    getchar();
    printf("Choisir la case y :");
    scanf("%d", &y);
    putchar('\n');

    if(x > 20 || y > 20)
      verif = 1;
    else
      verif = 0;
    }
    printf("vous avez choisit la case en x %d et en y %d", x,y);
    (*(grille+20*y+x)).etat = 1;
    return grille;

  }
