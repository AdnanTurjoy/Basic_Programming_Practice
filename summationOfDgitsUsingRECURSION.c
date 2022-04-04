

#include<stdio.h>
int sumOfDigit(int n){
if(n==0){
    return 0;
}
else{
        return n%10 + sumOfDigit(n/10);

}
}

int main()
{
    int n;
    scanf("%d",&n);
    int sum = sumOfDigit(n);
    printf("%d",sum);
    return 0;
}
