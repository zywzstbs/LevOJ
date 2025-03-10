#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int dayNum,date;
	scanf("%d", &dayNum);
	if (dayNum % 7 != 0) {
		date = dayNum % 7;
	}
	else {
		date = 7;
	}
	printf("%d", date);
	return 0;
}