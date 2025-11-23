#include <stdio.h>
#include <math.h> 

int main()
{
	double a, b, c, x;
	double delta, x1, x2; 
	printf("nhap a:");
	scanf("%lf", &a);
	printf("nhap b:");
	scanf("%lf", &b);
	printf("nhap c:");
	scanf("%lf", &c);
	printf("\n");
	if (a==0)
	{
		if (b==0)
		{
			if (c!=0)
				printf("phuong trinh vo nghiem");
			else 
				printf("phuong trinh co vo so nghiem");
		}
		else 
		{
			x=-c/b;
			printf("phuong trinh co nghiem x=&lf",x);
		}
	} 
	else
	{
		delta = (b*b)-(4*a*c);
		if (delta < 0)
		{
			printf("phuong trinh vo nghiem (delta < 0)\n");
		}
		else if (delta == 0)
		{
			x=-b/(2*a);
			printf("phuong trinh co nghiem kep x1=x2=%.2lf\n", x); 
		}
		else
		{
			x1=-b+sqrt(delta)/2*a;
			x2=-b-sqrt(delta)/2*a;
			printf("phuong trinh co hai nghiem phan biet\n");
			printf("x1=%.2lf\n", x1);
			printf("x2=%.2lf\n", x2); 
		}
	}
	return 0;
} 
