#include <stdio.h>

int main()
{
	float km;
    float mile;

	printf("--> Donner la distance en km :\n\n");
	scanf("%f", &km);
    mile =  km/1.609; 
	printf("\n--> la distance en Mile : \n\n");
	printf("%.2f \n", mile);
	return (0);
}