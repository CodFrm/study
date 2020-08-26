#include <stdio.h>

int main() {
    int num = 0;
    char buf = 0;
    while ((buf = getchar()) != '\n') {
        if(buf<'0'||buf>'9'){
            num++;
        }
    }
    printf("%d\n",num);
    while (getchar() != 'q')
        ;
    return 0;
}