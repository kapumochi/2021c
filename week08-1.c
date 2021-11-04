#include <stdio.h>
int main()
{
    int n,i;
    int w;
    scanf("%d",&n);

    float sum = 0;

	for(int i=1;i<=n;i++){
	scanf("%d",&w);
	sum=sum+w;
    }
    printf("%.2f",sum/n);
}
