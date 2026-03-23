#include <stdio.h>

void hanoi(int n, char sursa, char destinatie, char intermediar) {
    if (n == 1) {
        printf("Muta discul 1 de pe %c pe %c\n", sursa, destinatie);
        return;
    }
    hanoi(n - 1, sursa, intermediar, destinatie);
    printf("Muta discul %d de pe %c pe %c\n", n, sursa, destinatie);
    hanoi(n - 1, intermediar, destinatie, sursa);
}

int main() {
    hanoi(6, 'A', 'C', 'B');
    return 0;
}
