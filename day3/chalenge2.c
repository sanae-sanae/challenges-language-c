#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        i++;
    }
    printf("Longueur = %d\n", i - 1);
    return 0;
}
