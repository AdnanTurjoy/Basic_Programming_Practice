
#include<stdio.h>
int main()
{
    int a,s=0,i,n;
    scanf("%d",&n);
    while(n!=0){
        int rev = n%10;
        s=s+rev;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}
