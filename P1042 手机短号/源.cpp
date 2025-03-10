#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char num[12];
	scanf("%s", num);
	printf("6");
	for (int i = 6; i < 11; i++) {
		printf("%c", num[i]);
	}
	return 0;
}