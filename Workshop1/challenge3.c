#include <stdio.h>

int main()
{
	float km;
    float mile;

	printf("--> Donner la distance en Mile :\n\n");
	scanf("%f", &mile);
    km =  mile*1.609; 
	printf("\n--> la distance en KM : \n\n");
	printf("%.2f \n", km);
	return (0);
}