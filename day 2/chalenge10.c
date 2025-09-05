#include <stdio.h>

int main() {
    int n, x, found = 0;
    printf("Nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Element a rechercher: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }

    if (found) printf("Element trouvé!\n");
    else printf("Element non trouvé.\n");

    return 0;
}
