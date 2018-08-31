/*************************************************************************
	> File Name: 7-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 13时30分42秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 200000

int main() {
    int prime[MAX_N] = {0};
    for (int i = 2; i < MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    printf("%d", prime[prime[0]]);
    return 0;
}





