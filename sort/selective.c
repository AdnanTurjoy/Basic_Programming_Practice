

#include<stdio.h>
int main()
{
    int a[10],i,j,k,ck,temp;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5;i++){
             temp=a[i];
            ck=i;
        for(j=i;j<5;j++){

            if(a[i]>a[j]){
                temp=a[i];
                ck=j;
            }
        }
        temp=a[i];
        a[i]=a[ck];
        a[ck]=temp;
    }
        for(i=0;i<5;i++) printf("%d ",a[i]);

    return 0;
}
