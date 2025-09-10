#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convertir en majuscule
        }
        i++;
    }
    printf("Majuscules: %s", str);

    return 0;
}
