#include <stdio.h>
#include <math.h>

int main()
{
	double a, B;
	printf("Nhap a=");
	scanf("%lf", &a);
	printf("\n");
	B=5*pow(a,3)-4*pow(a,2)+3*a-2; 
	printf("So da nhap a=%10.3f\n", a);
	printf("Gia tri bieu thuc B=%10.6f\n", B);
	return 0; 
} 

