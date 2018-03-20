#include <stdio.h>



void test(void)
{
    printf("hello, everyone!\n");
}

int sqr(int a)
{
    return (a*a);
}

int main(void)
{
    test();
    printf( "%i\n", sqr(5));
}