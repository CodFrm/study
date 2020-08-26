#include <stdio.h>

int main() {
    double h = 100, m = 0;
    for (int i = 0; i < 10; i++) {
        m += h;
        h /= 2;
        m += h;
        printf("第%d次，%f米，经过%f米\n", i, h, m);
    }
    printf("%f,%f\n", m, h);
    getchar();
    return 0;
}
