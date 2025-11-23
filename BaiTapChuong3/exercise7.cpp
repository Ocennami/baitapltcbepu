#include <stdio.h>
#include <math.h>

int main()
{
	double x, B;
	printf("nhap so thuc x: ");
	scanf("%lf", &x);
	printf("\n");
	
	if (x==0)
	{
		B = 0;
	}
	else if (x < 0)
	{
		B = x*x+5*x+5; 
	}
	else
	{
		B = x*x-5*x-5;
	}
	printf("Bieu thuc B co gia tri la: %.2lf", B);
	return 0; 
}
