/*************************************************************************
	> File Name: 7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 12时59分25秒
 ************************************************************************/
#include<stdio.h>
#define MAX_N 200000
int main() {
    int prime[MAX_N] = {0};
    for (int i = 2; i * i<= MAX_N; i++) {
        if(!prime[i]){
            for (int j = i * i; j <= MAX_N; j += i) {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < MAX_N; i++) {
         if (!prime[i]) {
            prime[++prime[0]] = i;
        }
    }
    printf("%d", prime[10001]);
}
