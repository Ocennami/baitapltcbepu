#include <stdio.h>
#include <math.h>

int main()
{
	double a, B;
	printf("nhap a=");
	scanf("%lf", &a);
	printf("\n"); 
	printf("a=%8.4f\n", a);
	
	B=5*pow(a,3)-cos(3*pow(a,2));
	printf("Gia tri bieu thuc B=%f\n", B);
	return 0;
} 
