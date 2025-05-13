#include <stdio.h>

int main()
{
    int n;
    int arr[2000];
    int len = 0;
    int i_val = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int op;
        scanf("%d", &op);
        if (op == 1)
        {
            i_val++;
        } else if (op == 2)
        {
            int x;
            scanf("%d", &x);

            for (int j = len; j >= i_val; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i_val - 1] = x;
            len++;
        } else if (op == 3)
        {
            for (int j = i_val - 1; j < len - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            len--;
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
        if (i != len - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
