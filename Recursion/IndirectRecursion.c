#include <stdio.h>

void funA(int);
void funB(int);

void funB(int n) {
  if(n > 0){
    printf("%d\n", n);
    funA(n-1);
  }
}

void funA(int n) {
  if(n > 0){
    printf("%d\n", n);
    funB(n/2);
  }
}

int main() {
  int a = 8;
  funA(a);

  return 0;
}
