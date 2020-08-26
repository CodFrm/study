#include <stdio.h>

int main() {
    double a = 2, b = 1, c = a / b, sum = c, tmp = 0;
    for (int i = 1; i < 20; i++) {
        tmp = a;
        a = a + b;
        b = tmp;
        c = a / b;
        sum += c;
    }
    printf("%f", sum);
    while (1) {
        getchar();
    }
    return 0;
}