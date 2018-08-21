#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mul(int a, int b)
{
    return a * b;
}

int func(int arg)
{
    return mul(arg, 2);
}

int main(int argc, char *argv[])
{
    int foo = func(argc);

    printf("Some number: %d\n", foo);

    return 0;
}
