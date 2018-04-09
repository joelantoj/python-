#include <stdio.h>

int main(void) {
	int n,t1,sq,sq1,f1;
	scanf("%d",&n);
	scanf("%d",&t1);
	sq=n*n;
	sq1=sq;
	if(t1>2)
	{
		while(t1>2)
		{
			f1=sq1*n;
			sq1=f1;
			t1--;
		}
		printf("%d",sq1);
	}
	else
	{
		printf("%d",sq);
	}
}
