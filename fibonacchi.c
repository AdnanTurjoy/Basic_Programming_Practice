/// nth position  fibonacchi
#include<stdio.h>
int fibo(int n){
 if(n<=1){
    return n;
 }
 else{
    return fibo(n-1) + fibo(n-2);
 }
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    printf("-----------------\n");
    while(i<n)
    {
        printf("%d ",fibo(i));           /// Series
        i++;
    }

    return 0;
}
