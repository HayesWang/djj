/*
求n个数的最大公约数。其中：2<=n<50
输入：n个正整数，用空格隔开。以0作为输入的结束标志。
输出：分两行显示。分别显示最大公约数和这n个数，n个数用1个空格隔开（第一个数前及最后一个数之后无空格）。
注：输入中，输入数的个数不确定，但最多不超过50，不小于2，最后的0是结束标志。输出中，第1行是它们的最大公约数，第2行是输入的n个数，中间用1个空格隔开。
样例输入：
4928 4160 6144  0
样例输出：
64
4928 4160 6144
*/
#include <stdio.h>
int main(){
    int c[101],min=9999999,max,ctr=0;
    for(int i=1;1>0;i++){
        scanf("%d",&c[i]);
        if(c[i]==0) break;
        if(c[i]<min) min=c[i];
        ctr++;
    }
    for(int i=1;i<=min;i++){
        int yes=1;
        for(int j=1;j<=ctr;j++){
            if(c[j]%i != 0) yes=0;
        }
        if(yes == 1){
            max=i;
        }
    }
    printf("%d\n",max);
    for(int i=1;i<=ctr-1;i++){
        printf("%d ",c[i]);
    }
    printf("%d",c[ctr]);
}