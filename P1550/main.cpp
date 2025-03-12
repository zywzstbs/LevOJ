#include <stdio.h>

struct time
{
    int hour;
    int minute;
};

int main()
{
    //输入
    int n;
    scanf("%d",&n);
    time caughtTime[n], pastTime[n], currentTime[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d:%d",&caughtTime[i].hour,&caughtTime[i].minute);
        scanf("%d:%d",&pastTime[i].hour,&pastTime[i].minute);
    }

    //处理时间相加
    for(int i=0;i<n;i++)
    {
        int minute, hour;
        minute = caughtTime[i].minute + pastTime[i].minute;
        hour = caughtTime[i].hour + pastTime[i].hour;

        if (minute >= 60)
        {
            minute -= 60;
            hour += 1;
        }
        if (hour >= 24)
        {
            hour -= 24;
        }
        currentTime[i].hour = hour;
        currentTime[i].minute = minute;
    }

    //输出
    for(int i=0;i<n;i++)
    {
        printf("%02d:%02d\n",currentTime[i].hour,currentTime[i].minute);
    }

    return 0;
}