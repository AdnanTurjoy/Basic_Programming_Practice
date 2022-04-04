#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=0;i<10;i++){
        for(j=10;j>0;j--){
            printf("*");
            if(j==i+1) break;
        }
        printf("\n");
    }
    return 0;
}
