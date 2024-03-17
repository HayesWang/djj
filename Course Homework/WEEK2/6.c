#include<stdio.h>


int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b){
        int d=a;
        a=b;
        b=d;
    }
    if(a>c){
        int d=a;
        a=c;
        c=d;
    }
    if(b>c){
        int d=b;
        b=c;
        c=d;
    }
    if(a+b>c){
        printf("YES");
    }else{
        printf("ERROR DATA");
    }
}