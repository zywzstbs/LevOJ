#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int k,len=0;
	char arr[100],temp[100];
	char* p = arr;
	scanf("%d", &k);
	getchar();
	scanf("%s", arr);
	for (int i = 0; i < k; i++) {
		p = arr;
		char temp;
		temp = arr[0];
		while (*(p+1)) {
			*p = *(p + 1);
			p++;
		}
		*p = temp;
	}
	printf("%s", arr);
	return 0;
}