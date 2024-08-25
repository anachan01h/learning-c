#include <stdio.h>
#include <limits.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void) {
    char s[50];
    int n = INT_MIN;
    itob(n, s, 10);
    printf("%X = %s\n", n, s);

    return 0;
}

void itob(int n, char s[], int b) {
    int i, sign, aux;

    i = 0;
    if (n == INT_MIN) {
        s[i++] = - (n % b) + '0';
        n /= 10;
    }

    if ((sign = n) < 0)
        n = -n;

    do {
        if ((aux = n % b) <= 9)
            s[i++] = aux + '0';
        else
            s[i++] = aux - 10 + 'A';
    } while ((n /= b) > 0);

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
