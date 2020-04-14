#include <stdlib.h> 
#define NULL 0

int main() {  
  int *data = (int *)malloc(100*sizeof(int));  
  int *funny_value=(data + 84);
  free(funny_value);
  data = NULL;
  return 0;
}
