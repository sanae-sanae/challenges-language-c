#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[100];

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prénom : ");
    scanf("%s", prenom);

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre sexe : ");
    scanf("%s", sexe);

    printf("Entrez votre adresse email : ");
    scanf("%s", email);

    printf("\n--- Vos Informations ---\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d ans\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Email : %s\n", email);

    return 0;
}