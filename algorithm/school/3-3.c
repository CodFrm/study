#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, x = 1;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("2 ^? mod %d = 1\n", n);

    } else {
        while (x++) {
            if ((int)pow(2, x) % n == 1) {
                printf("2^%d mod %d=1\n", x, n);
                break;
            }
        }
    }
    while (1) {
        getchar();
    }
    return 0;
}
