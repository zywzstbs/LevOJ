#include <stdio.h>

int main()
{
    //处理输入
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int arr1[a], arr2[b], arr3[c], arr4[d], arr5[e];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &arr3[i]);
    }
    for (int i = 0; i < d; i++)
    {
        scanf("%d", &arr4[i]);
    }
    for (int i = 0; i < e; i++)
    {
        scanf("%d", &arr5[i]);
    }



}