#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char Str[500];
	scanf("%s", Str);
	char* p = Str;
	while (*p) {
		if (*p <= 90 && *p >= 65) {
			*p = *p + 32;
		}
		p++;
	}
	printf("%s", Str);
	return 0;
}