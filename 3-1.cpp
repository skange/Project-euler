#include<stdio.h>
#include<inttypes.h>
#define NUM 35
int main() {
	int64_t num = NUM;
	int64_t max;
	for (int64_t i = 2; i < NUM; i++) {
		while (num % i == 0) {
			num /= i;
			max = i;
		}
	}
	printf("%"PRId64"\n", max);
	return 0;
}
