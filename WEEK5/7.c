/*
编写程序，输入字符串到字符数组s中，再输入一个字符给变量c，判断s中是否有c，若有则将该字符从s中删除后输出。若没有，则输出字符串“NotFound”。
输入2行，1个字符串和1个字符：
输出：删除后的字符串
样例1：
输入：
smiles
s
输出：
mile
样例2：
输入：
smiles
a
输出：
NotFound
样例输入：
aab
b
样例输出：
aa
*/
#include<stdio.h>
#include<string.h>
int main(){
    char c[100],tg;
    int a[100],fd=0;
    memset(c,'@',sizeof(c));
    memset(a,0,sizeof(a));
    gets(c);
    scanf("%c",&tg);
    int i=0,str=strlen(c);
    while(i<str){
        if(c[i]==tg){
            a[i]=1;
            fd=1;
        }
        i++;
    }
    i=0;
    while(i<str){
        if(fd==0){
            printf("NotFound");
            break;
            
        }
        if(a[i]==0){
            printf("%c",c[i]);
        }
        i++;
    }
}