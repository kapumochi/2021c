#include <stdio.h>
int a[10] = {9,8,7,6,5,4,3,2,1,0};
int main()
{
	for(int i=0; i<10; i++) printf("%d",a[i]);
    printf("\n");

	for(int k=0; k<10; k++){
		for(int t=k+1; t<10; t++){
			if(a[k] > a[t]){
				int temp=a[k];
				a[k]=a[t];
				a[t]=temp;
			}
		}
	}

	for(int j=0; j<10; j++) printf("%d",a[j]);
}
