#include <stdio.h>

int main() {
    int num = 0, pos = 0, len = 0;
    char buf = 0;
    while ((buf = getchar()) != '\n') {
        if (buf == ' ') {
            if (len == 11) {
                num++;
            }
            len = 0;
        } else if (buf >= '0' && buf <= '9') {
            len++;
        }
        pos++;
    }
    if (len == 11) {
        num++;
    }
    printf("输入了%d个手机号\n", num);
    while (getchar() != 'q')
        ;
    return 0;
}