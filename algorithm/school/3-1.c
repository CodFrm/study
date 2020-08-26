#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = malloc(1024), *tmp = str;
    memset(str, 0, 1024);
    printf("请输入字符串\n");
    scanf("%s", str);
    int num[5] = {0};
    while (*tmp != 0) {
        switch (*tmp) {
            case 'a': {
                num[0]++;
                break;
            }
            case 'e': {
                num[1]++;
                break;
            }
            case 'i': {
                num[2]++;
                break;
            }
            case 'o': {
                num[3]++;
                break;
            }
            case 'u': {
                num[4]++;
                break;
            }
        }
        tmp++;
    }
    free(str);
    printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d", num[0], num[1], num[2], num[3],
           num[4]);

    while (1) {
        getchar();
    }
    return 0;
}
