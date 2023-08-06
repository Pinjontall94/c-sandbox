/* C Sandbox */

#include <stdio.h>

int inc(int n) {
    return n + 1;
}

int main(void) {
    int result = inc(68);
    printf("Result: %d\n", result);
    return 0;
}
