#include <stdio.h>

int main()
{
	double a, b, c, d, e, f, x, y, D, Dx, Dy;
	printf("nhap a, b, c:");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("nhap d, e, f:");
	scanf("%lf %lf %lf", &d, &e, &f);
	printf("\n");
	D=a*e-b*d;
	Dx=c*e-b*f;
	Dy=a*f-c*d;
	if (D != 0)
	{
		x=Dx/D;
		y=Dy/D;
		printf("He phuong trinh co nghiem:\n");
		printf("x=%.2lf\n", x);
		printf("y=%.2lf\n", y);
	}
	else
	{
		if (Dx!=0||Dy!=0)
		{
			printf("he phuong trinh vo nghiem");
		}
		else
		{
			printf("he phuong trinh co vo so nghiem");
		}
	}
	return 0; 
}
