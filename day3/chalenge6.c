#include <stdio.h>

int main() {
    char str[100], c;
    int i = 0, count = 0;

    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);
    printf("Entrez un caractere: ");
    scanf("%c", &c);

    while (str[i] != '\0') {
        if (str[i] == c) count++;
        i++;
    }
    printf("'%c' apparait %d fois.\n", c, count);

    return 0;
}
