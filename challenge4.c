#include <stdio.h>

int main()
{
	int km;
    int mile;

	printf("--> Donner la distance en km :\n\n");
	scanf("%d", &km);
    mile =  km/1.609; 
	printf("\n--> la distance en Mile : \n\n");
	printf("%d \n", mile);
	return (0);
}