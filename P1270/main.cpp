#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 1;

    for (int i = 1; i < n; i++)
    {
        int check = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] <= arr[j])
            {
                check = 0;
            }
        }
        if (check == 1)
        {
            sum++;
        }
    }

    printf("%d", sum);
    return 0;
}