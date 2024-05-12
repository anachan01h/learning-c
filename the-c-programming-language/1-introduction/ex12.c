#include <stdio.h>

int main(void) {
     int c;
     char flag = 0;
     while ((c = getchar()) != EOF) {
          if (c == ' ' || c == '\t' || c == '\n') {
               putchar('\n' * flag);
               flag = 0;
          } else if (flag == 0)
               flag = 1;

          if (flag == 1)
               putchar(c);
     }

     return 0;
}
