#include<stdio.h>
#include<math.h>
int main(){
    double sum=0;
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i+=1){
        sum+=pow(-1,i)*1/(2*i+1);
    }
    printf("%lf",sum);
    return 0;
}