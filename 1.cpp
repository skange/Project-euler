#include<stdio.h>
int main() {
	int sum = 0;
	for(int i = 3, j = 5, k = 15; i <= 1000; i += 3) {
		sum += i;
		if(j < 1000){
			sum += j;
			j += 5; 
		}
		if(k < 1000){
			sum -= k;
			k +=15;
		}
	}
	printf("%d", sum);
	return 0;
} 
