#include <stdio.h>

int main()
{
    int l,m;
    scanf("%d %d",&l,&m);
    int tree[l + 1];
    for (int i = 0; i < l + 1; i++)
    {
        tree[i] = 1;
    }
    for(int i = 0;i < m;i++)
    {
        int start,end;
        scanf("%d %d",&start,&end);
        for(int j = start; j <= end; j++)
        {
            tree[j] = 0;
        }
    }
    int sum = 0;
    for(int i = 0;i < l + 1;i++)
    {
        if(tree[i] == 1)
        {
            sum += tree[i];
        }
    }
    printf("%d",sum);
    return 0;

}