#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);

int main(void) {
     int len;
     char line[MAXLINE];

     while ((len = get_line(line, MAXLINE)) > 0)
          printf("%4d: %s", len, line);

     return 0;
}

int get_line(char s[], int lim) {
     int c, i;
     char loop = 1;

     i = 0;
     while (loop) {
          if (i >= lim - 1)
               loop = 0;
          else if ((c = getchar()) == '\n')
               loop = 0;
          else if (c == EOF)
               loop = 0;
          if (loop) {
               s[i] = c;
               ++i;
          }
     }
     if (c == '\n') {
          s[i] = c;
          ++i;
     }
     s[i] = '\0';
     return i;
}
