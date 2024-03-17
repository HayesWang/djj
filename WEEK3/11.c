#include <stdio.h>

const double fdis=100.0000;

int main(){
    int n;
    scanf("%d",&n);
    double dis,re;
    dis=0.0000;
    re=fdis;
    for(int i=1;i<=n;i++){
        dis+=2*re;
        re/=2.0;
    }
    printf("%lf\n%lf",dis-100,re);
    return 0;
}