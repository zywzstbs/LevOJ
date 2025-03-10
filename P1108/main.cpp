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
    return 0;
}