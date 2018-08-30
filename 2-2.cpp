#include <stdio.h>
#include <inttypes.h>

int32_t main() {
    int32_t a, b, c, sum = 0;
    a = 1; b = 1;
    while (b < 4000000) {
        if (b % 2 == 0) sum += b;
        c = b;
        b = a + b;
        a = c;   
    }
    printf("%d\n", sum);
    return 0;

}
