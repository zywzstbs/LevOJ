#include <stdio.h>
#include <string.h>
#include <math.h>

//思路:将二进制数4个一组转换为16进制
int main()
{
    char str[1000];
    scanf("%s",str);

    //将二进制位数补足到4的整数倍
    int len = strlen(str);
    int pad = (4 - (len % 4)) % 4;
    if (pad != 0)
    {
        for (int i = len + pad; i > pad; i--)
        {
            str[i] = str[i - pad];
        }
        str[0] = '0';
        str[1] = '0';
    }

    //将二进制数四位一个转换为十六进制
    char str2[1000];
    for (int i = 0; i < (len + pad) / 4; i++)
    {
        char c;
        int m = (str[4 * i] - '0') * 8 + (str[4 * i + 1] - '0') * 4 + (str[4 * i + 2] - '0') * 2 + (str[4 * i + 3] - '0');
        if (m<=9)
        {
            c = m + '0';
        }else
        {
            c = m + 'A' - 10;
        }
        str2[i] = c;
        while (m == 0 && i == 0)
        {
            printf("0");
            return 0;
        }
    }

    //去除前导0
    for (int i = 0;i <strlen(str2);i++)
    {
        if(str2[i] == '0' && strlen(str2) > 1)
        {
            for (int j = 0;j <strlen(str2);j++)
            {
                str2[j] = str2[j + 1];
            }
        }
    }

    for (int i = 0;i < strlen(str2);i++)
    {
        printf("%c",str2[i]);
    }

    return 0;
}