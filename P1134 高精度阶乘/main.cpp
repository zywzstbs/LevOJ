#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("1\n");
        return 0;
    }

    int result[3000] = {0};
    result[0] = 1;
    int length = 1;

    for (int i = 2; i <= n; ++i) {
        int carry = 0;
        for (int j = 0; j < length; ++j) {
            int temp = result[j] * i + carry;
            result[j] = temp % 10;
            carry = temp / 10;
        }
        while (carry > 0) {
            result[length] = carry % 10;
            carry /= 10;
            ++length;
        }
    }

    for (int i = length - 1; i >= 0; --i) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
