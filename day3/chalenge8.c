#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // convertir en minuscule
        }
        i++;
    }
    printf("Minuscules: %s", str);

    return 0;
}
