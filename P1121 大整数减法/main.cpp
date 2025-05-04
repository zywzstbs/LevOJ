#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char a[201], b[201];
    scanf("%s", a);
    scanf("%s", b);

    reverse(a);
    reverse(b);

    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_len = len_a > len_b ? len_a : len_b;

    int result[201] = {0};
    int borrow = 0;

    for (int i = 0; i < max_len; i++) {
        int digit_a = (i < len_a) ? (a[i] - '0') : 0;
        int digit_b = (i < len_b) ? (b[i] - '0') : 0;
        int current_diff = digit_a - borrow - digit_b;

        if (current_diff < 0) {
            current_diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result[i] = current_diff;
    }

    // 移除前导零
    int start = max_len - 1;
    while (start >= 0 && result[start] == 0) {
        start--;
    }

    if (start < 0) {
        printf("0");
    } else {
        for (int i = start; i >= 0; i--) {
            printf("%d", result[i]);
        }
    }
    printf("\n");

    return 0;
}
