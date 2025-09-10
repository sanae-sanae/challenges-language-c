#include <stdio.h>

int main() {
    char str[100], res[100];
    int i = 0, j = 0;

    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            res[j++] = str[i];
        }
        i++;
    }
    res[j] = '\0';

    printf("Sans espaces: %s", res);

    return 0;
}
