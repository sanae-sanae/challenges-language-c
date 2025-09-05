#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Somme = %d\n", sum);
    return 0;
}
