/*
查找一个字符在字符串中出现的第一个位置并输出这个位置。位置从0开始。
输入输出格式：
输入：待查找的字符串（字符个数不超过100）和需要查找的字符，字符串中可能含有空格。（输入时，待查找的字符串与所需查找的字符用*号隔开）如：“待查找字符串*需要查找的字符”
输出：字符的位置（如有多个相同的字符，只查找第一个，如果没有输出-1。）

样例输入：
fbhby Wml*W
样例输出：
6
*/
#include<stdio.h>
#include<string.h>
int main(){
    char c[101],tg;
    scanf("%[^*]*%c",c,&tg);
    int len=strlen(c);
    //printf("%d %c",len,tg);
    for(int i=0;i<len;i++){
        if(c[i]==tg){
            printf("%d",i);
            break;
        }
        if(i==len-1){
            printf("-1");
        }
    }
}