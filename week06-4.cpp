/*
�T���Φ���: ��������M�n�j��ĤT��
�Ҧp:�ܼ�a,b,c(a������̪���)
����:��u�䥭��M==�̪��䥭��M
�U��:��u�䥭��M>�̪��䥭��M
�w��:��u�䥭��M<�̪��䥭��M

***�Ѧҵ��G****
6 3 2
���~

6 3 4
�w��*/
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

	else if(a*a == c*c + b*b)printf("����");
	else if(a*a < c*c + b*b)printf("�U��");
	else if(a*a > c*c + b*b)printf("�w��");
}
