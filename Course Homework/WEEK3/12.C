#include<stdio.h>
#include<memory.h>

int pow(int a,int b){
    int i=1;
    for(int j=1;j<=b;j++){
        i*=a;
    }
    return i;
}



int main(){
    int sum,min,a,b,zfa=1,zfb=1;
    scanf("%d %d",&sum,&min);
    a=(sum+min)/2;
    b=(sum-min)/2;
    //printf("%d %d\n",a,b);
    /*if(a<0){
        zfa=-1;
    }
    if(b<0){
        zfb=-1;
    }*/
    int c[10],d[10];
    for (int i = 1; i <= 10; i++)
    {
        c[i]=(a%pow(10,i))/pow(10,i-1);
        //printf("%d ",c[i]);
    }
    for (int i = 1; i <= 10; i++)
    {
        d[i]=(b%pow(10,i))/pow(10,i-1);
    }
    int aa=0,bb=0,aaa=0,bbb=0;
    for(int i=10;i>=1;i--){
        if(c[i] != 0 && aaa==0){
            aaa=i;
        }
        if(aaa!=0){
            aa+= c[i]*pow(10,aaa-i);
        }
    }
    for(int i=10;i>=1;i--){
        if(d[i] != 0 && bbb==0){
            bbb=i;
        }
        if(bbb!=0){
            bb+= d[i]*pow(10,bbb-i);
        }
    }
    //printf("%d %d\n",aa*zfa,bb*zfb);
    printf("%d %d",aa*zfa+bb*zfb,aa*zfa-bb*zfb);
    return 0;
}