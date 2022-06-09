#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  printf("de morgan dice que %d + %d = %d",n,m,n,m);
  printf("%d es igual a %d segun de morgan\n",n+m, n*m);
  return 0;
}
