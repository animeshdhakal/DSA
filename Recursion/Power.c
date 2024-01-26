#include <stdio.h>

int power(int m, int n){
  if(n==0){
    return 1;
  }else{
    return power(m, n-1) * m;
  }
}

int main() {
  int m = 3;
  int n = 3;
  printf("%d\n", power(m, n));
  return 0;
}
