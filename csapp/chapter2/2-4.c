#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
    {
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}

// centos 8 小端
int main()
{
    int a = 12345;
    show_int(a);
    float b = 12345;
    show_float(b);
    void *c = (void *)12345;
    show_pointer(c);
    a = 0xabcd;
    show_int(a);
    b = 0xabcd;
    show_float(b);
    a = 1;
    show_int(a);
    a = 2;
    show_int(a);

    return 0;
}