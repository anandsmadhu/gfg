#include "stdio.h"

int rightmostsetbit(int n)
{
    int temp = n & -n;
    int pos = 0;
    while(temp !=0)
    {
        temp = temp>>1;
        pos++;
    }
    return(pos);

}


int main(void)
{
    int n = 19;
    printf("Right most bit set = %d\n" ,rightmostsetbit(n));

}
