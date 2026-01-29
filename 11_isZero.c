#include <stdio.h>

/*
 * isZero - returns 1 if x == 0, and 0 otherwise 
 *   Examples: isZero(5) = 0, isZero(0) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 *   Rating: 1
 */

// ...0101 = 0, 0000 = 1 non-zero will alw return 1, so need opp

int isZero(int x)
{
    return !(x & 0xFFFFFFFF);
}

int test_isZero(int x)
{
    if (x == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", isZero(x));
    printf("actual  : %x\n", test_isZero(x));
}
