#include <stdio.h>
int a[100];
int main()
{
	for(int i=0; i<100; i++) scanf("%d",&a[i]);

	for(int k=0; k<100; k++){
		for(int t=k+1; t<100; t++){
			if(a[k] > a[t]){
				int temp=a[k];
				a[k]=a[t];
				a[t]=temp;
			}
		}
	}

	for(int j=0; j<100; j++) printf("%d\n",a[j]);
}
