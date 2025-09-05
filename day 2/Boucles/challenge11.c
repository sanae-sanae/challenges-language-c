#include <stdio.h>
int main() {
    int n, c = 0, s = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        s += n;
        c++;
    }
    if (c > 0) printf("%.2f", (float)s / c);
    return 0;
}
