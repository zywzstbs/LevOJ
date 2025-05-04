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
    int carry = 0;

    for (int i = 0; i < max_len; i++) {
        int digit_a = (i < len_a) ? (a[i] - '0') : 0;
        int digit_b = (i < len_b) ? (b[i] - '0') : 0;
        int sum = digit_a + digit_b + carry;
        carry = sum / 10;
        result[i] = sum % 10;
    }

    if (carry > 0) {
        result[max_len] = carry;
        max_len++;
    }

    for (int i = max_len - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
