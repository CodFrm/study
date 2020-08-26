#include <stdio.h>

int factorial(int num) {
    int ret = 1;
    for (int i = 2; i <= num; i++) {
        ret *= i;
    }
    return ret;
}

int main() {
    int n = 0;
    printf("你想计算的阶乘数字:");
    scanf("%d", &n);
    printf("结果:%d\n", factorial(n));
    while (1) {
        getchar();
    }
    return 0;
}
