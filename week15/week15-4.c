#include <stdio.h>
 int box(int,int);
 int main()
 {
     int a, b;
     scanf("%d %d", &a, &b);

     int ans = box(a, b);
     printf("%d",ans);
 }

 int box(int n, int m)
 {
    if(n == 0) return m;
    if(m == 0) return n;
    return box(m, n % m);
 }
