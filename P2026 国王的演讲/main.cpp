#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    char a[26][11]={0}, b[100][21]={0},sentence[100][21]={0};

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++)
        scanf("%s",b[i]);

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if (b[i][0]==a[j][0])
                strcpy(sentence[i],a[j]);

    for(int i=0;i<m;i++)
    {
        printf("%s",sentence[i]);
        if(i!=m-1)
            printf(" ");
    }
    return 0;
}
