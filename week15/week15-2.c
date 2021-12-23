#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a%b;
    while(1){//1 is alway enable
        if(c == 0)break;
    }
    printf("answer: %d", b);
}
