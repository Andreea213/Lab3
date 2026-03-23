#include <stdio.h>

void afisare_vector(int v[], int n, int i) {
    if (index == n) return; 
    printf("%d ", v[i]);
    afisare_vector(v, n, i + 1);
}

int main() {
    int v[] = {10, 20, 30, 40, 50};
    afisare_vector(v, 5, 0);
    return 0;
}
