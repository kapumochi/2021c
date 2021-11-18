#include <stdio.h>
int main()
{
    int d[5]={100,200,300,400,500};
    //printf("d[0]:%d\n",d[0]);
    //printf("d[1]:%d\n",d[1]);
    //printf("d[2]:%d\n",d[2]);
    for(int i=0;i<5;i++){
        printf("d[%d] : %d\n",i,d[i]);
    }
}
