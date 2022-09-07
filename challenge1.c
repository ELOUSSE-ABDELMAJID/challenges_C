#include <stdio.h>

int main()
{
	char nom[25], prenom[25], sexe[10];
	int age;
	long tele;

	printf("Donner votre Nom :\n");
	scanf("%s", nom);
	printf("Donner votre Prenom :\n");
	scanf("%s", prenom);
	printf("Donner votre Sexe :\n");
	scanf("%s", sexe);
	printf("Donner votre Age :\n");
	scanf("%d", &age);
	printf("Donner votre Numero de telephone :\n");
	scanf("%ld", &tele);
	printf("\n--> Votre Personnel information <--\n\n");
	printf("Nom : %s \n", nom);
	printf("Prenom : %s \n", prenom);
	printf("Sexe : %s \n", sexe);
	printf("Age : %d \n", age);
	printf("Telephone : %ld \n", tele);
	return (0);
}
