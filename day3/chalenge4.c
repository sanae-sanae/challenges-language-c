#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, egal = 1;

    printf("Entrez la premiere chaine: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Entrez la deuxieme chaine: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            egal = 0;
            break;
        }
        i++;
    }

    if (egal)
        printf("Les chaines sont egales.\n");
    else
        printf("Les chaines sont differentes.\n");

    return 0;
}
