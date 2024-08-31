#include <stdio.h>

int bitcount(int x);

int main(void) {
    printf("%d\n", bitcount(0b011111001100));
    return 0;
}

int bitcount(int x) {
    int b;

    for (b = 0; x != 0; x &= x - 1)
        b++;
    
    return b;
}
