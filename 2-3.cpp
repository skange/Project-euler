#include <stdio.h>
#include <inttypes.h>

int32_t main() {
	int32_t f[3] = {0};
	int32_t sum = 2;
	int32_t i = 2;
    f[0] = 2;
    f[1] = 1; f[2] = 2;
    while (f[f[0] % 3] < 4000000) {
    	i++;
        f[i % 3] = f[(i + 1) % 3] + f[(i + 2) % 3];
        (f[i % 3] % 2 == 0) && (sum += f[i % 3]);
    }
    printf("%d\n", sum); 
    return 0;

}
