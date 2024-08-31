#include <stdio.h>

int rightrot(int x, unsigned int n);

int main(void) {
    printf("%x\n", rightrot(0b11001100, 2));
    return 0;
}

int rightrot(int x, unsigned int n) {
    return x >> n | x << ((sizeof n << 3)  - n);
}
