#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Elements impairs: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) printf("%d ", arr[i]);
    }

    return 0;
}
