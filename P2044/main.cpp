#include<stdio.h>
int t[1001];

int main()
{
    int i, j, n, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        t[temp]++;
    }
    for (i = 1; i <= 1000; i++)
    {
        for (j = 0; j < t[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
