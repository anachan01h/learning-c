#include <stdio.h>

int htoi(char s[]);
char is_digit(char c);

int main(void) {
    char hexa[] = "0X20";
    printf("%d\n", htoi(hexa));
    return 0;
}

int htoi(char s[]) {
    int i = 0;
    int n = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    for (; is_digit(s[i]); i++) {
        n = n * 16;
        if (s[i] >= '0' && s[i] <= '9')
            n = n + s[i] - '0';
        else if (s[i] >= 'A' && s[i] <= 'F')
            n = n + s[i] - 'A' + 10;
        else
            n = n + s[i] - 'a' + 10;
    }

    return n;
}

char is_digit(char c) {
    if (c >= '0' && c <= '9')
        return 1;

    if (c >= 'A' && c <= 'F')
        return 1;

    if (c >= 'a' && c <= 'f')
        return 1;

    return 0;
}
