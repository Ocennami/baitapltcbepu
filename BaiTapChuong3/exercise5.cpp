#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	printf("nhap so thuc x: ");
	scanf("%lf", &x);
	printf("\n");
	
	if (x>=0)
	{
		printf("can bac hai cua %.2lf la: %.2lf", x, sqrt(x));
	}
	else
	{
		printf("x la so am khong co gia tri can bac hai");
	}
	return 0;
}
