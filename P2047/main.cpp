#include<stdio.h>
void decimal_to_binary(int a,int c[])
{
    int i=0;
    while(a!=0)
    {
        c[i++]=a%2;
        a/=2;
    }
}
int main()
{
    int a,b;
    int c[100]={0},d[100]={0},result[100],i;
    scanf("%d%d",&a,&b);
    decimal_to_binary(a,c); //将a进行二进制转换，并逆序存入c中。
    decimal_to_binary(b,d);
    int highest=0;  //不为0的最高位
    for(i=0;i<100;i++)
    {
        if(c[i]==d[i])
            result[i]=0;
        else
        {
            result[i]=1;
            highest=i;
        }
    }
    for(i=highest;i>=0;i--)
    {
        printf("%d",result[i]);
    }
    printf("\n");
    return 0;
}
