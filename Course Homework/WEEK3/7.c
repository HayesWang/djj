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
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%7==0){
            printf("%d是7的倍数\n",i);
        }
        for(int j=1;j<=10;j++){
            if((i % pow(10,j))/pow(10,j-1) == 7){
                printf("%d是带7的数\n",i);
                break;
            }
        }
    }
}