#include<stdio.h>

int pow(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}

int main(){
    int a,b;
    int first=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int num=0;
        for(int j=1;j<=3;j++){
            num += pow((i%pow(10,j))/pow(10,j-1),3);
        }
        if(i==num){
            if(first==0){
                first=1;
                printf("%d",i);
            }else{
                printf(" %d",i);
            }
        }
    }
    if(first==0){
        printf("-1");
    }
}