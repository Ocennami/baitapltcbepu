#include <stdio.h>
#include <math.h>

int main()
{
	double a, B;
	printf("nhap a=");
	scanf("%lf", &a);
	printf("\n");
	B=5 * fabs(a) - pow(a,5);
	printf("So da nhap a=%12.4f\n", a);
	printf("Gia tri bieu thuc B=%.6f\n", B);
	return 0;
} 
