#include <stdio.h>

int main()
{
	double a, b, CV, S;
	printf("nhap 2 so thuc a, b: ");
	scanf("%lf %lf", &a, &b);
	printf("\n");
	
	if (a>0&&b>0&&a!=b)
	{
		CV = 2*(a+b);
		S = a*b;
		printf("Success: hai so thuc la so do cua 2 canh hcn\n");
		printf("Chu vi hinh chu nhat CV= %.2lf\n", CV);
		printf("Dien tich hinh chu nhat S= %.2lf", S);
	} 
	else
	{
		printf("Error: hai so thuc khong phai la 2 so do cua 2 canh hcn");
	}
	return 0;
} 
