#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, hoanvi;
	printf("nhap a=");
	scanf("%lf", &a);
	printf("\n");
	printf("nhap b=");
	scanf("%lf", &b);
	printf("\n");

	printf("Cac so da nhap:\n");
	printf("a=%5.2f\n", a);
	printf("b=%5.2f\n", b);

	hoanvi=a;
	a=b;
	b=hoanvi;
	printf("Cac so sau khi da hoan vi:\n");
	printf("a=%5.2f\n", a);
	printf("b=%5.2f\n", b);
	return 0;
} 
