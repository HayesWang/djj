#include<stdio.h>
int main(){
    int sec,h,m,s;
    h=0;
    m=0;
    scanf("%d",&sec);
    s=sec;
    for(;s>=60;m=m+1){
        s=s-60;
    }
    for(;m>=60;h=h+1){
        m=m-60;
    }
    printf("%d:%.2d:%.2d\n", h, m, s);

    return 0;
}