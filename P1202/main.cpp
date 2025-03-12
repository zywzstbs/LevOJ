#include <stdio.h>
#include <string.h>

int main() {
    // 处理输入，限制输入长度
    char str[25], substr[4];
    scanf("%s %s", str, substr); // str最长15字符，substr严格3字符

    // 找到最大ASCII字符的索引
    int index = 0;
    char max_char = str[0];
    int original_len = strlen(str);
    for (int i = 0; i < original_len; i++) {
        if (str[i] > max_char) {
            max_char = str[i];
            index = i;
        }
    }

    // 计算新长度并校验溢出
    int new_len = original_len + 3;
    if (new_len >= 25) {
        printf("Error: Buffer overflow.\n");
        return 1;
    }

    // 从后向前移动字符（包括原终止符）
    for (int i = original_len; i >= index + 1; i--) {
        str[i + 3] = str[i]; // 正确移动终止符
    }

    // 插入substr
    for (int i = 0; i < 3; i++) {
        str[index + 1 + i] = substr[i];
    }

    // 显式设置终止符
    str[new_len] = '\0';

    printf("%s\n", str);
    return 0;
}
