#include <stdio.h>

int main()
{
    int n,a[100000],b[100000],q,count=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);

    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        int op;
        scanf("%d",&op);
        if(op==1)
        {
            count++;
        }
        else if(op==2)
        {
            int x;
            scanf("%d",&x);
            printf("%d\n",a[x-1]+count*b[x-1]);
        }
    }
    return 0;
}