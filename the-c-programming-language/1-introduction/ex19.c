#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char s[], int len);

int main(void) {
     int len;
     int i;
     char flag;
     char line[MAXLINE];

     while ((len = get_line(line, MAXLINE)) > 0) {
          reverse(line, len - 1);
          printf("%s", line);
     }

     return 0;
}

int get_line(char s[], int lim) {
     int c, i;

     for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
          s[i] = c;
     if (c == '\n') {
          s[i] = c;
          ++i;
     }
     s[i] = '\0';
     return i;
}

void reverse(char s[], int len) {
     int i;
     char aux;

     for (i = 0; i < len/2; ++i) {
          aux = s[i];
          s[i] = s[len - 1 - i];
          s[len - 1 - i] = aux;
     }
}
