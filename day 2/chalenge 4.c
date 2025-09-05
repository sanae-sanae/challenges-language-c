#include <stdio.h>
int main() {
    int tab[5]; 
    int i, max;
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    max = tab[0];
    for (i = 1; i < 5; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    printf("Le plus grand élément est %d\n", max);

    return 0;
}