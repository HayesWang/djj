/*
输入一个长度不超过 100 的字符串，删除串中的重复字符。
输入：输入要检查的字符串，长度不超过100个字符。例如：abacaeedabcdcd。
输出：删除重复字符后的字符串。例如：abced。

样例输入：
give
样例输出：
give
*/

#include<stdio.h>
#include<string.h>
int main(){
    char c[101],d[26];
    memset(d,0,sizeof(d));
    scanf("%s",c);
    int str=strlen(c);
    for(int i=0;i<str;i++){
        int j= c[i] - 'a';
        if(d[j]==0){
            d[j]=1;
            printf("%c",c[i]);
        }
    }

}