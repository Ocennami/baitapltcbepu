#include <stdio.h>

int main()
{
	char ch;
	printf("Hay nhap ki tu 'ch' tu ban phim: ");
	scanf("%c", &ch);
	printf("\n");
	
	if (ch>='a'&&ch<='z')
	{
		printf("Ky tu chu thuong");
	} 
	else if (ch>='A'&&ch<='Z')
	{
		printf("Ky tu chu hoa");
	}
	else if (ch>='0'&&ch<='9')
	{
		printf("Ky tu chu so");
	}
	else
	{
		printf("Ky tu dac biet"); 
	}
	return 0; 
} 
