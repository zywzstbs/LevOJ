#include <stdio.h>

int main()
{
    //处理输入
    int a,b,c,d,e,max,min;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int priceA[a],priceB[b],priceC[c],priceD[d],priceE[e];
    for(int i=0;i<a;i++)
        scanf("%d",&priceA[i]);
    for(int i=0;i<b;i++)
        scanf("%d",&priceB[i]);
    for(int i=0;i<c;i++)
        scanf("%d",&priceC[i]);
    for(int i=0;i<d;i++)
        scanf("%d",&priceD[i]);
    for(int i=0;i<e;i++)
        scanf("%d",&priceE[i]);
    scanf("%d%d",&min,&max);


}