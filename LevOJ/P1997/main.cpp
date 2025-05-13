#include <stdio.h>
#include <stdlib.h>

int compute_persistence(int n) {
    int steps = 0;
    while (n >= 10) {
        int product = 1;
        int temp = n;
        while (temp > 0) {
            product *= temp % 10;
            temp /= 10;
        }
        n = product;
        steps++;
    }
    return steps;
}

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int max_steps = -1;
    int result[1000];
    int count = 0;

    for (int n = a; n <= b; n++) {
        int steps = compute_persistence(n);
        if (steps > max_steps) {
            max_steps = steps;
            count = 0;
            result[count++] = n;
        } else if (steps == max_steps) {
            result[count++] = n;
        }
    }

    qsort(result, count, sizeof(int), compare);

    printf("%d\n", max_steps);
    for (int i = 0; i < count; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
