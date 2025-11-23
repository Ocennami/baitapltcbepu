#include <stdio.h>

int main()
{
	double a, b, x;
	printf("nhap a:");
	scanf("%lf", &a);
	printf("nhap b:");
	scanf("%lf", &b);
	printf("\n");
	if (a==0)
	{
		if (b!=0)
			printf("phuong trinh vo nghiem");
		else 
			printf("phuong trinh co vo so nghiem");
	} 
	else
	{
		x=-b/a;
		printf("phuong trinh co nghiem x=%lf", x);
	}
	return 0;
} 
