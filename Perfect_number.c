
#include<stdio.h>
int main()
{
    int n,i,k,s=0;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n-1;i++){
        int rem = n % i;         /// perfect number, a positive integer that is equal to the sum of its proper divisors. 
                                /// Strong number is a number whose sum of all digits' factorial is equal to the number 'n'
        if(rem ==0) {           /// An Armstrong number is one whose sum of digits raised to the power three equals the number itself.
            s=s+i;
        }
    }
    if(s==k) printf("Perfect");
    else printf("Not Perfect");
    return 0;
}
