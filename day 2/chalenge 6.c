#include <stdio.h>

int main() {
    int n, i, factor;
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Erreur: Le nombre d'éléments doit être positif.\n");
        return 1;
    }
    int tab[n];
    for (i = 0; i < n; i++) {
        printf("Entrez l'élément %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Entrez le facteur de multiplication: ");
    scanf("%d", &factor);
    for (i = 0; i < n; i++) {
        tab[i] *= factor;
    }
    printf("Tableau après multiplication par %d:\n", factor);
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    return 0;
}