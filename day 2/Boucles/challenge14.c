#include <stdio.h>
int main() {
    char* jours[] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
    int choix;
    for (int i = 0; i < 7; i++) printf("%d. %s\n", i + 1, jours[i]);
    scanf("%d", &choix);
    for (int i = choix - 1; i < 7; i++) printf("%s\n", jours[i]);
    return 0;
}
