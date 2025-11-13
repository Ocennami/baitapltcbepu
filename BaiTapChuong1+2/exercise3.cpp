#include <stdio.h>
#include <math.h>

int main()
{
	int a; 
	double B;
	printf("nhap a=");
	scanf("%d", &a);
	printf("\n");

	printf("So da nhap a=%6d\n", a);
	B=sin(a)+sqrt(a);
	printf("Gia tri bieu thuc B=%f\n", B);
	return 0; 
}

