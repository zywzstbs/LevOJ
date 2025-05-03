#include <stdio.h>

int dayOfYear(int ,int);

int main()
{
    int startMonth, endMonth, startYDay, endDay;
    long long num;
    scanf("%d%d%lld%d%d", &startMonth, &startYDay, &num, &endMonth, &endDay);

    int days=dayOfYear(endMonth,endDay)-dayOfYear(startMonth,startYDay);
    for (int i=0;i<days;i++)
        num*=2;
    printf("%lld\n",num);
    return 0;
}

int dayOfYear(int month, int day)
{
    int numOfDay = 0, i;
    for (i = 1; i < month; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            numOfDay += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            numOfDay += 30;
        else
                numOfDay += 28;
    }
    numOfDay += day;
    return numOfDay;
}