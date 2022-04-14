
#include<stdio.h>
int main()
{
    int c=2,a=2;
    int m= c=a?a=0:2;
    printf("%d %d %d",a,c,m);
    return 0;
}
