

#include<stdio.h>
int main()
{
    int i,j,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            s=s+j;
        }
    }
    printf("%d",s);
    return 0;
}
