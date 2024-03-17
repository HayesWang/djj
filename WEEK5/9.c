/*某城市最高的楼有一部电梯，该电梯依照输入楼层数的先后次序运行。
电梯最初在0层。运行完一个输入序列后就停止在该楼层，不返回0层。
编写程序计算电梯运行一个序列的时间。
电梯每上1层需要6秒。每下1层需要4秒。
如在某层停留，无论上下人多少，均停留5秒。
楼层值大于等于1，小于100 , 0在序列中表示结束序列输入。
输入：电梯运行序列（即：需要停靠的各楼层），用1个空格分隔，以0表示结束；
输出：电梯运行时间（秒）。
*/
#include<stdio.h>

int main()
{
	int layer,time=0,cnt=0,before=0;
	scanf("%d",&layer);
	while(layer!=0){
		if(layer>before){
			time+=(layer-before)*6;
			before=layer;
		}else if(layer<before){
			time+=(before-layer)*4;
			before=layer;
		}
		cnt+=1;
		scanf("%d",&layer);
	}
	time+=5*cnt;
	printf("%d",time);
	return 0;
}