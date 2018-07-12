#include "stdio.h"

int isPowerOfFour(int n)
{
    int tempval=0;
    if (n == 0) return(1);
    if (n & (n-1)) return (0);
    return (n & 0x55555555);
}


int main(void)
{
    int n = 64;

    if (isPowerOfFour(n))
        printf("%d is a power of 4 ", n);
    else
        printf("%d is not a power of 4 ", n);
}