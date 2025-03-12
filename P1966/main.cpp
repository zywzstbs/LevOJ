#include <stdio.h>

struct Info
{
    int gn_好市民人数, bi_拟人生物id;
    int gi_好市民id[1005];
   int 拟人生物数量;
    int nId_拟人生物id[1000];
};

struct nr_拟人生物Info
{
    int doorId;
    int nrid_拟人Id;
};

int main()
{
    //处理输入
    int doorQuantity;
    scanf("%d", &doorQuantity);
    Info info[doorQuantity];

    for (int i = 0; i < doorQuantity; i++)
    {
        scanf("%d", &info[i].gn_好市民人数);
    }

    for (int i = 0; i < doorQuantity; i++)
    {
        for (int j = 0; j < info[i].gn_好市民人数; j++)
        {
            scanf("%d", &info[i].gi_好市民id[j]);
        }
    }

    int nrn_拟人生物数量;
    scanf("%d", &nrn_拟人生物数量);
    nr_拟人生物Info list[nrn_拟人生物数量];
    for (int i = 0; i < nrn_拟人生物数量; i++)
    {
        scanf("%d %d", &list[i].nrid_拟人Id, &list[i].doorId);
    }

    for (int i = 0; i < doorQuantity; i++)
    {
        for (int j = 0; j < nrn_拟人生物数量; j++)
        {
            if (list[j].doorId == i)
            {
                info[i].y_有无拟人生物 = true;
                info[i].nId_拟人生物id = list[j].nrid_拟人Id;
            }
        }
    }

    for (int i = 0; i < doorQuantity; i++)
    {
        if (info[i].y_有无拟人生物 == true)
        {
            for (int j=info[i].gn_好市民人数;j>0;j--)
            {
                info[i].gi_好市民id[j]=info[j-1].gi_好市民id[j-1];
            }
            info[i].gi_好市民id[0]=info[i].nId_拟人生物id;
        }
    }

    for (int i = 0; i < doorQuantity; i++)
    {
        for (int j=0;j<info[i].gn_好市民人数+1;j++)
        {
            printf("%d ",info[i].gi_好市民id[j]);
        }
        printf("\n");
    }

    return 0;
}
