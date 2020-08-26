#include <stdio.h>
#include <stdlib.h>
int main() {
    char n[100];
    memset(n,1,100);
    int light = 0, men = 0;
 scanf("%d,%d", &light, &men);
    for (int i = 1; i < men; i++) {
        int sub = i + 1;
        while (sub <= light) {
            n[sub - 1] = !n[sub - 1];
            sub = sub + (i + 1);
        }
    }
    for (int i = 0; i < light; i++) {
        if (n[i]) {
            printf("%d,", i+1);
        }
    }
    while (1) {
        getchar();
    }
    return 0;
}
