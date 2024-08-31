#include <stdio.h>

int lower(int c);

int main(void) {
    int c;

    while ((c = getchar()) != EOF)
        putchar(lower(c));

    return 0;
}

int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
}
