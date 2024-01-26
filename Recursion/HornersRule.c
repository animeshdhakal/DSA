#include <stdio.h>

float e(int x, int n) {
  static float s = 1;
  
  if (n == 0) {
    return s;
  }

  s = 1 + (float)x/n * s; 

  return e(x, n-1);
}

int main() {
  printf("%f\n", e(1, 5));
  return 0;
}
