/*
求a+aa+aaa+aaaa+…+aa...a（n个），其中a为1～9之间的整数。
例如：当a = 1, n = 3时，求1+11+111之和为123；
输入：组成序列的数字a和求和项的数量n
输出：算式和结果。
样例输入：
2 7
样例输出：
2+22+222+2222+22222+222222+2222222=2469134
*/
#include <stdio.h>
#include <math.h>
int main(){
    int a,n,sum=0;
    scanf("%d %d",&a,&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",a);
            sum+=a*pow(10,j-1);
        }
        if(i!=n) printf("+");
    }
    printf("=%d",sum);
}