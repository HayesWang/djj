#include<stdio.h>
#include<math.h>
int main(){
    int m,n;
    int ctr=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=j;k<=n;k++){
                if(i*i+j*j==k*k){
                    ctr++;
                }
            }
        }
    }
    printf("%d",ctr);
}