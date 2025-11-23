#include <stdio.h>

int main()
{
	int a;
	printf("nhap diem (phai la 1 so nguyen): ");
	scanf("%d", &a);
	printf("\n");
	
	switch (a)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4: printf("Truot - xep loai kem");
		break;
		case 5:
		case 6: printf("Do - xep loai trung binh");
		break;
		case 7: printf("Do - xep loai kha");
		break;
		case 8:
		case 9:
		case 10: printf("Do - xep loai gioi");
		break;
		default: printf("diem khong hop le");
	}
	return 0;
} 
