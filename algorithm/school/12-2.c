#include <stdio.h>

int main() {
    int num = 0, len = 1;
    char buf = 0;
    while ((buf = getchar()) != '\n') {
        if (len == 1 && buf != '1') {
            break;
        }
        if (len == 2 && !(buf == '3' || buf == '5' || buf == '8')) {
            break;
        }
        if (len > 6) {
            if (len == 7) {
                num = buf;
                continue;
            }
            if (buf != num) {
                num = -1;
                break;
            }
        }
        if (buf >= '0' && buf <= '9') {
            if (len > 11) {
                num = -1;
                break;
            }
            len++;
        }
    }
    printf("%s", num > 0 ? "true" : "false");
    while (getchar() != 'q')
        ;
    return 0;
}