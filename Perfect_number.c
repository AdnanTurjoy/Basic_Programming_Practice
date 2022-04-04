
#include<stdio.h>
int main()
{
    int n,i,k,s=0;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n-1;i++){
        int rem = n % i;         /// total factor gula jog korlei hobe
        if(rem ==0) {
            s=s+i;
        }
    }
    if(s==k) printf("Perfect");
    else printf("Not Perfect");
    return 0;
}
