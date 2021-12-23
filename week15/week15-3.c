#include <stdio.h>
int main()
{
    int a, b ;
    scanf("%d %d", &a, &b);
    int c = a%b;
    printf("boss:%d second:%d third:%d\n", a, b, c);

    while(1){//1 is alway enable
        if (c == 0){
            printf("因為c是0,就break離開了迴圈\n");
            break;
        }
        a = b;
        b = c;
        c = a%b;
        printf("boss:%d second:%d third:%d\n", a, b, c);
    }
    printf("answer: %d", b);
}
