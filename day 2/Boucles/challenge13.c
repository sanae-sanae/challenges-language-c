#include <stdio.h>
int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        int p = n * i;
        printf("%d * %d = %d\n", n, i, p);
        s += p;
    }
    printf("Somme = %d", s);
    return 0;
}
