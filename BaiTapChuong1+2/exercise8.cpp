#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, B;
	printf("nhap a=");
	scanf("%lf", &a);
	printf("\n");
	
	printf("nhap b=");
	scanf("%lf", &b);
	printf("\n");
	
	printf("nhap c=");
	scanf("%lf", &c);
	printf("\n");
	
	printf("Cac so da nhap:\n");
	printf("a=%.2f\n", a);
	printf("b=%.3f\n", b);
	printf("c=%f\n", c);
	
	B=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
	printf("Gia tri bieu thuc B=%f\n", B);
	return 0;
} 
