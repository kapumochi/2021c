#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int ans = 1;
    for(int i = 1; i <= m; i++){
        if(m % i && n % i == 0) ans = i;
    }
    printf("%d",ans);
}
