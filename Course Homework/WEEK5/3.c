#include<stdio.h>
#include<string.h>
int pow(int a,int b){
    int i=1;
    for(int j=1;j<=b;j++){
        i*=a;
    }
    return i;
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d ",a/2);
    int b=a/2;
    char c[11];
    memset(c,'@',sizeof(c));
    for(int i=10;i>=1;i--){
        c[i]= 'a' + (b%pow(10,i))/pow(10,i-1);
    }
    int first=1;
    for(int i=10;i>=1;i--){
        if(first==1 && c[i]!='a'){
            first=0;
        }
        if(first==0){
            printf("%c",c[i]);
        }
    }
}