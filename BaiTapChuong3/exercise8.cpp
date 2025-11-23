#include <stdio.h>
#include <math.h> 

int main()
{
	int a, b, c;
	double CV, P, S; 
	printf("nhap ba so nguyen a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("\n");
	
	if (a>0&&b>0&&c>0&&(a+b>c)&&(a+c>b)&&(b+c>a))
	{
		CV = a+b+c;
		P = CV/2;
		S = sqrt(P*(P-a)*(P-b)*(P-c));
		printf("Success: day la ba canh cua tam giac\n");
		printf("Chu vi tam giac CV= %.2lf\n", CV);
		printf("Dien tich tam giac S= %.2lf", S);
	} 
	else
	{
		printf("Error: ba so nguyen khong phai la so do ba canh cua tam giac");
	}
	return 0;
}
