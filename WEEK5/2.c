#include<stdio.h>
#include<string.h>
int main(){
    int a[1001],sum[5];
    memset(sum,0,sizeof(sum));
    for(int i=1;;i++){
        scanf("%d",&a[i]);
        if(a[i]==-1){
            break;
        }
        sum[a[i]]++;
    }
    for(int i=0;i<=4;i++){
        if(i!=0){
            printf(" ");
        }
        printf("%d",sum[i]);
    }
    return 0;
}