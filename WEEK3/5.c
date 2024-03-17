#include<stdio.h>
int main(){
    char a[20];
    int b[20];
    int sum=0;
    scanf("%s",a);
    for(int i=0;i<20;i++){
        b[i]=a[i] - '0';
        sum+=b[i];
    }
    if(sum%2==0){
        printf("0");
    }else{
        printf("1");
    }
}