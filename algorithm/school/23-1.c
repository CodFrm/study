#include <stdio.h>

int main() {
    double n[] = {9.8, 12, 45, 67, 23, 1.98, 2.55, 45},
           count = sizeof(n) / sizeof(double), p = 0, max = 0, min = n[0];
    for (int i = 0; i < count; i++) {
        if (n[i] > max) {
            max = n[i];
        }
        if (n[i] < min) {
            min = n[i];
        }
        p += n[i];
    }
    p /= count;
    printf("最大:%f,最小:%f,平均数:%f\n", max, min, p);
    getchar();
    return 0;
}