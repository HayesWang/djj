// 编写一个C程序，提示用户输入一个整数，然后根据输入的整数值输出不同的提示信息。
// 如果输入的值小于0，输出"输入的值为负数"；如果输入的值等于0，输出"输入的值为零"；
// 如果输入的值大于0，输出"输入的值为正数"。

#include <stdio.h>

int main() {
    int num; 
    printf("请输入一个整数：");
    scanf("%d", &num); 
    if (num < 0) {
        printf("输入的值为负数\n"); 
    } else if (num == 0) { 
        printf("输入的值为零\n"); 
    } else {
        printf("输入的值为正数\n"); 
    }
    return 0;
}
