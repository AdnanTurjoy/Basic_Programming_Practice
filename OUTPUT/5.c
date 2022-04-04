
#include<stdio.h>

int main()
{
    union ver{
    int a,b;
    };
    union ver v;

    v.b=220;
    v.a=50;
    printf("%d",v.b);
    return 0;
}
