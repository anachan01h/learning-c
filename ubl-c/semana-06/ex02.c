#include <stdio.h>
#include <stdint.h>

uint32_t to_argb(uint32_t color);

int main(void) {
    uint32_t color = 0x563412FF;
    printf("Cor convertida para o formato ARGB: %X\n", to_argb(color));
    return 0;
}

uint32_t to_argb(uint32_t color) {
    uint32_t new_color = 0;
    new_color |= color << 24;    // A
    new_color |= (color & 0x0000FF00) << 8;    // R
    new_color |= (color & 0x00FF0000) >> 8;    // G
    new_color |= color >> 24;    // B
    return new_color;
}
