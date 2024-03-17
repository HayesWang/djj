/*
闰年计算。程序输入一个正整数Y，以及另一个正整数N，以一个空格分隔。
计算从Y年开始后的第N个闰年是哪一年（如果Y本身是闰年，则Y之后的第一个闰年是Y）。

输入格式：两个整数：Y和N。用空格分隔

输出个数：一个整数
*/

#include <stdio.h>

// 判断一个年份是否是闰年
int is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int Y, N, count = 0;

    scanf("%d %d", &Y, &N);

    // 如果Y本身是闰年，先把计数器加一
    if (is_leap_year(Y)) {
        count++;
    }

    while (count < N) {
        Y++; // 逐年增加
        if (is_leap_year(Y)) {
            count++;
        }
    }

    printf("%d\n", Y);

    return 0;
}
