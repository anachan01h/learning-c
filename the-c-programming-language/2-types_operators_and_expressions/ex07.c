#include <stdio.h>

int invert(int x, unsigned int p, unsigned int n);

int main(void) {
    printf("%x\n", invert(0b11001100, 5, 4));
    return 0;
}

int invert(int x, unsigned int p, unsigned int n) {
    int mask;

    mask = ~(~0 << n);
    mask = mask << (p + 1 - n);

    return x ^ mask;
}
