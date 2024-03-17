/*
编程计算函数ack(m,n)的值。m,n的定义域是非负整数(m<=3，n<=9)。
当m=0时，ack(0,n)=n+1
当n=0时，ack(m,0)=ack(m-1,1)
其它情况下，ack(m,n)=ack(m-1,ack(m,n-1))

*/

#include <stdio.h>

int ack(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ack(m - 1, 1);
    } else {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main() {
    int m, n;

    // 输入 m 和 n 的值
    scanf("%d %d", &m, &n);

    // 计算 ack(m,n) 的值并输出结果
    printf("ack(%d,%d)=%d",m,n,ack(m, n));

    return 0;
}
