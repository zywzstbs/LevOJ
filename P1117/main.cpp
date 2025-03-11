#include <stdio.h>
#include <string.h>

int main()
{
    //处理输入
    int n;
    scanf("%d",&n);
    char country[n][20];
    for(int i=0;i<n;i++)
    {
        scanf("%s",country[i]);
    }

    //将东道主放到最后
    for(int i=0;i<n;i++)
    {
        if (strcmp(country[i],"China")==0)
        {
            char temp[20];
            strcpy(temp,country[n - 1]);
            strcpy(country[n - 1],"China");
            strcpy(country[i],temp);
        }
    }

    //排序
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            if(strcmp(country[j],country[j+1])>0)
            {
                char temp[20];
                strcpy(temp,country[j+1]);
                strcpy(country[j+1],country[j]);
                strcpy(country[j],temp);
            }
        }
    }

    //输出
    for(int i=0;i<n;i++)
    {
        printf("%s\n",country[i]);
    }
    return 0;
}
