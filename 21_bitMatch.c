#include <stdio.h>

/* 
 * bitMatch - Create mask indicating which bits in x match those in y
 *            using only ~ and & 
 *   Example: bitMatch(0x7, 0xE) = 0x6
 *   Legal ops: ~ & |
 *   Max ops: 14
 *   Rating: 1
 */

 /*

 case 1: match on 1
 case 2: match on 0 

 0101
 1001
 ____
 0011

 0101
 0110
 ____
 1100
 
 */

int bitMatch(int x, int y)
{
    return ~(x & ~y); 
}

int test_bitMatch(int x, int y)
{
    int i;
    int result = 0;
    for (i = 0; i < 32; i++) {
        int mask = 1 << i;
        int bit = (x & mask) == (y & mask);
        result |= bit << i;
    }
    return result;
}

int main(void)
{
    int x = 130;
    int y = 2;
    printf("expected: %x\n", bitMatch(x, y));
    printf("actual  : %x\n", test_bitMatch(x, y));
}
