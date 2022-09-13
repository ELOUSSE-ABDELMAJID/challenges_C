#include <stdio.h>

struct student
{
    char matricule[20];
    char nom[25];
    int age;
    int note;
};

int main()
{
    struct student etudiant;

    printf("Entrer le numero de Matricule: \n");
    scanf("%s", etudiant.matricule);
    printf("Entrer le nom : \n");
    scanf("%s", etudiant.nom);
    printf("Entrer l'age : \n");
    scanf("%d", &etudiant.age);
    printf("Entrer la note : \n");
    scanf("%d", &etudiant.note);
    printf("----> Stdudent Information \n");
    printf("Le numero de Matricule : %s\n", etudiant.matricule);
    printf("Le Nom : %s\n", etudiant.nom);
    printf("L'age : %d\n", etudiant.age);
    printf("La Note : %d\n", etudiant.note);
    return (0);
}