#include <stdio.h>

int main() {
    char str[100];
    printf("Entrez une chaine: ");
    fgets(str, sizeof(str), stdin);  
    printf("Vous avez entre: %s", str);
    return 0;
}
