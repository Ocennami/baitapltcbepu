#include <stdio.h>

int main()
{
	double a, b;
	printf("Nhap a=");
	scanf("%lf", &a);
	printf("\n"); 
	
	printf("Nhap b=");
	scanf("%lf", &b);
	printf("\n");
	
	printf("Cac so da nhap:\n");
	printf("a=%5.6f\n", a);
	printf("b=%12.6f\n", b);
	printf("a+b=%f\n", a + b);
	printf("a-b=%f\n", a - b);
	printf("a*b=%f\n", a * b);
	printf("a/b=%f\n", a / b);
	return 0;
}

