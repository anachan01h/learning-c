#include <stdio.h>

void expand(char *s1, char *s2);

int main(void) {
    char s1[100] = "0-z";
    char s2[100];

    expand(s1, s2);
    printf("%s\n", s2);

    return 0;
}

void expand(char s1[], char s2[]) {
    int i;
    int j = 0;
    char c;

    for (i = 0; s1[i] != '\0'; ++i) {
        if (s1[i] == '-' && i != 0 && s1[i + 1] != 0 && s1[i - 1] < s1[i + 1]) {
            for (c = s1[i - 1] + 1; c <= s1[i + 1]; ++c)
                s2[j++] = c;
            ++i;
        } else
            s2[j++] = s1[i];
    }

    s2[j] = '\0';

    return;
}
