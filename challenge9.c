#include <stdio.h>
#include <math.h>

int main()
{
	double x1, x2, y1, y2;
    double distance;

    printf("Entrez les cordonnes du premier points : \n");
    scanf("%lf %lf",&x1,&x2);
    printf("Entrez les cordonnes du deuxieme points : \n");
    scanf("%lf %lf",&y1,&y2);
    distance = sqrt(pow((y1 - x1), 2) + pow((y2 - x2), 2));
    printf("La distance entre les deux points est : %lf\n" , distance);
	return (0);
}