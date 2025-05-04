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
    char a_str[101], b_str[101];
    scanf("%s", a_str);
    scanf("%s", b_str);

    reverse(a_str);
    reverse(b_str);

    int lenA = strlen(a_str);
    int lenB = strlen(b_str);

    int A[100] = {0}, B[100] = {0};
    for (int i = 0; i < lenA; i++) {
        A[i] = a_str[i] - '0';
    }
    for (int i = 0; i < lenB; i++) {
        B[i] = b_str[i] - '0';
    }

    int C[201] = {0};

    for (int i = 0; i < lenA; i++) {
        for (int j = 0; j < lenB; j++) {
            C[i + j] += A[i] * B[j];
        }
    }

    int carry = 0;
    for (int k = 0; k < 201; k++) {
        int current = C[k] + carry;
        C[k] = current % 10;
        carry = current / 10;
    }

    int max_pos = 200;
    while (max_pos > 0 && C[max_pos] == 0) {
        max_pos--;
    }

    for (int i = max_pos; i >= 0; i--) {
        printf("%d", C[i]);
    }
    printf("\n");

    return 0;
}
