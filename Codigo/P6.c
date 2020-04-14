#include <stdio.h>
#include <stdlib.h> 
#define NULL 0

int main() {  
  int *data = (int *)malloc(100*sizeof(int));  
  free(data);
  printf("%i",*(data + 47)); 
  data = NULL;
  return 0;
}
