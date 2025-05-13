#include <stdio.h>

long long compute_steps(long long a, long long b) {
    long long steps = 0;
    while (a != 0 && b != 0) {
        // 确保 a <= b
        if (a > b) {
            long long temp = a;
            a = b;
            b = temp;
        }
        // 计算当前可以划分的正方形数量
        long long count = b / a;
        steps += count;
        // 更新剩余矩形的尺寸
        b = b % a;
    }
    return steps;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", compute_steps(a, b));
    return 0;
}
