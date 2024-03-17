/*编写一个程序，读入n个用户姓名和电话号码，
按姓名的字典顺序排列后，输出用户的姓名和电话号码，n从键盘输入。
样例输入：3
zhang 12345678
wang 23456789
liu 34567890
样例输出：
liu 34567890
wang 23456789
zhang 12345678*/

#include <stdio.h>
#include <string.h>

struct info {
	char name[50];
	char nums[50];
};

void swap(struct info *a,struct info *b){
    struct info tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(void)
{
	struct info clients[50], a;
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s%s", clients[i].name, clients[i].nums);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (strcmp(clients[j].name, clients[j + 1].name) > 0) {
				swap(&clients[j],&clients[j+1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s %s\n", clients[i].name, clients[i].nums);
	}

	return 0;
}