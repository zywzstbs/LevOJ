#include <stdio.h>

bool Su4Shu4(int);//

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=10000;i++)
    {
        if(Su4Shu4(i))
        {
            if (Su4Shu4(n-i))
            {
                printf("%d+%d",i,n-i);
                return 0;
            }
        }
    }
    return 0;
}

bool Su4Shu4(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}