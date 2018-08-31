#include<stdio.h>
bool judge(int num) {
	int n = num;
	int m = 0;
	while (n) {
		m = m * 10 + n % 10;
		n /= 10;
	}
	if (m == num) {
		return 1;
	}
	return 0;
}
int main() {
	int max = 0;
    int tep = 100;
	for (int i = 999; i >= tep; i--) {
		for (int j = i; j >= 100; j--) {
			if (i * j > max && judge(i * j)) {
				max = i * j;
                tep = j;
                break;
			}
		}
	}
	printf("%d", max);
} 
