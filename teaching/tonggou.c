// Created on iPad.

#include <stdio.h>
#include <math.h>

int cf(int a,int b){
   int num=1;
   for(int i=1;i<=b;i++){
      num*=a;
   }
   return num;
}//这块我怎么写的不用管，这个意思就是求a的b次方的一个函数，下面A处用到

/*
大体思路：
1.输入m，n
2.循环节为i，从m遍历到n
3.求每一个数字的平方数
4.从平方数的最后一位向前遍历，尝试找到该循环节i
   举例：i=25 -> i方=625 -> 最后一位=5 不是i -> 最后两位=25 是i ->输出i
*/

int main(){
   int m,n;
   int t;
   scanf("%d %d",&m,&n);
   for(int i=m;i<=n;i++){
      t=1;//t的目的：第几位计数器
      int pow=i*i;
      while(cf(10,t)<pow){//A：乘方函数，不用管，你可以自己在主函数里写循环求这个东西，也可以网上搜索有没其他方案
         //上面这个while：从最后一位遍历，判断是否遍历完平方数的每一位
         if(i==pow%cf(10,t)){
            printf("%d ",i);//如果相等输出，并退出循环
            break;
         }else{
            t+=1;//不相等说明不符合，再向前遍历一位
         }
      }
   }
   return 0;
}