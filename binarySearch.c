
#include<stdio.h>
int binary_search(int a[], int search, int low, int high){
 while(low<=high){
    int mid = (low+high)/2;
    if(a[mid]==search) return mid;
    else if(a[mid]>search) {
        high=mid-1;
    }
    else{
        low= mid+1;
    }
 }
 return -1;
}
int main()
{
    int a[]={2,4,5,7,8,9}, search ,j,k;

    scanf("%d",&search);
    int n= binary_search(a,search,0,5);
    if(n==-1) printf("Not found");
    //else printf("found: %d",n+1);
    printf("%d",sizeof("adnan"));
    return 0;
}
