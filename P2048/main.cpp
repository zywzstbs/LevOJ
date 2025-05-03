#include <stdio.h>
#include<string.h>
int main()
{
    char code1[10001]={0},code2[10001]={0};
    char temp[10001];
    scanf("%s",temp);
    while(strcmp(temp,"END_OF_INPUT")!=0){
        strcat(code1,temp);  //strcat可以把temp接在code1后面
        scanf("%s",temp);
    }
    scanf("%s",temp);
    while(strcmp(temp,"END_OF_INPUT")!=0){
        strcat(code2,temp);  //strcat可以把temp接在code2后面
        scanf("%s",temp);
    }
    if(strcmp(code1,code2)==0)
        printf("MATCHED\n");
    else
        printf("NOT\n");
    return 0;
}
