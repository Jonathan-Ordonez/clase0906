#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int a[n];
  for (int i = 0; i < n; i++) {
    int r = rand() % m;
    a[i] = r;
    printf("%d,", a[i]);
  }
  return 0;
}
