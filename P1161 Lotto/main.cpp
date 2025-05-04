#include <stdio.h>

int a[10];
int k;
int path[6];

void dfs(int start, int depth) {
    if (depth == 6) {
        // 输出当前组合
        for (int i = 0; i < 6; i++) {
            printf("%d%c", path[i], i == 5 ? '\n' : ' ');
        }
        return;
    }
    // 计算剩余需要选择的元素数目
    int remaining = 6 - depth;
    for (int i = start; i <= k - remaining; i++) {
        path[depth] = a[i];
        dfs(i + 1, depth + 1);
    }
}


int main()
{
    scanf("%d",&k);
    for(int i=0;i<k;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<k;i++)
        for(int j=i+1;j<k;j++)
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    dfs(0,0);
    return 0;
}