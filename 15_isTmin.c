#include <stdio.h>

/*
 * isTmin - returns 1 if x is the minimum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 1
 */
int isTmin(int x)
{
    return !(x ^ (1 << 31)); 
}

int test_isTmin(int x)
{
    if (x == 0x80000000) {
        return 1;
    } else {
        return 0; 
    }
}

int main(void)
{
    int x = 0x80000000;
    printf("actual: %x\n", isTmin(x));
    printf("expected  : %x\n", test_isTmin(x));
}
