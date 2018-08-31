#include<stdio.h>
#define ll long long
int gcd(long long int a, ll int b){
	return b == 0? a : gcd(b, a % b);
} 
int scm(ll int a, ll int b){
	return a * b / gcd(a, b);
}
int main() {
	long long int num = 1;
	for(int i = 2; i <= 20; i++){
		num = scm(num, i);
	}
	printf("%lld", num);
}
