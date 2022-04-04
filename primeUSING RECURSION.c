

#include<stdio.h>
int isPrime(int n,int i){
 if(i==1){
    return 1;
 }
 else{
    if(n%i==0){
        return 3;
    }
    else{
        return isPrime(n,i-1);
    }
 }

}
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int prime = isPrime(n,n/2);
    if(prime==1){
        printf("%d is a prime\n",n);
    }
    else{
        printf("%d is not a prime\n",n);
    }

    return 0;
}
