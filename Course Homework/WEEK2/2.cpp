#include <stdio.h>

int main(){
    float a,b,c;
    int ans,sum;
    scanf("%f%f%f",&a,&b,&c);
    sum=(a+b+c)*10/1;
    ans = (a+b+c)/1;
    if(sum%10 >= 5){
        ans = ans+1;
    }
    printf("%g %d",a+b+c,ans);
}