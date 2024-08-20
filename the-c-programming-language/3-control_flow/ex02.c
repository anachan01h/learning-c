#include <stdio.h>

void escape(char s[], char t[]);

int main(void) {
    char str1[20];
    char str2[] = "\tTeste\n";
    escape(str1, str2);
    printf("%s\n", str1);
    return 0;
}

void escape(char s[], char t[]) {
    int i = 0, j = 0;

    while (t[i] != '\0') {
        switch (t[i]) {
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        default:
            s[j++] = t[i];
            break;
        }
        ++i;
    }

    s[j] = '\0';
    return;
}   
