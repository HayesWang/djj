/*
每天一开始，第一个在机房里签字的人会打开门，最后一个签字的人会锁上门。根据签到的记录，你应该找到那天开门和锁门的人。
记录保证每个人的签到时间必须早于签退时间，并且没有两个人同时签到或签退。
输入：一天的记录，记录以正整数M开头，M是记录总数，后跟M行，每行的格式为：
ID_number Sign_in_time Sign_out_time，其中时间以HH:MM:SS格式给定，ID number是一个不超过15个字符的字符串。 
输出：在一行中输出当天开锁和锁门的人员的ID号。这两个ID号必须用一个空格隔开。

样例输入：
3 
CS301111 15:30:28 17:00:10 
SC3021234 08:00:00 11:25:25 
CS301133 21:45:00 21:58:40
样例输出：
SC3021234 CS301133
*/
#include<stdio.h>

struct sign
{
    char ID[20];
    int s1h;
    int s1m;
    int s1s;
    int soh;
    int som;
    int sos;
}stu[100];

int main(){
    int n,a[100],b[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s %d:%d:%d",stu[i].ID,&stu[i].s1h,&stu[i].s1m,&stu[i].s1s);
        scanf("%d:%d:%d",&stu[i].soh,&stu[i].som,&stu[i].sos);
    }
    for(int i=1;i<=n;i++){
        a[i]=stu[i].s1h*10000+stu[i].s1m*100+stu[i].s1s;
        b[i]=stu[i].soh*10000+stu[i].som*100+stu[i].sos;
    }
    int min=__INT_MAX__,max=0,mm,nn;
    for(int i=1;i<=n;i++){
        if(a[i]<min){
            min=a[i];
            mm=i;
        }
        if(b[i]>max){
            max=b[i];
            nn=i;
        }
    }
    printf("%s %s",stu[mm].ID,stu[nn].ID);
}