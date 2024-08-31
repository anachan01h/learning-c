#include <stdio.h>

int setbits(int x, unsigned int p, unsigned int n, int y);

int main(void) {
    printf("%x\n", setbits(0b11001100, 4, 2, 0b11));
    return 0;
}

int setbits(int x, unsigned int p, unsigned int n, int y) {
    int mask1, mask2, result;

    mask1 = ~(~0 << n);
    mask2 = y & mask1;
    mask1 = mask1 << (p + 1 - n);
    mask2 = mask2 << (p + 1 - n);
    mask1 = ~mask1;

    result = (x & mask1) | mask2;
    return result;
}
