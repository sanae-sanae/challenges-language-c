#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Entrez la premiere chaine: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Entrez la deuxieme chaine: ");
    fgets(str2, sizeof(str2), stdin);

    int i = 0, j = 0;
    while (str1[i] != '\0' && str1[i] != '\n') i++;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';

    printf("Chaine concatenee: %s", str1);
    return 0;
}
