#include <stdio.h>
#include <limits.h>

int main(void) {
     unsigned long limit;
     int i;

     printf("# Limites de unsigned char\n");
     printf("MIN: %u, MAX: %u (de limits.h)\n", 0, UCHAR_MAX);
     limit = 1;
     for (i = 0; i < 8 * sizeof(char); ++i)
          limit *= 2;
     printf("MIN: %u, MAX: %lu\n", 0, limit - 1);

     printf("# Limites de signed char\n");
     printf("MIN: %d, MAX: %d (de limits.h)\n", CHAR_MIN, CHAR_MAX);
     printf("MIN: %ld, MAX: %ld\n", - (limit / 2), limit / 2 - 1);

     printf("# Limites de unsigned short\n");
     printf("MIN: %u, MAX: %u (de limits.h)\n", 0, USHRT_MAX);
     limit = 1;
     for (i = 0; i < 8 * sizeof(short); ++i)
          limit *= 2;
     printf("MIN: %u, MAX: %lu\n", 0, limit - 1);

     printf("# Limites de signed short\n");
     printf("MIN: %d, MAX: %d (de limits.h)\n", SHRT_MIN, SHRT_MAX);
     printf("MIN: %ld, MAX: %ld\n", - (limit / 2), limit / 2 - 1);

     printf("# Limites de unsigned int\n");
     printf("MIN: %u, MAX: %u (de limits.h)\n", 0, UINT_MAX);
     limit = 1;
     for (i = 0; i < 8 * sizeof(int); ++i)
          limit *= 2;
     printf("MIN: %u, MAX: %lu\n", 0, limit - 1);

     printf("# Limites de signed int\n");
     printf("MIN: %d, MAX: %d (de limits.h)\n", INT_MIN, INT_MAX);
     printf("MIN: %ld, MAX: %ld\n", - (limit / 2), limit / 2 - 1);

     printf("# Limites de unsigned long\n");
     printf("MIN: %u, MAX: %lu (de limits.h)\n", 0, ULONG_MAX);
     limit = 1;
     for (i = 0; i < 8 * sizeof(long); ++i)
          limit *= 2;
     printf("MIN: %u, MAX: %lu\n", 0, limit - 1);

     printf("# Limites de signed long\n");
     printf("MIN: %ld, MAX: %ld (de limits.h)\n", LONG_MIN, LONG_MAX);
     printf("MIN: %ld, MAX: %ld\n", - ((limit - 1) / 2) - 1, (limit - 1) / 2);
}
