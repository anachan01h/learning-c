#include <stdio.h>

#define MAX_WORD_LEN 20

int main(void) {
     int i, j, c;
     int len;
     int word_len[MAX_WORD_LEN];
     int in_word = 0;

     for (i = 0; i < MAX_WORD_LEN; ++i)
          word_len[i] = 0;

     while ((c = getchar()) != EOF) {
          if (c == ' ' || c == '\n' || c == '\t') {
               if (in_word == 1) {
                    if (len < MAX_WORD_LEN)
                         ++word_len[len-1];
                    len = 0;
               }
               in_word = 0;
          } else
               in_word = 1;

          if (in_word == 1)
               ++len;
     }

     for (i = 0; i < MAX_WORD_LEN; ++i) {
          printf("%2d | ", i + 1);
          for (j = 0; j < word_len[i]; ++j)
               putchar('=');
          putchar('\n');
     }

     return 0;
}
