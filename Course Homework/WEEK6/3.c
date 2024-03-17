/*
编写一个程序，从键盘上读入一个数字串，把数字转化为对应的小写英语数字单词输出。例如：输入234，输出two three four。
输入：一串数字
输出：用空格隔开英文数字单词（英文字母都是小写）。
样例：
234
two three four
样例输入：
0
样例输出：
zero
*/
#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    scanf("%s",c);
    int str=strlen(c);
    for(int i=0;i<str;i++){
        if(i>0) printf(" ");
        switch (c[i]) { // 根据数字字符输出对应的英文单词
                case '0':
                    printf("zero");
                    break;
                case '1':
                    printf("one");
                    break;
                case '2':
                    printf("two");
                    break;
                case '3':
                    printf("three");
                    break;
                case '4':
                    printf("four");
                    break;
                case '5':
                    printf("five");
                    break;
                case '6':
                    printf("six");
                    break;
                case '7':
                    printf("seven");
                    break;
                case '8':
                    printf("eight");
                    break;
                case '9':
                    printf("nine");
                    break;
        }
    }
}