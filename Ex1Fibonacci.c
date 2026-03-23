#include <stdio.h>

int fib_recursiv(int n) {
    if (n <= 1) return n;
    return fib_recursiv(n - 1) + fib_recursiv(n - 2);
}


long fib_iterativ(int n) {
    long a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        temp = a;
        a = b;
        b = temp + b;
    }
    return a;
}

int main() {
    int n = 30;
    printf("Fibonacci(%d) Recursiv: %d\n", n, fib_recursiv(n));
    printf("Fibonacci(%d) Iterativ: %ld\n", n, fib_iterativ(n));
    return 0;
}
