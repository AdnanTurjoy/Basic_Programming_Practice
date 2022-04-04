
#include<stdio.h>
int main()
{
    int a[10],i,j,k,ck;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
        for(i=0;i<5;i++) printf("%d ",a[i]);

    return 0;
}
