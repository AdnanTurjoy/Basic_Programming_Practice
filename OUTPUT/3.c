
#include<stdio.h>
#define max(a,b) (a>b?a:b)
int main()
{
    int i=1, j=2, k=0;
    k= max(++i, ++j);
    printf("%d",k);
    return 0;
}
