#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);

int main(void) {
     int len;
     int i;
     char flag;
     char line[MAXLINE];

     while ((len = get_line(line, MAXLINE)) > 0) {
          for (i = len - 2; i >= 0; --i)
               if (line[i] != ' ' && line[i] != '\t' && !flag) {
                    line[i+1] = '\n';
                    line[i+2] = '\0';
                    flag = 1;
               }
          if (flag) {
               printf("%s", line);
               flag = 0;
          }
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
