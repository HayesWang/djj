/*
编写程序，去掉字符串末尾多余的星号。输入带星号（*）的字符串和n，使字符串尾部的*号不得多于n个；若多于n个，则删除多余的*号；若少于或等于n个，则什么也不做，
字符串中间和前面的*号不删除。字符串的长度不超过200。字符串中的星号是英文星号。 
输入：一个字符串（无空格，字符串长度不超过100）和一个非负整数，中间用空格隔开。
输出：去掉多余*号的字符串。

样例：
***street**music****  2
***street**music**
*/

#include<stdio.h>
#include<string.h>
int main(){
    char c[201];
    int a,ctr=0;
    scanf("%s %d",c,&a);
    int len=strlen(c);
    for(int i=len-1;i>=0;i--){
        if(c[i]=='*'){
            ctr++;
            c[i]='\0';
        }else{
            break;
        }
    }
    printf("%s",c);
    if(ctr>a){
        ctr=a;
    }
    //printf("%d",ctr);
    for(int i=1;i<=ctr;i++){
        printf("*");
    }
}