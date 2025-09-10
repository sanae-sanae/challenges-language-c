#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;

    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') i++;
    if (str[i-1] == '\n') i--; 

    printf("Chaine inversee: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%c", str[j]);
    }
    printf("\n");

    return 0;
}
