#include <stdio.h>

struct num
{
    int a;
    int b;
};

int main()
{
    //输入
    int n;
    scanf("%d", &n);
    num arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].a, &arr[i].b);
    }

    //检验
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 1; j < arr[i].a; j++)
        {
            if (arr[i].a % j == 0)
            {
                sum += j;
            }
        }
        if (sum == arr[i].b)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
