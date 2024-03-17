#include <stdio.h>

int reverse(int num){
    int sum=0;
    while (num != 0)
    {
        int a=num%10;
        sum=sum*10 + a;
        num/=10;
    }
    return sum;
    
}

int main(){
    int sum,min,a,b,aa,bb;
    scanf("%d %d",&sum,&min);
    a=(sum+min)/2;
    b=(sum-min)/2;
    aa=reverse(a);
    bb=reverse(b);
    printf("%d %d", aa+bb, aa-bb);
    return 0;
}