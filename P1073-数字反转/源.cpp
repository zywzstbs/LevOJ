#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void switchFun(char[], int);

int main() {
    char num[2502];
    if (scanf("%2501s", num) != 1) { // 限制输入长度
        printf("Invalid input");
        return 1;
    }
    size_t len = strlen(num);
    if (len == 0) {
        printf("Empty input");
        return 1;
    }

    // 校验输入合法性（数字或负号开头）
    if (num[0] == '-') {
        if (len == 1) {
            printf("Invalid negative sign");
            return 1;
        }
        for (size_t j = 1; j < len; j++) {
            if (!isdigit(num[j])) {
                printf("Invalid character: %c", num[j]);
                return 1;
            }
        }
        switchFun(num, 1);
    }
    else {
        for (size_t j = 0; j < len; j++) {
            if (!isdigit(num[j])) {
                printf("Invalid character: %c", num[j]);
                return 1;
            }
        }
        switchFun(num, 0);
    }
    return 0;
}

void switchFun(char num[], int i) {
    char* p = &num[i];
    if (*p == '\0') { // 处理纯负号（已在前置校验拦截）
        printf("0");
        return;
    }

    // 去除尾部零并反转
    char* q = p + strlen(p) - 1;
    while (q >= p && *q == '0') q--;
    if (q < p) {
        printf(num[0] == '-' ? "-0" : "0");
        return;
    }
    *(q + 1) = '\0';

    // 反转字符串
    while (p < q) {
        char temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }

    printf("%s", num);
}
