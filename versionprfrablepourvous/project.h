#ifndef PROJECT_H
#define PROJECT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// extern const char grille[20][20];
//#define sansvoid   //alloc dyn avec pointeur renvoye par return
typedef struct cases
{
  unsigned char values;
  int etat;
} Cases;

Cases *    putpoint(int sizex, int sizey);

Cases * putbomber(Cases * grille, int NumberOfBomber);

void printgrille(Cases *grille);

Cases * choosepoint(Cases *grille);
// grille[x][y].values = '@';

#endif
