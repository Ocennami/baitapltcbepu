#include <stdio.h>
#include <math.h>

int main()
{
	int a; 
	double B;
	printf("nhap a=");
	scanf("%d", &a);
	printf("\n");
	B=sin(a)+sqrt(a);
	printf("So da nhap a=%6d\n", a);
	printf("Gia tri bieu thuc B=%.6f\n", B);
	return 0; 
}

