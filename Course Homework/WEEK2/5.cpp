#include<stdio.h>
#include<math.h>
int main(){
    float money,years,rate;
    scanf("%f,%f,%f",&money,&years,&rate);
    float r=pow(1+rate,years);
    float sum = money * r;
    printf("%.2f",sum);
}