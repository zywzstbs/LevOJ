#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct person
{
	bool property;
	bool live = true;
};
int main()
{
	int m,k = 1;
	bool done = 0;
	person arr[24];
	person temp;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		arr[i].property = 1;
		arr[i + m].property = 0;
	}
	while (!done) {
		if (arr[(k - 1) % m].property = 0) {
			arr[k % m - 1].live = 0;
			for (int i = 0; i < (k - 1) % m; i++) {
				int j = 0, index;
				temp = arr[i];
				arr[i] = arr[(k - 1) % m + 1];
				arr[(k % m) - 1] = temp;
			}
		}
		else {
			printf("%d fail\n", k);
			k++;
			continue;
		}
		for (int i = 0; i < 2 * m; i++) {
			if (arr[i].property == 0 && arr[i].live == 0) {
				done = 1;
			}
		}
	}
	printf("%d", k);
	return 0;
}