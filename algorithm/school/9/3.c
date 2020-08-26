#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
    char s1[1024], s2[1024];
    printf("字符串1:");
    scanf("%s", s1);
    printf("字符串2:");
    scanf("%s", s2);
    int num = 0, len = strlen(s1), len2 = strlen(s2);
    if (len2 > len) {
        printf("%d", 0);
        return 0;
    }
    for (int i = 0; i < len; i++) {
        int n;
        for (n = 0; s1[i + n] == s2[n]; n++)
            ;
        if (n == len2) {
            num++;
        }
    }
    printf("%d\n", num);
    printf("输入q退出\n");
    while (getchar() != 'q')
        ;
    return 0;
}
