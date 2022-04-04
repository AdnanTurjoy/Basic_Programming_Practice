

#include<stdio.h>

int main()
{
    int i=1, j=2, k=0;
    int r = (64>>(2+1-2))&(~(1<<2));
    printf("%d",r);
    return 0;
}
