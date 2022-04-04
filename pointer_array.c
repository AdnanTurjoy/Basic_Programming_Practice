
#include<stdio.h>
int main()
{
    int a[7],sum=0;
    for(int i=0;i<5;i++) scanf("%d",(a+i));
    for(int i=0;i<5;i++) sum+=*(a+i);  printf("%d",sum);
    return 0;
}
