#include <stdio.h>

int main() {
    int n = 0, p = 1;
    scanf("%d", &n);
    if (n == 10) {
        n--;
        p = p + 210;
    }
    while (n-- > 1) {
        printf("%d\n", n);
        p += 20 + n;
    }
    printf("结果:%d\n", p);
    while (getchar() != 'q')
        ;
    return 0;
}