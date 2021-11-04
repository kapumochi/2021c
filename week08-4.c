#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int m=2; m<=n; m++)
    {
        int bad=0;
        for(int i=2; i<m; i++)
        {
            if(m%i==0) bad++;
        }
        if(bad==0) printf("%d ",m);
    }
}
