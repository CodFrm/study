#include <stdio.h>

int main() {
    int n = 0, flag = 0;
    printf("请输入一个数字:");
    scanf("%d", &n);
    flag = !(n % 3);
    flag = flag << 1 | !(n % 5);
    flag = flag << 1 | !(n % 7);
    switch (flag) {
        case 0: {
            printf("不能被 3、5、7 任一个整除\n");
            break;
        }
        case 7: {  // 0111
            printf("能同时被 3、5、7 整除\n");
            break;
        }
        case 6: {  // 0110
            printf("能同时被 3、5 整除\n");
            break;
        }
        case 5: {  // 0101
            printf("能同时被 3、7 整除\n");
            break;
        }
        case 3: {  // 0011
            printf("能同时被 5、7 整除\n");
            break;
        }
        default: {
            printf("只能被 3、5、7 中的一个整除\n");
            break;
        }
    }
    printf("输入q退出\n");
    while (getchar() != 'q')
        ;
    return 0;
}