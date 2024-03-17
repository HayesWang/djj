#include <stdio.h>

int main(){
    int a,b;
    int ans;
    scanf("%d%d",&a,&b);
    if(((a*a)+(b*b)) >= 100){
        ans =((a*a+b*b) / 100);
    }else{
        ans =(a*a+b*b);
    }
  	printf("%d",ans);
}