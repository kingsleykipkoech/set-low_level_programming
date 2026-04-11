#include <stdio.h>

#define MULTIPLY(a, b) a * b

int main(void)
{
    int result = MULTIPLY(2 + 3, 4);
    printf("Result: %d\n", result); /* Expected 20, but gets 14 (2 + 3 * 4) */
    return (0);
}
