#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func(int arg)
{
    return arg * 2;
}

int main(int argc, char *argv[])
{
    int foo = func(argc);

    printf("Some number: %d\n", foo);

    return 0;
}
