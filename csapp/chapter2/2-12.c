#include <stdio.h>

int main()
{
    int x = 0x87654321;
    printf("%.8x\n", x & 0xff);
    printf("%.8x\n", x ^ ~0xff);
    printf("%.8x\n", x | 0xff);

    int y = 0b000001101;
    printf("%x\n", y >> 2);
    return 0;
}
