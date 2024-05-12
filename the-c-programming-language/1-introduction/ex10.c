#include <stdio.h>

int main(void) {
     int c;
     char flag;
     while ((c = getchar()) != EOF) {
          flag = 0;
          if (c == '\b') {
               printf("\\b");
               flag = 1;
          }
          if (c == '\t') {
               printf("\\t");
               flag = 1;
          }
          if (c == '\\') {
               printf("\\\\");
               flag = 1;
          }
          if (flag == 0)
               putchar(c);
     }
     return 0;
}
