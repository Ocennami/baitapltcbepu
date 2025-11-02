#include <stdio.h>
#include <math.h>

int main()
{
	double a, B;
	printf("nhap a=");
	scanf("%lf", &a);
	printf("\n");
	B=log(a*a) - tan(3*a);
	printf("So da nhap a=%8.2f\n", a);
	printf("Gia tri bieu thuc B=%.6f\n", B);
	return 0; 
} 
