#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(void) {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = binsearch(1, v, 10);

    if (result == -1)
        printf("Deu ruim...\n");
    else
        printf("Ebaaaaaa! Tá em %d\n", result);

    return 0;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x <= v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (x == v[mid]) ? mid : -1;
}
