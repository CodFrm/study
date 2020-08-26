#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a[] = {1, 9, 3, 7, 4, 2, 5, 0, 6, 8}, len = sizeof(a) / sizeof(int),
        tmp = 0;
    for (int i = 0; i < len; i++) {
        for (int n = i + 1; n < len; n++) {
            if (a[n] < a[i]) {
                tmp = a[n];
                a[n] = a[i];
                a[i] = tmp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    getchar();
    return 0;
}
