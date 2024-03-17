#include<stdio.h>

void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
}

int main(){
    int a[1000],n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=n;j>=1;j--){
        a[j+m]=a[j];
    }
    for(int i=1;i<=m;i++){
        a[i]=a[n+i];
    }
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d",a[i]);
        }else{
            printf(" %d",a[i]);
        }
    }
    return 0;
}