#include <stdio.h>

int main(void) {
     int c;
     long bchars = 0;
     while ((c = getchar()) != EOF)
          if (c == ' ' || c == '\n' || c == '\t')
               ++bchars;
     printf("%ld\n", bchars);
     return 0;
}
