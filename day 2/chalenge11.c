#include <stdio.h>

int main() {
    int n, oldVal, newVal;
    printf("Nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Valeur a remplacer: ");
    scanf("%d", &oldVal);
    printf("Nouvelle valeur: ");
    scanf("%d", &newVal);

    for (int i = 0; i < n; i++) {
        if (arr[i] == oldVal) arr[i] = newVal;
    }

    printf("Tableau modifie: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
