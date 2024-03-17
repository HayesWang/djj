/*
如果一个数列中某一段（至少有两个元素）的各元素值均相同，则称其为等值数列段。等值数列段中元素的个数叫做等值数列段的长度。
输入： 分两行输入序列长度N和N个整数（其中1<=N<=50), N个整数的每个数之间以空格隔开。
输出： 数组中长度最大的等值数列段的始末下标（0～N-1），用英文逗号分隔。如果没有等值数列段，则输出NO
说明：
如果有多个同等长度的等值数列，只输出第一个等值数列的起止下标。
样例输入：
7
3 1 2 1 1 2 2
样例输出：
3,4
*/
#include<stdio.h>
#include<string.h>
int main(){
    int a,b[1000],ctr=1,cf[10],st[10];
    memset(cf,0,sizeof(cf));
    memset(st,0,sizeof(st));
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b[i]);
    }
    for(int i=1;i<=a;i++){
        ctr=1;
        int j=i;
        while(b[i+1]==b[i]){
//            printf("%d,%d,%d ",i,b[i],ctr);
            ctr++;
            i++;
            
        }
//        printf("\n %d",cf[b[i]]);
        i=j;
        if(cf[b[i]]<ctr){
            st[b[i]]=i;
            cf[b[i]]=ctr;
//            printf("%d,%d,%d | ",i ,st[b[i]],cf[b[i]]);
        }
    }
    int bgst=0;
    for(int i=0;i<10;i++){
 //       printf("%d %d",st[i],cf[i]);
 //       printf("\n");
        if(cf[i]>cf[bgst]){
            bgst=i;
        }
    }
    if(cf[bgst]!=1){
        printf("%d,%d",st[bgst]-1,st[bgst]+cf[bgst]-2);
    }else{
        printf("NO");
    }
    return 0;
}