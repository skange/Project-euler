/*************************************************************************
	> File Name: 3-3.cpp
	> Author: ShangKe
	> Mail: 
	> Created Time: 2018年07月22日 星期日 16时40分35秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

#define NUM 600851475143

int main() {
    int64_t num = NUM;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == (num == i) && (num /= i));
    }
    printf("%"PRId64"\n", num);
    return 0;
}
