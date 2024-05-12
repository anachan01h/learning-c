#include <stdio.h>

int main(void) {
     int i, j, c, n;
     int n_char[95];
     int max_n = 0;

     for (i = 0; i < 95; ++i)
          n_char[i] = 0;

     while ((c = getchar()) != EOF)
          if (c >= 0x20 && c < 0x7F)
               ++n_char[c - 0x20];

     for (i = 0; i < 95; i++)
          if (n_char[i] > max_n)
               max_n = n_char[i];
     
     for (i = 0; i < 95; ++i) {
          printf("%c | ", i + 0x20);
          for (j = 0; j < (n_char[i] * 76) / max_n; ++j)
               putchar('=');
          putchar('\n');
     }

     return 0;
}
