#include<stdio.h>
#include<string.h>


int main(){
    int a,b,m[1000],n[1000],h[1000];
    memset(h,0,sizeof(h));
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&m[i]);
    }
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        scanf("%d",&n[i]);
    }
    int first=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(m[i]==n[j]&&h[m[i]]==0){
                h[m[i]]=1;
                if(first==0){
                    first=1;
                    printf("%d",m[i]);
                }else{
                    printf(" %d",m[i]);
                }
            }
        }
    }
}