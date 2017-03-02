#include "project.h"

int   main(void)
{
  Cases *g = NULL;
  g = putpoint( 19, 19);

  if(g != NULL)
  {
    g = putbomber(g, 9);
    printgrille(g);
    choosepoint(g);
  }

  return 0;
}

// alternate main, made for the alpha.

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
