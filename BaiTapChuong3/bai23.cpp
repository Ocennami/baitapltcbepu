#include <stdio.h>

int main()
{
	int n;
	do
	{
		printf("nhap so nguyen n:");
		scanf("%d", &n);
	}
	while(n<=0);
	printf("nua tam giac pascal co chieu cao N la:\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1; j<=n-i;j++);
		for(int j=1; j<=i; j++)printf("%d", j);
		printf("\n");
	}
}
