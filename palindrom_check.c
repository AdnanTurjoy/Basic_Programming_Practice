
#include<stdio.h>
int main()
{
    int n,p_sum=0,dup;
    scanf("%d",&n);
    dup= n;
    while(n>0){
       int rem = n%10;
       int div = n/10;

       p_sum = (p_sum*10)+rem;
       n=div;
    }
    if(dup==p_sum) printf("Palindrome");
    else printf("NOT Palindrome");
    return 0;
}
