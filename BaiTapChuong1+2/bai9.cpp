#include <stdio.h>
#include <stdio.h>

int main()
{
	int a, b;
	printf("nhap a=");
	scanf("%d", &a);
	printf("\n");
	printf("nhap b=");
	scanf("%d", &b);
	printf("\n");
	
	int kql = (a>b);
	printf("a>b=%d\n", kql);
	
	printf("b+5=%d\n", b+5);
	
	int luythua = a*a;
	printf("a^2=%d\n", luythua);
	
	int khac = ((b + 5) != luythua);
	printf("b+5!=a^2=%d\n", khac);
	
	int kqand = (kql && khac);
	printf("(a>b)and(b+5!=a^2)=%d\n", kqand);
	
	printf("b-5=%d\n", b-5);
	
	int kqnho = ((b-5)<a);
	printf("b-5<a=%d\n", kqnho);
	
	int tonghop = (kqand || kqnho);
	printf("(a>b)and(b+5!=a^2)or(b-5<a)=%d\n", tonghop);
	return 0;
}
