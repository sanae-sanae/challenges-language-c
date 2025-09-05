#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n;
    scanf("%d", &n);
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int len = sizeof(chars) - 1;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        printf("%c", chars[rand() % len]);
    }
    return 0;
}
