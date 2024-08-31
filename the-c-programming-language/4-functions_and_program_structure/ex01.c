#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
int strrindex(char s[], char t[]);

char pattern[] = "char";

int main(void) {
    char line[MAXLINE];
    int found = 0;
    int pos;;

    while (get_line(line, MAXLINE) > 0) {
        pos = strrindex(line, pattern);
        if (pos >= 0) {
            printf("%d: %s", pos, line + pos);
            found++;
        }
    }

    return found;
}

int get_line(char s[], int lim) {
    int c, i;

    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = '\n';
    s[i] = '\0';

    return i;
}

int strrindex(char s[], char t[]) {
    int i, j, k;

    for (i = strlen(s) - 1; i >= 0; --i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k);
        if (k > 0 && t[k] == '\0')
            return i;
    }

    return -1;
}
