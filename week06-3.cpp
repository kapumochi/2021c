***參考結果***
20 61 49
max:61
mid:49
min:20*/
#include <stdio.h>
int main()
{
	int a, b, c, temp;
	scanf("%d %d %d", &a, &b, &c);
	if(a < b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(b < c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	if(a < c)
	{
		temp=a;
		a=c;
		c=temp;
	}
}
