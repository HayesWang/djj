//使用goto语句输出数字0-9

#include <stdio.h>

int main() {
    int i = 0;   // 定义一个整型变量 i，并将其初始化为 0

loop:           // 定义一个标签，名字为 loop
    printf("%d\n", i);   // 输出 i 的值
    i++;        // 将 i 的值加 1
    if (i < 10) {       // 如果 i 小于 10，执行以下语句
        goto loop;      // 跳转到 loop 标签处，继续执行循环体
    }

    return 0;
}
