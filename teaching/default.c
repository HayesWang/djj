#include<stdio.h>
#include<math.h>
int cf(int a, int b) {
	int num = 1;
	for (int i = 1;i <= b;i++) {
		num *= a;
	}
	return num;
}
int main() {
	long long int n,m,t;
	int s=0;
	scanf("%lld",&n);
   //printf("%d",n);
	t = 0;
	while (n > 0) {
		if (n>0) {
			s += (n % cf(10, t+1)) / cf(10, t);
			n = n - (n % cf(10, t+1));
			//printf("%d %d ;", n,s);
			t += 1;
         /*s+= n%10;
         n/=10;*/
		}
      if(n==0){
         if (s % 2 == 1)
			{
				m = 1;
			}
			else
			{
				m = 0;
			}
			printf("%d", m);
         break;
      }
	}
	return 0;
		}