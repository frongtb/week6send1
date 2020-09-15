#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Err(void);
void Zero(void);
void plus(void);
int main()
{
	int num1;
	scanf("%d", &num1);
	if (num1 < 0)
	{
		for (int a = 0; num1 < a; a--)
		{
			Err();
		}
	}
	else if (num1 == 0)
	{
		Zero();
	}
	else {
		for (int a = 0; num1 > a; a++)
		{
			plus();
		}
	}
	return 0;
}
void Err(void)
{
	printf("Error\n");
}
void Zero(void)
{
	printf("Zero");
}
void plus(void)
{
	printf("Plus\n");
}