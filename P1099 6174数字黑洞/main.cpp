#include <stdio.h>

void sort(int []);

int main()
{
    int n,count = 0;
    scanf("%d",&n);
    int a[4];
    a[0] = n / 1000;
    a[1] = (n % 1000) /100;
    a[2] = (n % 100) /10;
    a[3] = n % 10;
    if (n == 6174)
    {
        printf("0");
        return 0;
    }
    while (true)
    {
        sort(a);
        int min = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
        int max = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
        count++;
        if (max - min == 6174)
        {
            printf("%d",count);
            break;
        }
        a[0] = (max - min) / 1000;
        a[1] = (max - min) % 1000 / 100;
        a[2] = (max - min) % 100 / 10;
        a[3] = (max - min) % 10;
    }
    return 0;
}

void sort(int a[])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}