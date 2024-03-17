/*
求一组数中的最大值，然后统计该最大值在这组数中出现的次数
输入：元素个数n和n个整数。n<200。（要先输入个数n，然后再输入n个数）
输出：最大值及出现的次数。数据间以一个逗号隔开。

样例输入：
1 2
样例输出：
2,1
*/
#include<stdio.h>
#include<string.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int n,a[201];
    memset(a,999999,sizeof(a));
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(a[j]>a[j+1]&&i!=n){
                swap(&a[j],&a[j+1]);
            }
        }
    }
   /*
   for(int i=1;i<=n;i++){
        printf("%d",a[i]);
    }
   */ 
    //printf("\n");
    int max=a[n],ctr=0;
    for(int i=n;i>=1;i--){
        if(a[i]!=max) break;
        ctr++;
    }
    printf("%d,%d",max,ctr);
}