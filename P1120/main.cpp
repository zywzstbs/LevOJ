#include <stdio.h>
#include <string.h>

int main()
{
    //处理输入
    int a[200]={0},b[200]={0},answer[200]={0};
    char stra[200],strb[200];
    scanf("%s",stra);
    scanf("%s",strb);

    //将字符串转为数组中的数字
    for(int i = 0;i < strlen(stra);i++)
    {
        a[i] = stra[i]-'0';
    }
    for(int i = 0;i < strlen(strb);i++)
    {
        b[i] = strb[i]-'0';
    }

    //计算
    if (strlen(stra) > strlen(strb))
    {
        for(int i = 0;i < strlen(stra) - strlen(strb);i++)
        {
            answer[i] = a[i];
        }
        for(int i = 0;i < strlen(strb);i++)
        {
            int sum = b[i] + a[i + strlen(stra) - strlen(strb)];
            if (sum<9)
            {
                answer[i + strlen(stra) - strlen(strb)] = sum;
            }else
            {
                answer[i + strlen(stra) - strlen(strb)] = sum % 10;
                answer[i + strlen(stra) - strlen(strb) - 1]++;
            }

        }
    }else
    {
        for(int i = 0;i < strlen(strb - strlen(stra));i++)
        {
            answer[i] = b[i];
        }
        for(int i = 0;i < strlen(stra);i++)
        {
            answer[i + strlen(strb) - strlen(stra)] = a[i] + b[i + strlen(strb) - strlen(stra)];
        }
    }

    //输出
    for
    return 0;
}