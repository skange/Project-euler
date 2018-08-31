#include<stdio.h>
#include<math.h>

bool is_palindromic (int num) {
    int high = pow(10, floor(log10(num)));
    while (high > 0) {
        if (num / high != num % 10) {
            return 0;
        }
        num %= high;
        num /= 10;
        high /= 100;

    }
    return 1;
}

int main() {
	int max = 0;
	for (int i = 999; i >= 100; i--) {
		for (int j = 999; j >= 100; j--) {
		    (i * j > max) && (is_palindromic(i * j)) && (max = i * j);
	    }
    }
    printf("%d", max);
    return 0;
}
