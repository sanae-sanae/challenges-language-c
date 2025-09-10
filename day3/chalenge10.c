#include <stdio.h>

int main() {
    char str[100], sub[50];
    int i, j, found;

    printf("Entrez la chaine principale: ");
    fgets(str, sizeof(str), stdin);
    printf("Entrez la sous-chaine: ");
    fgets(sub, sizeof(sub), stdin);

    // supprimer '\n'
    for (i = 0; str[i]; i++) if (str[i] == '\n') str[i] = '\0';
    for (i = 0; sub[i]; i++) if (sub[i] == '\n') sub[i] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        found = 1;
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            printf("Sous-chaine trouvee !\n");
            return 0;
        }
    }
    printf("Sous-chaine non trouvee.\n");

    return 0;
}
