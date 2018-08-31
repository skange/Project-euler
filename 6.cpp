/*************************************************************************
	> File Name: 6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 12时27分04秒
 ************************************************************************/

 #include<stdio.h>

 int main() {
     int num1 = 0, num2 = 0;
     for (int i = 1; i <= 100; i++) {
         num1 += i;
         num2 += i * i;
     }
     printf("%d", num1 * num1 - num2);
     return 0;
 }
