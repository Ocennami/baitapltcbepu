#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
	double a;
	printf("nhap a=");
	scanf("%lf", &a);
	printf("\n");
	
	double chuvi = 2*PI*a;
	double dientich = PI*a*a; 
	printf("So da nhap a=%7.3f\n", a);
	printf("Chu vi hinh tron ban kinh %f la CV=%f\n", a, chuvi);
	printf("Dien tich hinh tron ban kinh %f la DT=%f\n", a, dientich);
	
	return 0; 
} 
