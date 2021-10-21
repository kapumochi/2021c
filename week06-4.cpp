/*
三角形成立: 兩邊長的和要大於第三邊
例如:變數a,b,c(a為邊長最長邊)
直角:兩短邊平方和==最長邊平方和
銳角:兩短邊平方和>最長邊平方和
鈍角:兩短邊平方和<最長邊平方和

***參考結果****
6 3 2
錯誤

6 3 4
鈍角*/
#include <stdio.h>
int main()
{
	int a, b, c, temp;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) (temp=a,a=b, b=temp);
	if (b < c) (temp=b, b=c, c=temp);
	if (a < c) (temp=a, a=c, c=temp);

//seprate triangle
	if(b + c < a) printf("Error");

	else if(a*a == c*c + b*b)printf("直角");
	else if(a*a < c*c + b*b)printf("銳角");
	else if(a*a > c*c + b*b)printf("鈍角");
}
