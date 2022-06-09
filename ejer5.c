#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a[100];
  int min = 100;
  int max = 0;
  double prom = 0.0;
  for (int i = 0; i < 100; i++) {
    int r = rand() % 101;
    a[i] = r;
    if (r < min) {
      min = r;
    }
      if (r > max) {
        max = r;
      }
    printf("%d, ", a[i]);
    printf("\n");
    }
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
  }
