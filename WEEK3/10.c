#include<stdio.h>
int pow(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}

int main(){
    int a;
    int ans=0;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        ans+=pow((a%pow(10,i))/pow(10,i-1),2);
    }
    printf("%d",ans);
    return 0;
}