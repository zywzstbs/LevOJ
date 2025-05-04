#include <stdio.h>

void mul(int a[]) {
    int carry = 0;
    for (int i = 0; i < 500; i++) {
        int temp = a[i] * 2 + carry;
        a[i] = temp % 10;
        carry = temp / 10;
    }
}

int main() {
    int a[500] = {1};
    int sum[500] = {1};
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        mul(a);

        for (int j = 0; j < 500; j++) {
            sum[j] += a[j];
        }

        int carry = 0;
        for (int j = 0; j < 500; j++) {
            int temp = sum[j] + carry;
            sum[j] = temp % 10;
            carry = temp / 10;
        }
    }

    for (int i = 499; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}
