#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);

    for (int i = 0; i < n; i++) arr2[i] = arr1[i];

    printf("Original: ");
    for (int i = 0; i < n; i++) printf("%d ", arr1[i]);

    printf("\nCopie: ");
    for (int i = 0; i < n; i++) printf("%d ", arr2[i]);

    return 0;
}
