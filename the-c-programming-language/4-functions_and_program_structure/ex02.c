#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

int main(void) {
    double a2f(char s[]);
    char s[] = "12.5E+5";
    printf("%g\n", a2f(s));
    
    return 0;
}

double a2f(char s[]) {
    double val, power;
    int i, sign;
    int exp, exp_sign;

    for (i = 0; isspace(s[i]); ++i);

    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        ++i;

    for (val = 0.0; isdigit(s[i]); ++i)
        val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.')
        ++i;

    for (power = 1.0; isdigit(s[i]); ++i) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    if (s[i] == 'E' || s[i] == 'e')
        ++i;

    exp_sign = (s[i++] == '-') ? -1 : 1;

    for (exp = 0; isdigit(s[i]); ++i)
        exp = 10 * exp + (s[i] - '0');

    if (exp_sign > 0)
        while (exp-- > 0)
            power /= 10.0;
    else
        while (exp-- > 0)
            power *= 10.0;

    return sign * val / power;
}
