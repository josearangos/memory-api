#include <stdlib.h> 
#define NULL 0

int main() {  
  int *data = (int *)malloc(100*sizeof(int));
  data[100]=0;
  free(data);
  data = NULL;
  return 0;
}
