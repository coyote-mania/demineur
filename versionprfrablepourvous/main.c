#include "project.h"

int   main(void)
{
  Cases *g = NULL;
  g = putpoint( 20, 20);

  if(g != NULL)
  {
    g = putbomber(g, 9);
    printgrille(g);
  }

  return 0;
}
