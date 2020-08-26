#include <stdio.h>

int main() {
    int s = 0, tmp = 0, print = 0, bit = 1;
    scanf("%d", &s);
    while (s) {
        tmp = s % 10;
        s /= 10;
        if (tmp % 2) {
            print = tmp*bit + print;
            bit*=10;
        }
    }

    printf("输出:%d\n", print);
    while (1) {
        if (getchar() == 'q') break;
    }
    return 0;
}