#include <stdio.h>

struct location
{
    int x;
    int y;
};

int main()
{
    //输入
    int n,m;
    scanf("%d %d",&n,&m);
    int map[n][m];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            scanf("%d",&map[i][j]);
        }
    }

    //处理路线
    location arr[n + m - 1];
    int index = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(map[i][j] == 1)
            {
                arr[index].x = i + 1;
                arr[index].y = j + 1;
                index++;
            }
        }
    }

    //输出路线
    for(int i = 0;i < index;i++)
    {
        printf("(%d,%d)",arr[i].x,arr[i].y);
        if(i != index - 1)
        {
            printf(">");
        }
    }

    return 0;
}
