#include <stdio.h>

int main()
{
   int i,j,x;
   int n;

   printf("�п�J�j�p:\n");
   scanf("%d",&n);

   for(i=1; i<=n; i++)
   {
   		for(j=1; j<=i; j++) printf(" ");
   		for(x=1; x<=n; x++) printf("*");
        printf("\n");
   }

   return 0;
}
