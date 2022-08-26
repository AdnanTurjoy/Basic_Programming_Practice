
#include<stdio.h>
int main()
{
    int n,i,k,s=0;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n-1;i++){
        int rem = n % i;         /// perfect number, a positive integer that is equal to the sum of its proper divisors. 
        if(rem ==0) {
            s=s+i;
        }
    }
    if(s==k) printf("Perfect");
    else printf("Not Perfect");
    return 0;
}
