#include <stdio.h>
#include <limits.h>
#include <string.h>

void i2a(int n, char s[]);
void reverse(char s[]);

int main(void) {
    char s[50];
    i2a(INT_MIN, s);
    printf("%d = %s\n", INT_MIN, s);

    return 0;
}

void i2a(int n, char s[]) {
    int i, sign;

    i = 0;
    if (n == INT_MIN) {
        s[i++] = - (n % 10) + '0';
        n /= 10;
    }

    if ((sign = n) < 0)
        n = -n;

    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; ++i, --j) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
