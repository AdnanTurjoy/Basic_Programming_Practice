
#include<stdio.h>
int main()
{
    int a[10],i,j,k,ck,temp;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        j=i-1;
         temp=a[i];
        while(j>=0){
            if(temp<a[j]){
                a[j+1]=a[j];
            }
            else{
                break;
            }
            j--;
        }
        a[j+1]=temp;
    }
        for(i=0;i<5;i++) printf("%d ",a[i]);

    return 0;
}

