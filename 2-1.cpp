#include <stdio.h>
#include <inttypes.h>

int32_t f[500] = {0};

int32_t main() {
    f[0] = 2;
    f[1] = 1; f[2] = 2;
    
    while (f[f[0]] < 4000000) {
        f[0]++;
        f[f[0]] = f[f[0] - 1] + f[f[0] - 2];
    }
    int32_t sum = 0;
    for (int32_t i = 1; i <= f[0]; i++) {
        if (f[i] % 2 == 0) sum += f[i];
    }
    printf("%d\n", sum);

    return 0;

}
