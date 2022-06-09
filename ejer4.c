#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  //int n = atoi(argv[1]);
  int a[100];
  double prom = 0.0;
  for (int i = 0; i < 100; i++) {
    int r = rand() % 101;
    a[i] = r;
    printf("%d, ", a[i]);
    prom += a[i];
  }
  printf("\n");
  printf("Promedio: %.2f\n", prom / 100);
  return 0;
}
