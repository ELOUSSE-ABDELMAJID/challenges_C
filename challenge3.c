#include <stdio.h>

int main()
{
	int km;
    int mile;

	printf("--> Donner la distance en Mile :\n\n");
	scanf("%d", &mile);
    km =  mile*1.609; 
	printf("\n--> la distance en KM : \n\n");
	printf("%d \n", km);
	return (0);
}