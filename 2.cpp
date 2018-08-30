#include<stdio.h>
int main(){
	int num[1000] = {1, 2};
	int book;
	long long int sum = 0;
	for(int i = 2; i <= 1000; i++){
		num[i] = num[i - 1] + num[i - 2];
		if(num[i] >= 4000000){
			book = i;
			break;
		}
	}
	for(int i = 1; i <= book; i += 3) {
		sum += num[i];
	}
	printf("%lld", sum);
}
