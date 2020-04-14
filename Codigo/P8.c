#include <stdio.h>
#include <stdlib.h>

#define TAM1 1 
#define TAM2 50
#define TAM3 1

int main() {
  int *p;
  p = (int *)malloc(TAM1*sizeof(int));
  int *pp =p;
  printf("Ubicacion del apuntador tras el malloc: %p\n",p);
  int contador= TAM1;
  for (int i = 0; i < TAM2; i++) {
      if(i==contador) {
        contador+=1;
        p = (int *)realloc(p,(contador)*sizeof(int));
        pp=p+i;
      }

    *(pp ) = i + 1; // p[i] = 0
  }
  free(p);   
  p = NULL;
  pp=NULL;
  return 0;
}
