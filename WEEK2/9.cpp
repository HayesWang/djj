#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    a%=10000000;
    a%=1000000;
    a/=100;
    printf("%d %d",a,a+1024);
    return 0;
}