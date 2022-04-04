#include<stdio.h>

int fact(int n){
 if(n==0 || n==1){
    return n;
 }
 else{
    return n*fact(n-1);
 }
}
int main(){
int n;
 scanf("%d",&n);
 printf("%d",fact(n));


return 0;
}


/*  /// Normal Factorial
int n,i,j,mul=1;
 scanf("%d",&n);
 for(i=n;i>0;i--){
    mul=mul*i;
}
printf("%d",mul);
*/
