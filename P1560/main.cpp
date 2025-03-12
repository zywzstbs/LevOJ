#include <stdio.h>

int main()
{
    int money;
    scanf("%d",&money);
    int jiangYou_bought = money / 10;
    int jiangYou_get = jiangYou_bought;

    for (int i = 0;i < jiangYou_bought / 5;i++)
    {
        jiangYou_get += 2;
    }
    if (jiangYou_bought % 5 >= 3)
    {
        for (int i = 0;i < (jiangYou_bought % 5) / 3;i++)
        {
            jiangYou_get += 1;
        }
    }

    printf("%d",jiangYou_get);
    return 0;
}