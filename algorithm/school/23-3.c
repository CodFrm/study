#include <stdio.h>

int main() {
    int num = 0, s[] = {1500, 4500, 9000, 35000, 55000, 80000};
    double ret = 0;
    scanf("%d", &num);
    if (num <= 3000) {
        printf("不需要交税");
        return 0;
    }
    num -= 3000;
    int i = 0;
    while (num > 0) {
        num -= s[i];
        if (num > 0) {
            ret += s[i] * (0.05 * (i + 1));
        } else {
            ret += (num + s[i]) * (0.05 * (i + 1));
        }
        i++;
    }
    printf("你要交%f\n", ret);
    while (getchar() != 'q')
        ;
    return 0;
}