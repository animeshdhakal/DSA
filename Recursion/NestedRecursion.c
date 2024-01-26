#include <stdio.h>

int fun(int n) {
    if(n > 10) {
        return n - 5;
    }else{
        return fun(fun(n+10));
    }
}

int main() {
    int a = 1;
    printf("%d\n", fun(a));
    return 0;
}
